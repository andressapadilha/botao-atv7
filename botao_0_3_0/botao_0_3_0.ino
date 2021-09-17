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
