//Programación Paralela
//Justin Emmanuel Parra Cardenas
//Multiplicación por sumas sucesivas

int main(void){
    int a,b;
    int resultado=0;

    printf("Ingrese el valor de a:\n");
    scanf("%d",&a);

    printf("Ingrese el valor de b:\n");
    scanf("%d",&b);

    for(int i=0;i<b;i++){
        resultado+=a; 
    }

    printf("El resultado de la multiplicacion es: %d\n",resultado);
}