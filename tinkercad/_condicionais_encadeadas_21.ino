// C++ code
/*
Você foi contratado para programar o sistema de classificação etária do novo cinema da cidade. 
O sistema precisa verificar a idade do cliente e informar quais tipos de filmes ele pode assistir.

Categorias de classificação:
Até 9 anos: “Apenas filmes infantis”
De 10 até 13 anos: “Filmes infantis e infantojuvenis”
De 14 até 17 anos: “C”
De 18 até 59 anos: “C”
60 anos ou mais: “Todos os tipos de filmes + desconto para idosos”
Idade negativa ou maior que 120: “Idade inválida, verifique os dados”
*/

int idade = 0;

void setup()
{
   Serial.begin(9600);
 Serial.println("Cinema Sao Caetano");
 Serial.println();

  
 Serial.println("insira a idade: ");
 while(!Serial.available());
 idade = Serial.parseInt();
 Serial.println("classificacao etaria do cinema");

  
  
  if(idade >= 0 && idade <= 9){
    Serial.println("filmes infantis");
  }
  else if (idade >= 10 && idade <= 13) {
    Serial.println("Filmes infantis e infantojuvenis");
  }
  else if (idade >= 14 &&  idade < 17) {
    Serial.println("Filmes até classificação 14 anos");
  }
  else if (idade >= 18 && idade < 59) {
    Serial.println("Todos os tipos de filmes");
  }
  else if (idade >= 60 && idade <= 120){
    Serial.println("Todos os tipos de filmes + desconto para idosos");
  } 
  else {
    Serial.println("Idade inválida, verifique os dados");
  }//200
}
void loop()
{
  
}