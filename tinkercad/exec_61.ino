// C++ code
/*
Faça um programa que receba a medida em polegadas e exiba esse número em
centímetros.
*/

int polegadas = 0;
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("Digite sua idade");
  while(!Serial.available()){}
  idade = Serial.parseInt();
  
    //processamento
  
  //saída
  Serial.println("centimetros: " + String());
}