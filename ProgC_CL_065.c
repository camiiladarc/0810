#include <stdio.h>
#include <time.h>
#include <string.h>

void mudaLinha(void)
{
    printf("\n");
}

void meuCarimbo(void)
{
    time_t tempo_atual = time(NULL);
    struct tm *tempo_local = localtime(&tempo_atual);
    char data_hora[64];

    strftime (data_hora, sizeof(data_hora), "%d - %m - %Y  %H:%M:%S",  tempo_local);
    printf("\n [Camila Lima] - [%s]", data_hora);
    mudaLinha();
}

int main() 
{

    meuCarimbo();
    mudaLinha();

    int seg, min, hr;
    int totalSegundos;

    printf("Insira a hora: ");
    scanf("%d", &hr);

    printf("Insira os minutos: ");
    scanf("%d", &min);

    printf("Insira os segundos: ");
    scanf("%d", &hr);

    hr = (hr * 60) * 60;
    min = min * 60; 

    totalSegundos= hr + min + seg;

    mudaLinha();

    printf("No dia de hoje, já correram %d segundos", totalSegundos);
    



}