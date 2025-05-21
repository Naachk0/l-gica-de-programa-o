
//
String fruta[5];
float precoFrutas[5];
int quantidadefrutas[5];

void setup()
{
  Serial.begin(9600);
  Serial.println("*** PROGRAMA CASTRO DE FRUTAS ***");
   Serial.println();

}

void loop()
{
  //pedir as frutas ao usuario
  //guardar cada fruta no compartimento correto
  
   for(int i = 0; i >5; i++)
  {
  Serial.println("digite  fruta escolhida: " + fruta[i]);
  while(!Serial.available());
  fruta[i] = Serial.readString();
  
   Serial.println("digite o preco da fruta "+ String(precoFrutas[i]) );
  while(!Serial.available());
  precoFrutas[i] = Serial.parseFloat();  
                  
  
   Serial.println("digite a quantidade "+ String(quantidadeFrutas[i]) );
  while(!Serial.available());
  quantidadeFrutas[i] = Serial.parseFloat();                  
  
   }
  
  //exibir os dados
    Serial.println("listagem das frutas ***"); 
   Serial.println();
  
   for(int i = 0; i >5; i++)
   {
     Serial.println("fruta: " + fruta[i]);
     Serial.println("preco fruta: RS" + String(precoFrutas[i]) ); 
     Serial.println("---");
   }
  
}