int enableL = 6;
int enableR = 11;

int L1 = 7;
int L2 = 8;
int R1 = 12;
int R2 = 13;

int line_sensor = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(enableL,OUTPUT);
  pinMode(enableR,OUTPUT);
  pinMode(L1,OUTPUT);
  pinMode(L2,OUTPUT);
  pinMode(R1,OUTPUT);
  pinMode(R2,OUTPUT);
  pinMode(line_sensor,INPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(digitalRead(line_sensor));
  if (digitalRead(line_sensor) == 1){
  analogWrite(enableL,255);
  digitalWrite(L1,HIGH);
  digitalWrite(L2,LOW);
  analogWrite(enableR,255);
  digitalWrite(R1,HIGH);
  digitalWrite(R2,LOW);
  delay(100);
  }
  else{
  analogWrite(enableL,255);
  digitalWrite(L1,LOW);
  digitalWrite(L2,HIGH);
  analogWrite(enableR,255);
  digitalWrite(R1,LOW);
  digitalWrite(R2,HIGH);
  delay(100);
  }
}
