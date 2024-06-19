                O esquemático do módulo de relé que deve ser embarcado junto com a placa do nodemcu8266.

![Captura de tela 2024-06-18 202149](https://github.com/ViZanella/SISTEMAS-EMBARCADOS-RTOS./assets/126624524/2b21af82-89bd-4cc3-93b5-3245f5580270)


  O circuito funciona da seguinte maneira:


  Quando a entrada J1 recebe uma tensão de 12V, a corrente flui através do resistor R2 e do diodo D1, energizando a base do transistor U1.
O transistor U1 liga, permitindo que a corrente flua através da bobina do relé RL1.
A corrente na bobina do relé cria um campo magnético que atrai a armadura do relé, mudando o estado dos contatos.

  Função dos componentes

Diodo D1: Protege o transistor U1 contra picos de voltagem reversa.

Diodo D2: Protege a bobina do relé contra picos de voltagem reversa quando o relé é desativado.

Transistor U1: Amplifica a corrente da entrada J1 para energizar a bobina do relé.

Resistor R2: Limita a corrente que flui através da base do transistor U1.

Capacitor C4: Suaviza a corrente que flui através do transistor U1.

    Visualação PCB

![Captura de tela 2024-06-18 202601](https://github.com/ViZanella/SISTEMAS-EMBARCADOS-RTOS./assets/126624524/b0aa25a3-c0d1-4a9a-9a93-95887701d402)


    Visualização 3D

![Captura de tela 2024-06-18 202546](https://github.com/ViZanella/SISTEMAS-EMBARCADOS-RTOS./assets/126624524/623665b5-b4c7-4125-ad6f-a59d8aabff30)




#

Descrever o MQTT

O MQTT é um protocolo de comunicação leve e eficiente, projetado especificamente para dispositivos com recursos limitados, como sensores e atuadores, e é amplamente utilizado na Internet das Coisas (IoT). Sua arquitetura é baseada no modelo publish/subscribe, onde publicadores enviam mensagens para tópicos específicos e assinantes recebem essas mensagens dos tópicos aos quais estão inscritos. Um broker é responsável por gerenciar o roteamento dessas mensagens entre publicadores e assinantes.

Uma das principais vantagens do MQTT é sua leveza, com uma baixa sobrecarga que o torna ideal para dispositivos com pouca memória e capacidade de processamento. Ele também oferece diferentes níveis de Qualidade de Serviço (QoS) para garantir a entrega das mensagens, com três opções: QoS 0, que entrega pelo menos uma vez sem confirmação; QoS 1, que garante entrega pelo menos uma vez com confirmação; e QoS 2, que assegura entrega exatamente uma vez com confirmação adicional.


#

#MQTT: Mensagens leves e eficientes para conectar dispositivos na Internet das Coisas (IoT).

Como funciona:

Imagine um correio (broker) que recebe cartas (mensagens) de diversos autores (publicadores).

Cada carta tem um endereço (tópico) e o correio a entrega para os destinatários que solicitaram (assinantes).

Vantagens:

Leve e rápido: ideal para dispositivos com bateria fraca e redes congestionadas.

Confiável: entrega garantida, mesmo em redes instáveis.

Escalável: conecta milhões de dispositivos sem problemas.

Seguro: protege seus dados com criptografia.

** Aplicações:**

Automação industrial: controle de fábricas e máquinas.

Cidades inteligentes: gerenciamento de tráfego, iluminação e outros serviços.

Agricultura: monitoramento de plantações e irrigação.

Rastreamento: acompanhamento de frotas e entregas.

Saúde: monitoramento de pacientes e dispositivos vestíveis.

![Captura de tela 2024-06-18 202546](/src/img/capturaTerminal.png)


