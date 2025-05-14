// C++ code
//

int escolhaDaOperacao;
float numero1;
float numero2;

void setup()
{
  Serial.begin(9600);
  
 int contador = 0; //varivel inical do do while
  
  do{
    Serial.println("bem vindo a calculadora inteligente :P!!!/n");
    Serial.println("escolha uma das operacoes");
    Serial.println("1 - somar");
    Serial.println("2 - dividir");
    Serial.println("3 - subtrair");
    Serial.println("4 - multipilicar");
    while(!Serial.available()){}
    escolhaDaOperacao = Serial.parseInt();



    Serial.println("digite 2 numeros");
    Serial.println("digite o primeiro numero: ");
    while(!Serial.available()){}
    numero1 = Serial.parseFloat();


    Serial.println("digite o segundo numero: ");
    while(!Serial.available()){}
    numero2 = Serial.parseFloat();
    
    switch(escolhaDaOperacao){
    case 1:
      break;
      
   case 2:
      break;
      
   case 3:
      break;
      
   case 4:
      break;
      
      default:
      Serial.println("opcao invalida! escolha entre 1 ao 4. :) ");
    }
    
    
    Serial.println("deseja voltar para o menu? DIgite sim ou não(em minusculo)");
  }  
  while(!Serial.available()){}
    
  
  if (Serial.readString() == "sim"){
  contador = 1;
    
  }
  else{
  contador = 0;
   Serial.println("Até breve");
    Serial.println("caso queire voltar ao menu, reinicie o programa");
  }
   
  
 }  
  while(contador != 0);
}


void loop()
{  
 //sem instrucões 
}