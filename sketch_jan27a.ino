int RLED = 4;
int BLED = 3;
int GLED = 2;
int inputPin = 5;
int number = 0;

void setup() {
  // put your setup code here, to run once:
 pinMode(RGBLED,OUTPUT);
 pinMode(inputPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 number = digitalRead(inputPin);
 
 digitalWrite(RPIN, number);
}
