// C++ code
//

 int numeroSorteado;

void setup()
{
 Serial.begin(9600);
 randomSeed(analogRead(0));
  
  Serial.println("");
  Serial.println("");
  Serial.println("***** JOGO DE DADOS*****");
  Serial.println("");
  Serial.println("");
  
  Serial.println("digite ""."" para rolar o dado");
  while(!Serial.available());
  
  
  //sortear dado
  
  int numeroSorteado = random(1,21); //gera um numero aleatorio de 1 a 6
  
  //mostrar o resultado
    Serial.println("numero sorteado: " + String(numeroSorteado));

  
  if (numeroSorteado >= 15)
  {
    Serial.println("parabens, voce passou!!");
  } else {
   Serial.println("Que pena, voce falhou no teste!"); 
  } 
  
}

void loop()
{
delay(2000);
  
}