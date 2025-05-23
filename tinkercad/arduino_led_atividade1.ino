// C++ code
/*
Criar um protótipo com 3 leds: verde, vermelho e amarelo.
Crie um menu com Do While que solicite ao usuário qual led ele quer acender ou apagar,
com suas devidas funcionalidades, da seguinte forma:

1) Ligar Led Verde
2) Desligar Led Verde
3) Ligar Led Amarelo
4) Desligar Led Amarelo
5) Ligar Led Vermelho
6) Desligar Led Vermelho
7) Ligar Todos os Leds
8) Desligar Todos os Leds
0) Sair

Você não pode esquecer dos resistores e de configurar cada porta de lede com a função
pinMode(pino, modo) lá dentro da função setup()

Utilizar Do While, Switch e Serial para o menu e comunicação com o usuário

*/ 

int ledverde = 13;
int ledvermelho = 12;
int ledamarelo = 11;
int escolhaDaOperacao = -1;


void setup()
{
  Serial.begin(9600);

  pinMode(ledverde, OUTPUT);

  pinMode(ledvermelho, OUTPUT);

  pinMode(ledamarelo, OUTPUT);


}

void loop()
{
  digitalWrite(ledverde, HIGH);
  digitalWrite(ledvermelho, HIGH); 
  digitalWrite(ledamarelo, HIGH);
  delay(100); 


  digitalWrite(ledverde, LOW);
  digitalWrite(ledvermelho, LOW);
  digitalWrite(ledamarelo, LOW);
  delay(100);


  do{
    Serial.println("bem vindo, digite uma das operacoes");
    Serial.println("1 - ligar led verde");
    Serial.println("2 - desligar led verde");
    Serial.println("3 - ligar led vermelho");
    Serial.println("4 - desligar led vermelho");   
    Serial.println("5 - ligar led amarelo");
    Serial.println("6 - desligar led amarelo");
    Serial.println("7 - ligar led todos os leds");
    Serial.println("8 - desligar todos os leds");
    Serial.println("0 - sair");
    while(!Serial.available()){}
    escolhaDaOperacao = Serial.parseInt(); 



    switch(escolhaDaOperacao)
    {
      case 1:
      digitalWrite(ledverde, HIGH);

      break;

      case 2:
      digitalWrite(ledverde, LOW); 
      break;

      case 3:
      digitalWrite(ledvermelho, HIGH); 

      break;

      case 4:
      // desligarledvermelho(ledvermelho);

      break; 
      digitalWrite(ledvermelho, LOW);

      case 5:
      digitalWrite(ledamarelo, HIGH);
      break;

      case 6:
      digitalWrite(ledamarelo, LOW);

      break;      

      case 7:
      digitalWrite(ledverde, HIGH);
      digitalWrite(ledvermelho, HIGH); 
      digitalWrite(ledamarelo, HIGH);

      break;

      case 8:
      digitalWrite(ledverde, LOW);
      digitalWrite(ledvermelho, LOW);
      digitalWrite(ledamarelo, LOW);

      break;      

      case 0:
      Serial.println("Obrigada por usar nosso controle!");

      break;     

      default:
      Serial.println("opcao invalida! ");     
    }
  } while (escolhaDaOperacao !=0);//fim do Do
  delay(1000);

}