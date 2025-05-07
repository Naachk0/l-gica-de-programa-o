// C++ code
//Variaveis

int idade = 20;
String ingresso = "sim";


void setup()
{
  Serial.begin(9600);
}



void loop()
{
  if(idade >= 18 && ingresso == "sim" ) {
   Serial.println("eba, vc pode entrar na festa");
  } else {
    Serial.println("nao pode entrar");
  }