// C++ code
//

int idade = 0;
void setup()
{
   Serial.begin(9600);
}

void loop()
{
  if (idade >= 18){
    Serial.println("maior de idade");
  }else {
    Serial.println("menor de idade");
}
  Serial.println("Digite sua idade");
  while(!Serial.available()){}
  idade = Serial.parseInt();
}