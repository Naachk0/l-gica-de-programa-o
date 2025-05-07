/*
Faça um programa que receba o ano de nascimento de uma pessoa e
o ano atual. Calcule e imprima:
a. A idade dessa pessoa
b. Essa idade convertida em semana
*/
int anoDoNascimento = 0;
int anoAtual = 0; 
int idade = 0;
int semana = 0;
  
  
void setup()
{ 
  Serial.begin(9600);
}

void loop()
{
  //Entrada
  Serial.println("Digite o ano do seu nascimento");
  while(!Serial.available()){};
  anoDoNascimento = Serial.parseInt();
  
  
  Serial.println("DIgite o ano atual");
  while(!Serial.available()){};
  anoAtual = Serial.parseInt();
 
    
  
  //Processamento
  idade = anoDoNascimento - anoAtual;
  semana = idade * 12 * 4;
  
  
  //Saída
  Serial.println("idade: " + String(idade));
  
  Serial.println("idade em semanas: " + String(semana));
  
}