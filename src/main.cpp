#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <PubSubClient.h>

const char* ssid = "iPhone da Leticia";   //E um ponteiro e indica que o valor armazenado e uma constante, nunca ira mudar, ssid e uma variavel com o nome da rede 
const char* password = "leti2002"; // E um ponteiro e indica que o valor armazenado e uma constante, nunca ira mudar, password a senha da rede
const char* mqtt_server = "192.168.9.155"; // E um ponteiro e indica que o valor armazenado e uma constante, nunca ira mudar, mqtt_server e o IP do computador 

WiFiClient espClient; // Para criar um onjeto de cliente Wifi
PubSubClient client(espClient); //Cria uma instancia para conectar a internet 
const int Relay = D1; //declarando e iniciando uma constante 

void setup_wifi() {
  delay(10);
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }  // repete o ponto indicando que esta tentando fazer a conecxão com a rede, imprimindo um "."
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
} // Rede conectada e ira imprimir o IP do WIFI

void callback(char* topic, byte* payload, unsigned int length) {
  Serial.print("Message arrived [");
  Serial.print(topic);
  Serial.print("] ");
  String message;
  for (int i = 0; i < length; i++) {
    Serial.print((char)payload[i]);
  }
  Serial.println(message);
 //Imprime a mensagem que foi enviado pelo MQTT

  if (String(topic) == "ControleRelay"){
    if (message == "ON") {
      digitalWrite(Relay, LOW);
    } else if (message == "OFF") {
      digitalWrite(Relay, HIGH);
    }
  }
} // Vai verificar o topico que foi enviado pelo MQTT e controle relay
  // Se a mensagem for ON ira ligar e se for OFF ira desligar

void setup() {
  pinMode(Relay, OUTPUT);
  Serial.begin(115200);
  setup_wifi();
  client.setServer(mqtt_server, 1883);
  client.setCallback(callback);
} //Vai seta o servidor do MQTT e ira deixar o relay com OUTPUT 

void reconnect() {
  while (!client.connected()) {
    Serial.print("Attempting MQTT connection...");
    if (client.connect("ESP8266Client")) {
      Serial.println("connected");
      client.subscribe("ControleRelay");
    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 5 seconds");
      delay(5000);
    }
  }
}// Ira reconectar com o wifi caso desconecte, vai ser chamada na função loop

void loop() {
  if (!client.connected()) {
    reconnect();
  }
  client.loop();
} 