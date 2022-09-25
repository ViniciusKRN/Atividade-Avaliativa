#include <stdio.h>

int main(){
	
	int z, x, c, passo1, passo2, passo3;
	
	printf("Diga seu dia de nascimento: ");
	scanf("%d", &z);
	
	printf("Diga seu mes de nascimento: ");
	scanf("%d", &x);
	
	printf("Diga seu ano de nascimento: ");
	scanf("%d", &c);
	
	passo1 = ( z*100 + x) + c;
	
	passo2 = (passo1 / 100) + (passo1 % 100);
	
	passo3 = passo2 % 5;
	
	if(z%5==0)
    printf("PERFIL TIMIDO");
    else
    if(z%5==1)
    printf("PERFIL SONHADOR");
    else
    if(z%5==2)
    printf("PERFIL PAQUERADOR");
    else
    if(z%5==3)
    printf("PERFIL ATRAENTE");
    else
    if(z%5==4)
    printf("PERFIL IRRESISTIVEL");
    
}