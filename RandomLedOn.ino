long RandomNumber;

int RandomButtonPusher = 12;
int a;
int b;

int  RandomButtonPusherState;

void setup(){
  Serial.begin(9600);
 
  for (int i=2;i<10;i++)
  {
    pinMode(i,OUTPUT);   
  }                       
  pinMode (RandomButtonPusher,INPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  
  RandomButtonPusherState = digitalRead(RandomButtonPusher); 
}


void loop() {

  a=digitalRead(RandomButtonPusher);
  delay(10);
  b=digitalRead(RandomButtonPusher);

  if (a == b)
  {
    if(a !=RandomButtonPusherState)
    {

      if (a==LOW)
      {
        RandomNumber = random(0, 4);
        Serial.println(RandomNumber);
        int Cases = (RandomNumber);
        switch (Cases) 
        {
          
        case 0: 
          Serial.println("ALLLED HIGH");
          digitalWrite(2,HIGH);
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          break;
          
        case 1:   
          Serial.println("REDLED HIGH");
          digitalWrite(2,HIGH);
          break;
          
        case 2:   
          Serial.println("BLUELED HIGH");
          digitalWrite(3,HIGH);
          break;
          
        case 3:   
          Serial.println("GREENLED HIGH");
          digitalWrite(4,HIGH);
          break;

        }
      }
    }
    RandomButtonPusherState=a;
  }
  delay(50);
}
