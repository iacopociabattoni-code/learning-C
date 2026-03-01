#include <stdio.h>
#include <stdlib.h>

int main() {
    int anno;
    printf("Inserisci l'anno per sapere se bisestile o meno: ");
    scanf("%d", &anno);

    if ((anno%4==0 && anno%100!=0) || (anno%400==0)) {
        printf("%d risulta essere bisestile", anno);
    } else {
        printf("%d risulta NON essere bisestile", anno);
    }
    return 0;
}