// C++ code
/*
Você foi contratado para criar um sistema que analisa a situação de um aluno com base em suas notas e frequência.

Regras:
Calcule a média entre DUAS notas.
Verifique se o aluno foi APROVADO.
Aprovado se média é MAIOR OU IGUAL A 6 e SE A frequência É MAIOR OU IGUAL 75%.
Caso contrário, exiba se foi reprovado por nota
Exiba se foi REPROVADO por frequência.
Exiba se foi REPROVADO 

frequência e média da nota .
Se a média for exatamente 10, exiba: "Parabéns! Nota máxima!"
*/

int nota1 = 0;
int nota2 = 0;
int frequencia = 0;


void setup()
{
 Serial.begin(9600);
 Serial.println("Sistema de notas");
 Serial.println();
  
  
 Serial.println("Digite primeira nota: ");
 while(!Serial.available()); 
  nota1 = Serial.parseInt();
  
 
  Serial.println("Digite segunda nota: ");
 while(!Serial.available());
  nota2 = Serial.parseInt(); 
  
  
   Serial.println("Digite sua frequencia: ");
 while(!Serial.available()); //vi este codigo pois nao lembrava
  frequencia = Serial.parseInt();
  
  //somar as notas e dividir pelo numero total de notas
   
      
  if(frequencia > 75 && (nota1 + nota2 =)%2 = 10) {
    Serial.println("reprovado por frequencia");
    Serial.println("Parabéns! Nota máxima!");
  }  
  else if(frequencia = 75 && (nota1 + nota2 =)%2 = 10) {
    Serial.println("aprovado em frequencia");
    Serial.println("Parabéns! Nota máxima!");
  }   
  else if(frequencia = 100 && (nota1 + nota2 =)%2 = 10) {
    Serial.println("Parabéns! Nota máxima!");
    Serial.println("Parabéns! Nota máxima!");
  }  
  else if(frequencia = 75 (nota1 + nota2 =)%2 > 6) {
    Serial.println("aprovado em frequencia");
    Serial.println("reprovado por nota");
  }
  else if(frequencia = 100 (nota1 + nota2 =)%2 > 6) {
    Serial.println("Parabéns! Nota máxima!");
    Serial.println("reprovado por nota");
  }
  else if(frequencia > 75 && (nota1 + nota2 =)%2 > 6) {
    Serial.println("reprovado por frequencia");
    Serial.println("reprovado por nota");
  }  
  else if(frequencia > 75 && (nota1 + nota2 =)%2 <=6) {
    Serial.println("reprovado por frequencia");
    Serial.println("aprovado em nota");
  }  
  else(frequencia = 100 && (nota1 + nota2 =)%2 <=6) {
    Serial.println("Parabéns! Nota máxima!");
    Serial.println("aprovado em nota");
  }  
    
}

void loop()
{
  
  
}