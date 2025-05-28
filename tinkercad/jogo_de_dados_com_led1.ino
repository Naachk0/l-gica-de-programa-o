// C++ code
/*Na entrada da fortaleza, há um painel com uma entrada serial. Um guardião digital (o
Arduino) propõe um desafio: “Adivinhe corretamente o número sagrado do dado,
que varia de 1 a 6.”
Se você errar, o sistema piscará um LED vermelho, indicando que você foi testado e falhou.
Se acertar, um LED verde piscará como sinal de aprovação divina, e uma das joias azuis do
templo (representadas por LEDs azuis) se acenderá, marcando o seu progresso.
Ao conquistar 3 acertos, todas as joias estarão acesas — e a Porta da Sabedoria
(controlada por um servo motor) se abrirá magicamente, permitindo sua
passagem ao templo.
Cada tentativa reinicia o desafio até a conquista da sabedoria!
*/
#include <Servo.h>
const int ledAzul1 = 3;
const int ledAzul2 = 2;
const int ledAzul3 = 5;
const int ledVerde = 11;
const int ledVermelho = 7;  


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
  pinMode(ledAzul1, OUTPUT);
  pinMode(ledAzul2, OUTPUT);
  pinMode(ledAzul3, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);  

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

    //
    int acertos;

    if (palpite == numeroSorteado)
    {
      digitalWrite(ledVerde, HIGH);
      delay(5000);
      digitalWrite(ledVerde, LOW);   
      Serial.println("parabens,entre no templo");  
    } else {
      digitalWrite(ledVermelho, HIGH);
      delay(5000);
      digitalWrite(ledVermelho, LOW);   
      Serial.println("Voce não é capaz de entrar"); 
    } 

    delay(300); 


    if(acertos == 1){
      digitalWrite(ledAzul1, HIGH);
      delay(5000);
      digitalWrite(ledAzul1, LOW);
    } else if(acertos == 2){   
      digitalWrite(ledAzul2, HIGH);
      delay(5000);
      digitalWrite(ledAzul2, LOW);   
    } else if(acertos == 3){
      digitalWrite(ledAzul3, HIGH);
      delay(5000);
      digitalWrite(ledAzul3, LOW);   
    }
    
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