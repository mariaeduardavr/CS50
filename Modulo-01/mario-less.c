#include <stdio.h>
#include <cs50.h>
int main (void)
{
int altura;
int coluna;
int linha;
int espaco;

do
    {
    altura=get_int("Digite a altura: ");  
    }
    
while ((altura<1) || (altura>8));

for (linha=1; linha<=altura; linha++)
    {
        for (espaco=1; espaco<=altura-linha; espaco++)
        {
            printf(" ");
        }
        
        for (coluna=1; coluna<=linha; coluna++)
        {
            printf("#");
        }
    printf("\n");
    }
}