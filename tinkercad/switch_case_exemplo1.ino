// C++ code
//
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("escolha uma fruta");
  Serial.println("1 - banana");
  Serial.println("2 - maca");
  Serial.println("3 - tomate");
  Serial.println("4 - laranja");
   while(!Serial.available());
  int opcao = Serial.parseInt(); 
  
switch(opcao)
  
  
  case 1:
  Serial.println("fruta escolhida: banana");
  break;
  case 2:
  Serial.println("fruta escolhida: maca");
  break;
  case 3:
  Serial.println("fruta escolhida: tomate");
  break;
  case 4:
  Serial.println("fruta escolhida: laranja");
  break;
  default:
  Serial.println("nao temos essa opcao");
   }
  
  Serial.println();
  
  
  
}