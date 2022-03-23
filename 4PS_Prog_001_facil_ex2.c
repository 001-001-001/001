#include <stdio.h>
int cont_um (int numero){
    int cont = 0;
    void binario (int num){
        if (num == 0)
            printf ("%d", num);
        else{
            binario (num/2);
            printf ("%d", num%2);
            if (num%2 == 1)
                cont ++;
        }
    }
    binario (numero);
return cont;
}
int main (){
    int n, m;
    scanf ("%d", &m);
    n = cont_um(m);
    printf ("\n%d", n);
return 0;
}
