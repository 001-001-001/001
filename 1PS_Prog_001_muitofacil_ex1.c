// Processo Seletivo CrossBots 2022.
// Concorrente 001.
// Exercício 1 - Converter radianos em graus.
#include <stdio.h>
float rad_graus (float rad){
    float pi = 3.141592;
    float grau;
    grau = rad * 180/pi;
    return grau;
}
int main (){
    float n1, n2;
    scanf ("%f", &n1);
    n2 = rad_graus (n1);
    printf ("%.1f", n2);
    return 0;
}

