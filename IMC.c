#include <stdio.h>

int main() {
    float peso, altezza, imc;

    printf("Inserisci il tuo peso in kg: ");
    scanf("%f", &peso);
    
    printf("Inserisci la tua altezza in cm: ");
    scanf("%f", &altezza);

    altezza= altezza /100;
    imc= peso /(altezza + altezza);

    printf("\nIl tuo IMC e': %.2f\n", imc);

    if (imc < 18.5) {
        printf("Categoria: Sottopeso\n");
    } else if (imc >= 18.5 && imc < 25.0) {
        printf("Categoria: Normopeso\n");
    } else if (imc >= 25.0 && imc < 30.0) {
        printf("Categoria: Sovrappeso\n");
    } else {
        printf("Categoria: Obesita'\n");
    }

    return 0;
}