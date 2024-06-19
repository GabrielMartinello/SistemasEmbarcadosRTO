                O squemático do módulo de relé que deve ser embarcado junto com a placa do nodemcu8266.

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
