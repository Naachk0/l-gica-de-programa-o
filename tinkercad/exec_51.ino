// C++ code
/*
Faça um programa que receba a medida em centímetros e exiba esse
número em polegadas. OBS: Uma polegada equivale a 2.54
centímetros.
*/



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
}