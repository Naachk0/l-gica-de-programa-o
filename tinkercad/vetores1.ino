// C++ code
//
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  //                     0       1      2      3
  String nomes[4] = {"Eduardo","Lucas", "Rafa", "Salgado"}; 
  Serial.println(nomes[2]); //imprimir o valor
  
  nomes[2] = "Diogo";
   Serial.println(nomes[2]);
  
 
  int idade[5]; // cria um vetor nulo tamanho 5 (0 - 4)
 
  idade[0]= 50;
  idade[1]= 55;
  idade[2]= 55;
  idade[3]= 15;
  idade[4]= 5;
  
  Serial.println(idade[0]);
  Serial.println(idade[1]);
  Serial.println(idade[2]);
  Serial.println(idade[3]);
  Serial.println(idade[4]);  

  
  
  
}