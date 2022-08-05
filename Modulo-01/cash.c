#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main (void)
{//main

float troco=0;
int centavos=0;
int moedas=0;

do
    {
    troco=get_float("Qual é o valor do troco? ");
    }
while (troco<0);

centavos=round(troco*100);

while (centavos>0)
{

    while (centavos>=25)
    {
    centavos=centavos-25;
    moedas++;
    }
    
    while (centavos>=10)
    {
    centavos=centavos-10;
    moedas++;
    }
    
    while (centavos>=5)
    {
    centavos=centavos-5;
    moedas++;
    }
    
    while (centavos>=1)
    {
    centavos=centavos-1;
    moedas++;
    }
    }

printf("Número de moedas: %i", moedas);

}//main