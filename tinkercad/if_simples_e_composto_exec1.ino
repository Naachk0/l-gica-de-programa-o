// C++ code
/*
Faça um programa que receba o nome, cargo e salário de um funcionário. Se o
funcionário ganhar abaixo de 1000 reais, calcule o salário acrescido de 10%.
Ao final exiba o nome, o cargo e o salário desse funcionário.
*/


//Variaveis
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
  Serial.println("Digite nome do funcionario");
  while(!Serial.available()){}
  nome = Serial.readString();
  
  Serial.println("Digite o cargo do funcionario");
  while(!Serial.available()){}
  cargo = Serial.readString();
  
   Serial.println("Digite o salario do funcionario");
  while(!Serial.available()){}
  salario = Serial.parseFloat(); 
  
   if (salario < 1000){
   salario = salario * 1.10;
   }
  
  //saida
Serial.println("O nome do funcionario é: " + String(nome));
Serial.println("O cargo é: " + String(cargo));
Serial.println("O salario é: " + String(salario));
} 