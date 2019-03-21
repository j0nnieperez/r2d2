int M1_1 = 2;
int M1_2 = 3; 

void setup() {
  // put your setup code here, to run once:
  pinMode(M1_1, OUTPUT);
  pinMode(M1_2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
}

void Advance(){
  digitalWrite(M1_1, HIGH);
  digitalWrite(M1_2, LOW);
}

void ToReturn(){
  
}
