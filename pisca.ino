void setup() {
  randomSeed(analogRead(0));
  Serial.begin(9600);
}

void loop() {
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(4, INPUT);
  
  int numeroRandomico = random(1,4);
  Serial.println(numeroRandomico);

  digitalWrite(numeroRandomico, 1);

  while (digitalRead(4) == 0) {
    sinalizarVencedor(numeroRandomico);    
  }

  digitalWrite(numeroRandomico, 0);
}

void sinalizarVencedor(numeroRandomico) {
  int cont = 0;
  while (numeroRandomico < cont) {
    digitalWrite(13, 1);
    delay(300)
    digitalWrite(13, 0);
    delay(300)
    
    cont++;
  }

  delay(3000);
}
