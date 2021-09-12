/*  botao_0_3_0

     Ao pressionar o botão o led tem que piscar 5 vezes.

     Componentes:

     - Arduino Uno CP2102
     - 1 Led Verde
     - 1 Push button
     - 1 Resistor de 270Ω
     - Jumpers diversos

      Conexão Arduino:

      - Led Verde (7)   -  Jumper Marrom
      - Push Button (8) -  Jumper Roxo

      Versão

      0.0.0 --> Criando o cabeçalho
      0.1.0 --> Acrecentando #define para o Led e Botão
      0.2.0 --> Colocando pinMode no setup
      0.3.0 --> Colocar o loop acrescentando o if e o for

      11/09/2021
      Andressa Mikaela Padilha
*/

// --> Apelidos <--

#define led 7
#define botao 8

// A função de setup é executada uma vez quando você pressiona reset ou liga a placa
void setup() {
  pinMode(led, OUTPUT);          
  pinMode(botao, INPUT_PULLUP);

}

//faz a função ser executada repetidamente de forma infinita
void loop() {
  //botão
  if (digitalRead(botao) == LOW) {
    //Fazer a repetição acontecer
    for (int i = 0; i < 5; i++) {
      digitalWrite(led, HIGH);
      delay(2000);
      digitalWrite(led, LOW);
      delay(1000);
    }
  }
}
