// C++ code
/*
Elabore um programa para cálculo de preços de produtos que solicite o preço
de compra do produto e o percentual a ser aplicado em cima desse valor para
a venda. Calcule e exiba o preço de venda do produto. Se o percentual a ser
aplicado for inferior a 50%, exiba uma mensagem informando ao usuário que o
produto será vendido com uma margem muito pequena de lucro.
   a55
   precoDeCompra r$ 900
   precoEventual = 100%
   precoVenda = 1800
   precoVenda = precoCompra +(precoCompra/100 * percentual)
*/

float precoCompra, percentual, precoVenda;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
    Serial.println("quanto pagou no produto");
  while(!Serial.available());
   precoCompra = Serial.parseFloat(); 
  
   Serial.println("qual percentual a ser aplicado");
  while(!Serial.available());
   percentual = Serial.parseFloat(); 
  
  
  if (percentual < 50){
   precoVenda = precoCompra +(precoCompra/ 100 * percentual); 
    Serial.println("produto sera vendido com uma margem muito pequena de lucro");
	}
  
 Serial.println("precodevenda: " + String(precoVenda));

  
}