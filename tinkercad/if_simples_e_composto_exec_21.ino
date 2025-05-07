// C++ code
/*
Uma empresa decide dar aumento de 30% aos funcionários cujo salário é
inferior a 500 reais. Escreva um programa que receba o salário de um
funcionário e imprima o valor do salário reajustado ou uma mensagem caso o
funcionário não tenha direito a aumento.
*/

float salario = 0;

void setup()
{
   Serial.begin(9600);
}

void loop()
{
    Serial.println("Digite o salario do funcionario");
  while(!Serial.available());
  salario = Serial.parseFloat(); 
  
  if (salario < 500){
   salario = salario * 1.30;
  }else {
    Serial.println("nao ha aumento");
	}
  
  Serial.println("salario: " + String(salario));
}
