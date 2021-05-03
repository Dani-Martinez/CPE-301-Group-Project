#define ENABLE_PIN 5
#define DIRA_PIN 3
#define DIRB_PIN 4

void setup () 
{
  pinMode (ENABLE_PIN,OUTPUT);
  pinMode (DIRA_PIN,OUTPUT);
  pinMode (DIRB_PIN,OUTPUT);
  Serial.begin (9600);
}

void loop ()
{
  fanOn ();
  
  delay(2000);
}
   
void fanOn ()
{
  // Serial.println ("Fan on");
  
  digitalWrite (ENABLE_PIN,HIGH);
  digitalWrite (DIRA_PIN,HIGH);
  digitalWrite (DIRB_PIN,LOW);
  
  delay (15000); // need to write a delay function

  // Serial.println ("Fan off");

  digitalWrite (ENABLE_PIN,LOW);
}
