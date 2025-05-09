// C++ code
/*
Faça um programa que receba um número de usuário e exiba este
número, apenas se for par.
*/


void setup()
{
 Serial.begin(9600);
  
  int numero = 0;
  
  Serial.println("informe um numero par");
   while(!Serial.available());
  numero = Serial.parseInt(); 
  
  if (numero % 2 == 0){
    Serial.println ("o numero eh par ");
  }
  
  Serial.println(); //escreve uma linha vazia
  Serial.println("Obrigado por utilizar o programa Par");
}

  
void loop()
{
  
  
}