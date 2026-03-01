#include <stdio.h>
int main() {
    int eta;
    printf("Inserisci la tua eta: ");
    scanf("%d", &eta);
    if (eta>=18) {
        printf("Maggiorenne");
    } else {
        printf("Minorenne");
    }
   
    return 0;
}