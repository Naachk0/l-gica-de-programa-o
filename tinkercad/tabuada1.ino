// C++ code
//
int tabuadaEscolhida = 0;
int contador;
int resultado;
void setup()
{
  Serial.begin(9600);

  Serial.println("digite uma tabuada: ");  

  while!(Serial.available()){}
  tabuadaEscolhida = Serial.parseInt();  

  for(int contador = 1; contador <=10; contador++){}
  resultado = tabuadaEscolhida * contador;  
    Serial.println(String(tabuadaEscolhida) + "X" + String(contador) + "=" + String(resultado));

}

void loop()
{
  
}