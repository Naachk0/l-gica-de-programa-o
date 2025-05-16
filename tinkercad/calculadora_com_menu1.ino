//tipoderetorno, nomedafuncao, parametro, corpo

int escolhaDaOperacao;
float resultado;// guarda o resultado do calculo


void somar(float n1, float n2){
resultado =  n1 + n2;
Serial.println("o resultado é: " + String(resultado));//contatenando //com void
//return resultado;//sem void
}  



void dividir(float n1, float n2){
resultado =  n1 / n2;
Serial.println("o resultado é: " + String(resultado));//contatenando
  //return resultado;
}  



void subtrair(float n1, float n2){
resultado =  n1 - n2;
Serial.println("o resultado é: " + String(resultado));//contatenando
//return resultado;
}  


void multiplicar(float n1, float n2){
resultado =  n1 * n2;
Serial.println("o resultado é: " + String(resultado));//contatenando
  //return resultado;
}  


void setup()
{
  Serial.begin(9600);
  
int contador = 0; //variavel inical do do while
float numero1;
float numero2;

   
  
  
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
    Serial.println("digite o primeiro numero: "); //concatenando
    while(!Serial.available()){}
    numero1 = Serial.parseFloat();


    Serial.println("digite o segundo numero: ");
    while(!Serial.available()){}
    numero2 = Serial.parseFloat();
    
    switch(escolhaDaOperacao)
    {
    case 1:
  somar(numero1, numero2);//estou passand os valores que o usuario digitou via parametro //com void
  //float retornoFuncaoSomar;//sem void
 // retornoFuncaoSomar = somar(numero1, numero2); //sem void  
 // Serial.println(retornoFuncaoSomar);
      
      break;
      
   case 2:
   dividir(numero1, numero2);
    //float retornoFuncaoSomar;//sem void
  //retornoFuncaoSomar = somar(numero1, numero2); //sem void  
  //Serial.println(retornoFuncaoSomar);   
      break;
      
   case 3:
   subtrair(numero1, numero2);
    //float retornoFuncaoSomar;//sem void
  //retornoFuncaoSomar = somar(numero1, numero2); //sem void  
  //Serial.println(retornoFuncaoSomar);   
      break;
      
   case 4:
  multiplicar(numero1, numero2);
   //float retornoFuncaoSomar;//sem void
  //retornoFuncaoSomar = somar(numero1, numero2); //sem void  
  //Serial.println(retornoFuncaoSomar);    
      break;
      
      default:
      Serial.println("opcao invalida! escolha entre 1 ao 4. :) ");
    }
    
    
    Serial.println("deseja voltar para o menu? DIgite sim ou não(em minusculo)");

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
  while(contador != 0);//se o contador é igual a 0, o mesmo repete
}


void loop()
{  
 //sem instrucões 
}