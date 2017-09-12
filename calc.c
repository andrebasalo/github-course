#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
       
        float num1;
        float num2;
        int opt; 
        
        printf ("Operações da Calculadora \n\n");
        printf ("Opção 1  somar\n");
        printf ("Opção 2  subtrair\n");
        printf ("Opção 3  multiplicar\n");
        printf ("Opção 4  dividir\n\n");
        
        opt = atoi(argv[1]);
        num1 = atof(argv[2]);
        num2 = atof(argv[3]);
      
        
        switch(opt){
        case 1: 
                printf("Soma de %.2f +  %.2f =  %.2f \n\n", num1,num2, num1 + num2);
                break;
        case 2:
                printf("Subtraçã de %.2f -  %.2f =  %.2f \n\n", num1,num2, num1 - num2);
                break;
        case 3:
                 printf("Multiplicação de %.2f *  %.2f =  %.2f \n\n", num1,num2, num1 * num2);
                break;
        case 4:
                 printf("Divisão de %.2f/%.2f =  %.2f \n\n", num1,num2,num1 / num2);
                break;
        default:
                printf("Você digitou uma opção não valida");
                
       
        }
        
}
