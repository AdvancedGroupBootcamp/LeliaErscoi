
const int motor1 =  3;
const int motor2 = 5;
const int motor1Pin1 = 8;
const int motor1Pin2 = 9;
const int motor2Pin1 = 10;
const int motor2Pin2 = 11;

void setup() {
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);
}

void rotate(int state1,int state2,int state3,int state4) {
  digitalWrite(motor1Pin1, state1);
  digitalWrite(motor2Pin1, state2);

  digitalWrite(motor1Pin2, state3);
  digitalWrite(motor2Pin2, state4);
  
  analogWrite(motor1, 127);
  analogWrite(motor2, 127);

  delay(1000);  
}

void loop() {
   rotate(HIGH,HIGH,LOW,LOW);
   rotate(HIGH,LOW,LOW,HIGH);
   rotate(LOW,HIGH,HIGH,LOW);
   rotate(LOW,LOW,HIGH,HIGH);

  }