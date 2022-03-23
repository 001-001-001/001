#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *repete (char palavra[30], int vezes){
    int i;
    static char v[100][30];
    for (i=0; i<vezes; i++){
        strcpy (v[i], palavra);
    }
    return v;
}
int main (){
    char string[30];
    int i, n;
    scanf ("%s", &string[30]);
    scanf ("%d", &n);
    char *p;
    p = repete (string, n);
    for (i=0; i<n; i++){
        printf ("%s", *(p + i));
    }
    return 0;
}
