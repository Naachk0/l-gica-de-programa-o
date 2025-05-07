// C++ code
/*
Faça um programa que receba o nome, cargo e salário de um funcionário. Calcule o
salário acrescido de 10%. Ao final exiba o nome, o cargo e o novo salário desse
funcionário.
*/

String nome = "";
String cargo = "";
float salario = 0;


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
  
  Serial.println("Digite seu cargo");
  while(!Serial.available()){}
  cargo = Serial.readString();
  
  
  Serial.println("Digite seu salario");
  while(!Serial.available()){}
  salario = Serial.parseFloat();
  
   //processamento
  
  salario + 10% = 0;
  
  
  //saída
  Serial.println("seu nome é: " + nome );
  Serial.println("seu cargo é: " + cargo );
}