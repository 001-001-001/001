// Processo Seletivo CrossBots 2022.
// Concorrente 001.
// Exercício 5 - Medir distância entre dois pontos.
#include <stdio.h>
#include <math.h>
float distancia (float x1, float y1, float x2, float y2){
    float x3, y3, L1, L2, hip, dist;
    x3 = x2 - x1;
    y3 = y2 - y1;
    L1 = pow (x3, 2);
    L2 = pow (y3, 2);
    hip = L1 + L2;
    dist = sqrt (hip);
    return dist;
}
int main (){
    float a, b, c, d, n;
    scanf ("%f", &a);
    scanf ("%f", &b);
    scanf ("%f", &c);
    scanf ("%f", &d);
    n = distancia (a, b, c, d);
    printf ("%.2f", n);
return 0;
}
