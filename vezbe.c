#include <stdio.h>
#include <math.h>
#include <conio.h>


// Strukture podataka i algoritmi vezbanja

// 1. izracunati dijagonalu pravougaonika
// float num1;
// float num2;
// float result;

// int main () {
//     printf("Unesite stranicu a ");
//     scanf("%f", &num1);
//     printf("\nUnesite stranicu b ");
//     scanf("%f", &num2);

//     result = sqrt(num1 * num1 + num2 * num2);
//     printf("Dijagonala pravougaonika je %.1f", result);

// }

// 2. izracunati sumu dva broja

// float broj1;
// float broj2;
// float resultat;

// int main() {
//      printf("Unesite prvi broj: ");
//      scanf("%f", &broj1);
//      printf("Unesite drugi broj: ");
//      scanf("%f", &broj2);
//      resultat = broj1 + broj2;
//      printf("Suma brojeva je %.1f", resultat);
     

//      return 0;
// }
// --------------------------------------------
// 3. Izracunati kvadrat upisanog broja

// float broj;
// float resultat;

// int main() {
//     printf("Unesite broj: ");
//     scanf("%f", &broj);

//     resultat = broj * broj;
//     printf("Kvadrat vaseg broja je %.1f", resultat);


//     return 0;
// }

// selekcije . razgraniti algoritam

// int main() {
//     int num;
//     scanf("%d", &num);

//     if (num >= 18) {
//         printf("You are a legal adult!");
//     } else {
//         printf("You are not legal yet!");
// } 
// }

// ciklicne strukture - algoritmi
// brojac parnih brojeva od 1 do 25


int main() {
    int  i;
    printf("Parni brojevi od 1 do 25 su :\n");
    for (i = 1; i <= 25; i++) {
        if (i % 2 == 0) {
           printf("%d \t", i);
        }
    }
}

// Formirati algoritam za izračunavanje sume brojeva 1 do N, gde
// se N učitava