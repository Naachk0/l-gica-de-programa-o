;/*
EXEC1: Faça um programa que receba a idade de uma pessoa em anos e
imprima essa idade em: Meses, Dias, Horas, Minutos.
*/


int idade = 0;
long meses = 0;
long dias = 0;
long horas = 0;
long minutos = 0;

void setup()
{ 
  Serial.begin(9600);
}
  
void loop()
{
  //entrada
  Serial.println("Digite sua idade");
  while(!Serial.available()){}
  idade = Serial.parseInt(); //readString(), parseFloat()
  
  //processamento
  meses = idade * 12;
  dias = idade * 365;
  horas = dias * 24;
  minutos = horas * 60;
  
  //saída
  Serial.println("A sua idade é: " + String(idade));
  Serial.println("A sua idade em meses é: " + String(meses));
  Serial.println("A sua idade em dias é: " + String(dias));
  Serial.println("A sua idade em minutos é: " + String(minutos));
  Serial.println("A sua idade em horas é: " + String(horas));
  
  
}