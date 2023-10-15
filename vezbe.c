#include <stdio.h>
#include <math.h>
#include <conio.h>


// Strukture podataka i algoritmi vezbanja
// ------------------------------------------------------

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
// ---------------------------------------------------------------------------------------------------------

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
// -----------------------------------------------------------------------------------------------

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
// ---------------------------------------------------------------------------------------------------------

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
// ---------------------------------------------------------------------------------------------------------
// ciklicne strukture - algoritmi
// brojac parnih brojeva od 1 do 25
// int main() {
//     int  i;
//     printf("Parni brojevi od 1 do 25 su :\n");
//     for (i = 1; i <= 25; i++) {
//         if (i % 2 == 0) {
//            printf("%d \t", i);
//         }
//     }
// }
// ---------------------------------------------------------------------------------------------------------

// Formirati algoritam za izračunavanje sume brojeva 1 do N, gde
// se N učitava
// int main() {
//     int N;
//     int i;
//     double suma = 0;
//     printf("Unesite vas broj : ");
//     scanf("%d", &N);

//     for (i = 1; i<=N; i++) {
//         suma = suma + i;
//         printf("Suma brojeva je %.1lf", suma);
//     }
// }
// ---------------------------------------------------------------------------------------------------------

// Lista brojeva od 10 do 1
// int main() {
//     int i = 10;
//     for (i = 10; i>=1; i--) {
//         printf("%d\n", i);
//     }

//     return 0;
// }
// ---------------------------------------------------------------------------------------------------------

// Za unete brojeve A, B i C, treba rešiti linearnu jednačinu AX+B=C.
// int main() {
//     double A;
//     double B;
//     double C;
//     double x;

//     printf("Unesite A : ");
//     scanf("%lf", &A);

//     printf("Unesite B : ");
//     scanf("%lf", &B);

//     printf("Unesite C : ");
//     scanf("%lf", &C);

//     x = (C - B) / A;
//     printf("Rezultat jednacine AX + B = C jeste %.1lf", x);

// }
// ---------------------------------------------------------------------------------------------------------

// Za unetu temperaturu u Celzijusovim stepenima, izračunati temperaturu u Farenhajtima. 
// int main() {
//     double C;

//     printf("Unesite temperaturu u Celzisujovim stepenima : ");
//     scanf("%lf", &C);

//     double F = (C * 1.8 + 32);
//     printf("Temperatura u Farenhajtima je : %.1lf", F);

//     return 0;
// }
// ---------------------------------------------------------------------------------------------------------

// Unosi se rezolucija slike u obliku dva cela broja koji označavaju broj piksela po širini i visini. Izračunati rezoluciju slike u megapikselima, ako znamo da megapiksel predstavlja milion piksela.
// int main() {
//    int sirina;
//     int visina;
//     printf("Pixel --> Megapixel Converter\n");

//     printf("Unesite sirinu vase slike : ");
//     scanf("%d", &sirina);

//      printf("Unesite visinu vase slike : ");
//     scanf("%d", &visina);

//     double megaS = (visina * sirina) / 1000000.0;
//      printf("Dimenzija vase slike u megapixelima jesu : %.2lf MP \n", megaS);

//      return 0;
// }

// Unosi se broj casova koje ucenici imaju tog dana. Izracunati koliko sati i minuta djaci provedu na nastavi, ako znamo da cas traje 45min
// int main() {

//     int brCasova;
//     int satImin;
//     printf("Unesite broj casova: ");
//     scanf("%d", &brCasova);

//     switch(brCasova) {
//         case 1: 
//         satImin = 45;
//         printf("Proveli ste %d minuta na nastavi.", satImin);
//         break;
//          case 2: 
//         satImin = 90;
//         printf("Proveli ste %d minuta, tj. 1 sat i 10 minuta na nastavi.", satImin);
//         break;
//          case 3: 
//         satImin = 135;
//         printf("Proveli ste %d minuta, tj. 2 sata i 15 minuta na nastavi.", satImin);
//         break;
//          case 4: 
//         satImin = 180;
//         printf("Proveli ste %d minuta, tj. 3 sata na nastavi.", satImin);
//         break;
//          case 5: 
//         satImin = 225;
//         printf("Proveli ste %d minuta, tj. 3 sata i 45min na nastavi.", satImin);
//         break;
//          case 6: 
//         satImin = 280;
//         printf("Proveli ste %d minuta, tj. 4 sata i 40 minuta na nastavi.", satImin);
//         break;
//     }
// }

// -----------------------------------------------------------------------------------------------------------

// Izracunati rezultat deljenja brojeva X i Y, zaokruzen na dve decimale

// int main() {
//     double x;
//     double y;
//     double rezultat;

//     printf("Unesite prvi broj: ");
//     scanf("%lf", &x);

//     printf("Unesite drugi broj: ");
//     scanf("%lf", &y);
//     rezultat = x / y; 
//     printf("Rezultat deljenja brojeva je: %.2lf", rezultat);

// }

// -----------------------------------------------------------------------------------------------------------

// Unesi se neka godina, GOD, kao ceo broj. Ispisati u kom veku pripada.

// int main() {
//     int GOD;
//     int VEK;
//     printf("Kojem veku pripada X godina?\n");
//     printf("Unesite godinu: ");
//     scanf("%d", &GOD);

//     if (GOD >= 1601 && GOD <= 1700) {
//         VEK = 17;
//         printf("Godina %d je %d. vek!", GOD, VEK);
//     } else if (GOD >= 1701 && GOD <= 1800) {
//         VEK = 18;
//         printf("Godina %d je %d. vek!", GOD, VEK);
//     }  else if (GOD >= 1801 && GOD <= 1900) {
//         VEK = 19;
//         printf("Godina %d je %d. vek!", GOD, VEK);
//     }  else if (GOD >= 1901 && GOD <= 2000) {
//         VEK = 20;
//         printf("Godina %d je %d. vek!", GOD, VEK); 
//     }  else if (GOD >= 2001 && GOD <= 2100) {
//         VEK = 21;
//         printf("Godina %d je %d. vek!", GOD, VEK);
//     } 
//     return 0;

// }
