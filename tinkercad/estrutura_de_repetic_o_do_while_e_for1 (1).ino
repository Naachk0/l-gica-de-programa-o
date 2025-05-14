/*
While - é uma estrutura de repeticão que só executa quando a condicão for verdadeira

A funcão SETUP tem como objetivo inicilizar o programa
*/

void setup()
{
Serial.begin(9600);
//variavel inicializadora
int contadorWhile = 60;
  	
  while(contadorWhile <= 101){
  Serial.println (contadorWhile);
    contadorWhile += 2;
    if(contadorWhile == 80){
    	contadorWhile++;
      	Serial.println();
   }
}


//a funcão loop tem como objetivo repetir varias vezes o programa
void loop()
{
  
}