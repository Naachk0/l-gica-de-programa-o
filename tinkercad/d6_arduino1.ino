// C++ code
//


void setup()
{
 Serial.begin(9600);
 randomSeed(analogRead(0)); 
}

void loop()
{
  Serial.println("");
  Serial.println("");
  Serial.println("***** JOGO DE DADOS*****");
  Serial.println("");
  Serial.println("");
  
  Serial.println("digite um palpite de 1 a 6");
  while(!Serial.available());
  int palpite = Serial.parseInt();
  
  //sortear dado
  
  int numeroSorteado = random(1,7); //gera um numero aleatorio de 1 a 6
  
  //mostrar o resultado
    Serial.println("seu palpite: " + String(palpite));
    Serial.println("numero sorteado: " + String(numeroSorteado));

  
  if (palpite == numeroSorteado)
  {
    Serial.println("parabens, voce acertou!!");
  } else {
   Serial.println("Que pena, tente outra vez!"); 
  } 
  
  
  

  
}