// here to define variables 
int enL = 6;
int enR = 11;

int inL1 = 7;       // Left Motor, Side 1: Digital Pin 7 input
int inL2 = 8;       // Left Motor, Side 2: Digital Pin 8 input 
int inR1 = 12;         // Right Motor, Side 1: Digital Pin 12
int inR2 = 13;         // Right Motor, Side 2: Digital Pin 13


void setup() {

  pinMode(enL, OUTPUT);
  pinMode(enR, OUTPUT);
  pinMode(inL1, OUTPUT);
  pinMode(inL2, OUTPUT);
  pinMode(inR1, OUTPUT);
  pinMode(inR2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  analogWrite(enL,255);
  digitalWrite(inL1, HIGH);
  digitalWrite(inL2, LOW);
  analogWrite(enR,255);
  digitalWrite(inR1, HIGH);
  digitalWrite(inR2, LOW);
  delay(3000); 

  analogWrite(enL,255);
  digitalWrite(inL1, LOW);
  digitalWrite(inL2, HIGH);
  analogWrite(enR,255);
  digitalWrite(inR1, LOW);
  digitalWrite(inR2, HIGH);
  delay(3000);
}
