/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    struct{
        char nome[50], email[50], tel[15];}
        digitos;
        int total1=0, total2=0, total3=0;
        printf("Digite um nome: ");
        scanf("%s", digitos.nome);
        printf("Digite o email: ");
        scanf("%s", digitos.email);
        printf("Digite o seu numero: ");
        scanf("%s", digitos.tel);
        
        while(digitos.nome[total1] != '\0')
        {total1++;}
        printf("Nome: %d digitos\n", total1);
        while(digitos.email[total2] != '\0')
        {total2++;}
        printf("Email %d digitos\n", total2);
        while(digitos.tel[total3] != '\0')
        {total3++;}
        printf("Telefone %d digitos\n", total2);
        
    
    return 0;
}

