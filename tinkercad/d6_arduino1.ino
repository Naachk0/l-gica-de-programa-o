// C++ code
//

void desenhaPontinhos(int qtPontinhos = 5, int tempo = 500)
{
  for(int i = 1; i <= qtPontinhos; i++)
  {
    Serial.print(".");
    delay(tempo);  

  }///FIM FO FOR 

  Serial.println("");
}


void desenhacabecalho()
{

  Serial.println("");
  Serial.println("");
  Serial.println("***** JOGO DE DADOS*****");
  Serial.println("");
  Serial.println("");
}  

String devolveTexto()
{
  String texto = "uma linha de texto\n";
  texto += "mais uma linha de texto\n";
  texto += "terceira linha\n";
  return texto;
} 


void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0)); 
}

void loop()
{
  desenhacabecalho();//invoca a funcao que da print

  Serial.println("quantas vezes vc quer jogar?");
  while(!Serial.available());
  int qtRodadas = Serial.parseInt();

  int vetPalpites[qtRodadas];
  int vetResultados[qtRodadas];



  for(int r = 0; r < qtRodadas; r++)
  {
    Serial.println("digite um palpite de 1 a 6");
    while(!Serial.available());
    int palpite = Serial.parseInt();

    //sortear dado

    int numeroSorteado = random(1,7); //gera um numero aleatorio de 1 a 6

    Serial.println("jOGANDO OS DADOS");

    desenhaPontinhos();

    for(int i = 1; i <= 5; i++)
    {

      Serial.print(".");
      delay(500);
    }// fim do for

    Serial.println(); 


    //mostrar o resultado
    Serial.println("seu palpite: " + String(palpite));
    Serial.println("numero sorteado: " + String(numeroSorteado));

    vetPalpites[r] = palpite;
    vetResultados[r] = numeroSorteado;



    if (palpite == numeroSorteado)
    {
      Serial.println("parabens, voce acertou!!");
    } else {
      Serial.println("Que pena, tente outra vez!"); 
    } 

    delay(5000);  
  }//fim do for 

  //exibindo dados do jogo
  Serial.println();
  Serial.println("ESTATISTICAS DO JOGO");
  Serial.println(); 

  for(int i = 0; i < qtRodadas; i++)
  {
    Serial.println("rodada" + String(i + 1) + ":"); 
    Serial.println("palpites: " + String(vetPalpites[i])); 
    Serial.println("dado: " + String(vetResultados[i])); 

    //If(vetPalpites[i] == vetResultados[i]){
      //Serial.println("ACERTOU!!!");
    //}else {
      //Serial.println("ERROU!! ://"); 
    //}
//(expression) ? "true" : "false";
    Serial.println("Resultado: " + String(vetPalpites[i] == vetResultados[i] ? "ACERTOU!!!" : "ERROU!! ://"  )); 
    Serial.println("-------------"); 
    Serial.println(); 

  }// fim do for



  String meuTexto = devolveTexto(); //csprtura o retorno da funcao

  Serial.println(meuTexto);//exibe a variavel com o texto retorno da funcao  


}