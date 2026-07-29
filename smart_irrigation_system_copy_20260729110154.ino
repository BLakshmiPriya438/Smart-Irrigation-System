// C++ code
//
int relay=7;
int signal=A0;
int led=9;
void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(relay, OUTPUT);
  pinMode(signal, INPUT);
    digitalWrite(relay,0);
}

void loop()
{
 int sensor=analogRead(signal);
  if(sensor<100)
  {
     digitalWrite(relay,1);
     digitalWrite(led,1);
  	delay(1000);
  }
  else
  {
    digitalWrite(led,0);
    digitalWrite(relay,0);
    delay(3600000);
  }
}