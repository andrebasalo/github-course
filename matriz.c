#include <stdio.h>
#include <stdlib.h>


#define NUM_LINHAS 2
#define NUM_COLUNAS 5


int main(int argc, char** argv)
{
    int matriz[NUM_LINHAS][NUM_COLUNAS];
    int linha, coluna;
    int contpar=0,contimp=0;
    float por,total;
    
    
    //escrevendo na Matriz
    
            for(linha = 0 ; linha < NUM_LINHAS ; linha++)
    {
        for(coluna = 0 ; coluna < NUM_COLUNAS ; coluna++)
        {
            printf("Elemento [%d][%d]: ", linha+1, coluna+1);
           linha = atoi(argv[1]);
           coluna = atoi(argv[2]);
           
           //scanf("%d", &matriz[linha][coluna]);
            if(matriz[linha][coluna] < 0)
            {
                printf("Voco nao pode inserir numeros negativos\n");
                return 0;
            }            
        }
    }
    
    for(linha = 0 ; linha < NUM_LINHAS ; linha++)
    {
        for(coluna = 0 ; coluna < NUM_COLUNAS ; coluna++)
        {
            if (matriz[linha][coluna] % 2 == 0)
                contpar++;
            else
                contimp++;
            
            printf("\n");
        }
    }
    
    printf("\nMatriz gerada\n");
    for(linha = 0 ; linha < NUM_LINHAS ; linha++)
    {
       for(coluna = 0 ; coluna < NUM_COLUNAS ; coluna++)
       {
           printf("%d\t", matriz[linha][coluna]);
       }
   }



    por=contimp+contpar;
    total=(contimp/por)*100;


    printf("\nA quantidade de numeros impares e de %d\n",contimp);
    printf("A porcentagem de numeros impares em relacao aos pares e de %.0f por cento \n",total);
}
