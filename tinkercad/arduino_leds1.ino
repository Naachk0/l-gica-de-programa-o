// C++ code
// 

int ledazul = 13;
int ledvermelho = 12;
int ledbranco = 11;

void setup()
{
  pinMode(ledazul, OUTPUT);

  pinMode(ledvermelho, OUTPUT);

  pinMode(ledbranco, OUTPUT);


}

void loop()
{
  digitalWrite(ledazul, HIGH);
  digitalWrite(ledvermelho, HIGH); 
  digitalWrite(ledbranco, HIGH);
  delay(100); 



  digitalWrite(ledazul, LOW);
  digitalWrite(ledvermelho, LOW);
  digitalWrite(ledbranco, LOW);
  delay(100); 
}