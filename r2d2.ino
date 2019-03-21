int M1_1 = 2; // Pin 2 conectado al motor 1
int M1_2 = 3; // Pin 3 conectado al motor 1

void setup() {
  // put your setup code here, to run once:
  pinMode(M1_1, OUTPUT);
  pinMode(M1_2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  ToReturn();
  delay(500);
  Stop();
  delay(500);
  Advance();
  delay(500);
}

void Advance(){
  digitalWrite(M1_1, HIGH);
  digitalWrite(M1_2, LOW);
}

void Stop(){
  digitalWrite(M1_1, LOW);
  digitalWrite(M1_2, LOW);
}

void ToReturn(){
  digitalWrite(M1_1, LOW);
  digitalWrite(M1_2, HIGH);
}
