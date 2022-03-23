// Processo Seletivo CrossBots 2022.
// Concorrente 001.
// Exercício 2 - Converter horas em meses, semanas, minutos, segundos e milissegundos.
#include <stdio.h>
int *converter (int horas){
    static int retorno[5];
    retorno[0] = horas/720;
    retorno[1] = horas/168;
    retorno[2] = horas*60;
    retorno[3] = horas*3600;
    retorno[4] = horas*3600000;
    return retorno;
}
int main (){
    int *p;
    int i, n;
    scanf ("%d", &n);
    p = converter (n);
    for (i=0; i<5; i++){
        printf ("%d\n", *(p + i));
    }
    return 0;
}
