// C++ code
/*
Faça um programa que receba o nome, o peso e a altura de uma
pessoa. Calcule e imprima o nome e o IMC dessa pessoa - IMC = peso
/ (altura * altura).
*/

String nome = ""; 
float imc = 0;
float peso = 0;
float altura = 0; 


void setup()
{
 Serial.begin(9600);
}

void loop()
{
   //entrada
  Serial.println("Digite seu nome");
  while(!Serial.available()){}
  nome = Serial.readString();
  
   Serial.println("Digite seu peso");
  while(!Serial.available()){}
  peso = Serial.parseFloat(); 
  
   Serial.println("Digite sua altura");
  while(!Serial.available()){}
  altura = Serial.parseFloat();
  
  
  //processamento

  imc = peso / (altura * altura);
  
  
  //saída
   Serial.println("nome informado é: " + nome);
   Serial.println("seu peso é: " + String(peso));
   Serial.println("sua altura é: " + String(altura));
   Serial.println("seu imc é: " + String(imc));
  
  
}