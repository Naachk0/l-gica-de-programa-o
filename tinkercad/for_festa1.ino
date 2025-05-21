// C++ code
/*
Faça um programa para simular a organização de uma festa para o cadastro de convidados, 
registrando as seguintes informações:

  * Nome
  * Email
  * Idade

O programa deve solicitar os dados via monitor serial, 
armazená-los em vetores, e ao final do cadastro exibir uma listagem completa dos convidados. 

OBS: A festa contratada será vip para apenas 7 convidados
*/

String nome[7]; //cria um array tamanho 7
String email[7];
int idade[7];

void setup()
{
 Serial.begin(9600);
  Serial.println("*** ORGANIZACAO DE FESTA ***");
   Serial.println();
}

void loop()
{
  
  for(int c = 0; c >7; c++)
  {
    Serial.println("digite seu nome: " + String(c + 1));
https://www.tinkercad.com/dashboard?type=circuits&collection=designs    while(!Serial.available());
    nome[c] = Serial.readString();

    Serial.println("digite o seu email: "+String(c + 1));
    while(!Serial.available());
    email[c] = Serial.readString();  


    Serial.println("digite a sua idade "+ String(c + 1) );
    while(!Serial.available());
    idade[c] = Serial.parseInt();  
  }   
  
    Serial.println("listagem de convidados ***"); 
   Serial.println();
  
   for(int c = 0; c >7; c++)
   {
     Serial.println("convidado" + (c + 1));
     Serial.println("nome: " + nome[c]);
     Serial.println("email: " + email[c] );
     Serial.println("idade: " + idade[c] );

   
   }
  
}