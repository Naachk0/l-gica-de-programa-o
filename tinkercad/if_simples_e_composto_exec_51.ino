// C++ code
//
int numero1 = 0;
int numero2 = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
 Serial.println("Digite um numero");
  while(!Serial.available());
  numero1 = Serial.parseInt(); 
  
  Serial.println("Digite outro numero");
  while(!Serial.available());
  numero2 = Serial.parseInt(); 
  
  if (numero1 < numero2){
  }else {
    Serial.println("eh maior");
	}
  
  Serial.println("numero maior: " + String(numero1));
  Serial.println("numero menor: " + String(numero2));
}