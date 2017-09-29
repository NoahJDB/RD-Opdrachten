int led1 = 0;
int led2 = 1;
int led3 = 2;
int led4 = 3;
int led5 = 4;
int led6 = 5;
int out1 = 50;
int ini = 50;


void setup() {
  // put your setup code here, to run once:
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
pinMode(led6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
lightOnOff(50, 10, led1);
lightOnOff(50, 10, led2);
lightOnOff(50, 10, led3);
lightOnOff(50, 10, led4);
lightOnOff(50, 10, led5);
lightOnOff(50, 10, led6);
lightOnOff(50, 10, led5);
lightOnOff(50, 10, led4);
lightOnOff(50, 10, led3);
lightOnOff(50, 10, led2);
}


void lightOnOff(int onTime, int offTime, int port){
  digitalWrite(port, HIGH);
  delay(onTime);

  digitalWrite(port, LOW);
  delay(offTime);
}

