// C++ code
//
int led1 = 12;
int led2 = 8;
int led3 = 5;
int button = 4;
int value ; int n =1;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(button, INPUT);
}  

void loop()
{
  value = digitalRead(button);
  if( value == HIGH && n == 1){
  digitalWrite(led1, HIGH);
  n++;delay(250);
  }else if( value == HIGH && n == 2){
      digitalWrite(led2, HIGH);
      n++;delay(250);}
      else if( value == HIGH && n == 3){
      digitalWrite(led3, HIGH);
         n++;delay(250);}
  else if( value == HIGH && n == 4){ digitalWrite(led1, LOW);
          digitalWrite(led2, LOW); digitalWrite(led3, LOW);n=1;delay(250);}
}