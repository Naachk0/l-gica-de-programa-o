// C++ code
/*
Estruturas condicionais encadeadas(3 ou mais respostas)
*/

// infantil 5 - 8, cadete 8 - 12, juvenil 12 - 15, junior 15 - 18, adulto 18

int idade = 16;

void setup()
{
 Serial.begin(9600);
 Serial.println("academia do Davi");
 Serial.println(); 
  
 Serial.println("seu sobrinho tem:" + String(idade) + "anos");
  
  
  if(idade >= 5 && idade <= 8){
  Serial.println("Cadastro na categoria infantil");
  }else if (idade >= 8 && idade <= 12) {
  Serial.println("Cadastro na categoria cadete");
  }else if (idade >= 12 && < 15) {
  Serial.println("Cadastro na categoria juvenil");
  }else if (idade >= 15 && < 18) {
  Serial.println("Cadastro na categoria junior");}
  else if (idade >= 18){
  Serial.println("Cadastro na categoria adulto");
  } else{
   Serial.println("nao pode participar da academia");
  }
  
  
 }

void loop()
{
 
  
  
}