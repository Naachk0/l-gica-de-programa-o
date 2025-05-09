// C++ code
//

 // Variaveis = escpo de variaveis(global)
{ //escopo local
  
 Serial.begin(9600);
   
 String nome = "Edu Paz"; //escpop local so vale dentro do setup
  Serial.println("Nome eh" + nome); //escreve Edu paz dentro da Serial
  nome = "Bia paz"; // muda o valor da variavel para Bia paz

void loop()
{
 String NomeDele = "Paulo Vieira"; //variavel local dentro do loop
  
  if ( nomeDele == "Paulo Vieira" )
  {
    int idade = 16; //variavel local dentro do if
  }
  
  
  
  Serial.println("Nome dele eh:" = nomeDele); //imprime "paulo vieira"
  Serial.println("idade eh:" + String(idade)); // da erro, ja que a variavel não existe nesse escopo
  
}