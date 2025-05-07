// C++ code
//

int idade = 15;

void setup()
{
  Serial.begin(9600);
}

void loop()
{ 
  if (idade >= 16){//se retornar verdaderio - logango sim
    Serial.println("voto obrigatorio");
  }else {// losango não
    Serial.println("Sem idade para  votar");
  } 
      Serial.println("Digite sua idade");
  while(!Serial.available()){}
  idade = Serial.parseInt();
  
  delay (2000);
}