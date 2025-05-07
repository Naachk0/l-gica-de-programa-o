// C++ code
/*
Faça um programa que receba um número e exiba o seu dobro.
*/

 float numero = 0;
 float dobro = 0;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //Entrada
  Serial.println("Digite um número");
  while(!Serial.available()){}
  numero = Serial.parseFloat();
  
  //Processamento
  dobro = numero * 2;
  
  //Saída
  Serial.println("O dobro é: " + String(numero) + "e" + String(dobro));
  
}