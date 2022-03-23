#include <stdio.h>
char *CB (int numero){
    static char num[2];
    itoa (numero, num, 10);
    static char cross[10] = "Cross";
    static char bots[10] = "Bots";
    static char crossbots[10] = "CrossBots";
    if ((numero%3 == 0) && (numero%5 != 0))
        return cross;
    if ((numero%3 != 0) && (numero%5 == 0))
        return bots;
    if ((numero%3 == 0) && (numero%5 == 0))
        return crossbots;
    else
        return num;
}
int main(){
    char *p;
    int i, n;
    scanf ("%d", &n);
    p = CB(n);
    for (i=0; i<10; i++){
        printf ("%c", *(p + i));
    }
return 0;
}
