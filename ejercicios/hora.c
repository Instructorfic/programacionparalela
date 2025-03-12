#include<stdio.h>

int main(){

        //VARIABLES
        int horas,minutos,segundos;
        int i=0;
        //ENTRADA DE DATOS
        printf("Ingrese la hora: ");
        scanf("%d",&horas);
        printf("Ingrese los minutos:");
        scanf("%d",&minutos);
        printf("Ingrese los segundos:");
        scanf("%d",&segundos);
        //PROCESOS Y SALIDAS
        if(horas<25){
                if(minutos<=59 && minutos>0){
                    minutos=minutos+1;
                        if(minutos>60){
                            horas=horas+1;
                        }
                        if(segundos<=59 && segundos>0){
                                        segundos=segundos+1;
                                        if(segundos>60){
                                            minutos=minutos+1;
                                        }
                                    
                                printf("%d:%d:%d\n",horas,minutos,segundos);
                        }else{
                                printf("Ingrese un valor entre 0-60");
                        }
                }else{
                        printf("Ingrese un valor entre 0-60.");
                }
        }else{
                printf("Ingrese la hora en formato de 24 hrs.\n");
        }

return 0;
}
