// C++ code
/*
11
Faça um programa que receba um número inteiro do usuário e informe se este
número é positivo ou negativo.
*/

int numero = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
 Serial.println("Digite um numero");
  while(!Serial.available());
  numero = Serial.parseInt(); 
  
 if (numero <= -0){
 Serial.println("o numero é negativo");  
 }
  
 Serial.println("o numero é: " + String(numero)); 
}