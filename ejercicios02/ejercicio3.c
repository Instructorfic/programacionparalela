/*Escriba un programa que lea una hora (hora,
minutos, segundos) y diga la hora que será un
segundo después.*/
#include <stdio.h>
int main()
{
    int horas, minutos, segundos;
    printf("Porporcione las horas (formato 00-23): ");
    scanf("%d",&horas);
    printf("Proporcione los minutos: ");
    scanf("%d",&minutos);
    printf("Proporcione los segundo: ");
    scanf("%d",&segundos);
    if (segundos==59)
    {
        if (minutos==59)
        {
            printf("Un segundo despues la hora sera: %d:00:00\n", horas+1);
        }
        else{
            printf("Un segundo despues la hora sera: %d:%d:00\n", horas, minutos+1);
        }
        
    }
    else{
        printf("Un segundo despues la hora sera: %d:%d:%d\n", horas,minutos,segundos+1);
    }
    
    return 0;
}
