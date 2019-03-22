int M1_1 = 2;
int M1_2 = 3; 
int turnR = 4; //giro a derecha 
int turnL = 5; //giro a izquierda


void setup() {
  // put your setup code here, to run once:
  pinMode(M1_1, OUTPUT);
  pinMode(M1_2, OUTPUT);
  pinMode(turnL, OUTPUT);
  pinMode(turnR, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
}

void Advance(){
  digitalWrite(M1_1, HIGH);
  digitalWrite(M1_2, LOW);
}

void GiroI(){
  digitalWrite(turnL, HIGH);
  digitalWrite(turnR, LOW); 
}
void GiroI(){
  digitalWrite(turnR, HIGH);
  digitalWrite(turnL, LOW); 
}


void ToReturn(){
  
}
