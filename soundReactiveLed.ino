
// initialize the variables
int led = 2;
int led2= 3;
int led3= 4;
int led4= 5;
int led5= 6; 
int led6= 7;
int toggle= A0;
int sound= A1;
int soundinput= 0;
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the pin mode
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
pinMode(led6, OUTPUT);
pinMode(toggle, INPUT);
pinMode(sound, INPUT);
}

// checks voltage level of A1 
void loop() {
 soundinput= analogRead(A1); 
if (soundinput > 0)
{
digitalWrite(led, HIGH);
}
 if (soundinput < 0)
{
digitalWrite(led2, HIGH);
}
  if (soundinput > 30)
{
digitalWrite(led3, HIGH);
}
}
  if (soundinput > 60)
{
digitalWrite(led4, HIGH);
}
}
  if (soundinput > 90)
{
digitalWrite(led5, HIGH);
}
  if (soundinput > 120)
{



}

