#include <stdio.h>
#include <stdlib.h>

int main () {
    int mese;
    printf("Inserisci il numero del mese di cui vuoi sapere i giorni: ");
    scanf("%d", &mese);
    switch (mese)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("31 Giorni!");
        break;
    case 4: case 6: case 9: case 11:
        printf("30 Giorni!");
        break;
    case 2: 
        printf("28 Giorni!");

    default:
        break;
    }
}