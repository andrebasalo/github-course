#include <stdio.h>
#include <stdlib.h>
int main() {
int cont_predio, cont_ap, cont_mes;
//controle de prédios
for(cont_predio = 1; cont_predio <= 5; cont_predio++)
{
printf("Prédio: %d\n", cont_predio);
//controle de apartamentos
for(cont_ap = 1; cont_ap <= 15; cont_ap++)
{
printf("Apartamento: %d\n", cont_ap);
//controle dos meses
for(cont_mes = 1; cont_mes <= 12; cont_mes++)
{
if(cont_ap <= 9)
{
if(cont_mes == 7 || cont_mes == 12)
printf("Mês: %d - R$ 600.00\n", cont_mes);
else
printf("Mês: %d - R$ 1200.00\n", cont_mes);
}
else
{
if(cont_mes == 7 || cont_mes == 12)
printf("Mês: %d - R$ 1000.00\n", cont_mes);
else
printf("Mês: %d - R$ 2000.00\n", cont_mes);
}
}
printf("\n");
}
}
system("pause");
}
