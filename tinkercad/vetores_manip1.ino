// C++ code
//
void setup()
{
 Serial.begin(9600);
}

void loop()
{ //                   0       1      2      3
  String nomes[4] = {"Eduardo","Lucas", "Rafa", "Salgado"}; 
  int idades[4];
  //preenche os vetores
  idades[0] = 24;
  idades[1] = 16;
  idades[2] = 16;
  idades[3] = 16;
  
  //exibe todos os nomes
  for(int i = 0; i < 4; i++){
  Serial.println("digite a idade de: " + nomes[i]);
  while(!Serial.available());
  idades[i] = Serial.parseInt();
  }
  
   for(int i = 0; i < 4;w i++)
  {//roda de 0 - 3
    Serial.println(String(i + 1) + "o nome: " + nomes[i]); 
    Serial.println ("idade: " + String(idades[i]) ); 
    Serial.println(); //linha  

  }
  
  
}