#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>




// Strukture podataka i algoritmi vezbanja
// ---------------------------------------------------------------------------------------------------------------------------

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
// --------------------------------------------------------------------------------------------------------------------------------

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
// ----------------------------------------------------------------------------------------------------------------------

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
// --------------------------------------------------------------------------------------------------------------------------------

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
// --------------------------------------------------------------------------------------------------------------------------------
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
// --------------------------------------------------------------------------------------------------------------------------------

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
// --------------------------------------------------------------------------------------------------------------------------------

// Lista brojeva od 10 do 1
// int main() {
//     int i = 10;
//     for (i = 10; i>=1; i--) {
//         printf("%d\n", i);
//     }

//     return 0;
// }
// --------------------------------------------------------------------------------------------------------------------------------

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
// --------------------------------------------------------------------------------------------------------------------------------

// Za unetu temperaturu u Celzijusovim stepenima, izračunati temperaturu u Farenhajtima. 
// int main() {
//     double C;

//     printf("Unesite temperaturu u Celzisujovim stepenima : ");
//     scanf("%lf", &C);

//     double F = (C * 1.8 + 32);
//     printf("Temperatura u Farenhajtima je : %.1lf", F);

//     return 0;
// }
// --------------------------------------------------------------------------------------------------------------------------------

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

// ----------------------------------------------------------------------------------------------------------------------------------

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

// ----------------------------------------------------------------------------------------------------------------------------------

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

// ----------------------------------------------------------------------------------------------------------------------------------

// Uneto veliko slovo engleske abecede, treba konvertovati u malo slovo, npr. za uneto "R" treba da se dobije "r".

// int main() {
//     char X, upperX;
//     printf("Unesite veliko slovo engleske abecede : ");
//     scanf("%c", &X);
//     upperX = tolower(X);
//     printf("Malo slovo : %c", upperX);
// }

// ----------------------------------------------------------------------------------------------------------------------------------
// Za uneti celi broj X, proveriti i ispisati da li je paran ili neparan.

// int main() {
//     int X;
//     printf("Provera parnosti broja.\n");

//     printf("Unesite celi broj: ");
//     scanf("%d", &X);

//     if (X % 2 == 0) {
//         printf("Broj je paran!");
//     } else {
//         printf("Broj nije paran!");
// }
//  }

// ----------------------------------------------------------------------------------------------------------------------------------

// Unose se tri broja A, B i C. Izračunati zbir onih koji su veći od nule.

// int main() {
//      double A, B, C;
//      double zbir;
//      printf("Unesite 3 broja : ");
//      scanf("%lf %lf %lf", &A, &B, &C);
    
//      if (A >= 0) {
//         zbir += A;
//      }
//      if (B >= 0) {
//         zbir += B;
//      }
//      if (C >= 0) {
//         zbir += C;
//      }
     
//      printf("%.1lf", zbir);
//      return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Unosi se veličina nekog fajla u bajtovima B. Treba izračunati veličinu tog fajla u kibibajtima i mebibajtima i ispisati rezultat, zaokružen na dve, odnosno tri decimale. // 1 kb = 1024B i 1 mb = 1024KB

// int main() {
//     double B;
//     double kiloB;
//     double megaB;

//     printf("Bajt --> Kilobajt i Megabajt\n");
//     printf("Unesite velicinu u Bajtu: ");
//     scanf("%lf", &B);

//     kiloB = B / 1000;
//     megaB = B / 1000000;
//     printf("Bajt --> Kilobajt = %.6lf\n", kiloB);
//     printf("Bajt --> Megabajt = %.6lf", megaB);

// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Unose se tri broja A,B i C. Otkriti i ispisati najmanji broj

// int main() {
//     int A;
//     int B;
//     int C;

//     printf("Unesite prvi broj: ");
//     scanf("%d", &A);

//     printf("Unesite drugi broj: ");
//     scanf("%d", &B);

//     printf("Unesite treci broj: ");
//     scanf("%d", &C);

//     if (A < B && A < C) {
//         printf("%d je najmanji!", A);
//     } else if (B < A && B < C) {
//         printf("%d je najmanji!", B);
//     } else if (C < A && C < B) {
//         printf("%d je najmanji!", C);
//     }
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Za unete 4 ocene proveriti da li je za učenika bolji prosek koji se računa po aritmetičkoj, geometrijskoj ili harmonijskoj sredini. Aritmetička sredina se dobija kao količnik zbira N vrednosti i njihovog broja N. Geometrijska kao N-ti koren proizvoda N vrednosti (postoji razlog zašto imamo baš 4 ocene). Harmonijsku sredinu računamo kao količnik broja vrednosti N i zbira N recipročnih zadatih vrednosti. Kako se racuna N-ti koren - posto je nti koren po defaultu 2 onda dva put stavimo sqrt da bi bio 4

//  int main() {
//     double ocena1, ocena2, ocena3, ocena4;

//      printf("Unesite prvu ocenu: ");
//      scanf("%lf", &ocena1);

//     printf("Unesite drugu ocenu: ");
//     scanf("%lf", &ocena2);

//      printf("Unesite trecu ocenu: ");
//      scanf("%lf", &ocena3);

//      printf("Unesite cetvrtu ocenu: ");
//      scanf("%lf", &ocena4);

//     double aritmeticka = (ocena1 + ocena2 + ocena3 + ocena4) / 4;
//     double geometrijska2 = sqrt(sqrt(ocena1 * ocena2 * ocena3 * ocena4));
//     double harmonijska = 4 / (1/ocena1 + 1/ocena2 + 1/ocena3 + 1/ocena4);

//     if (aritmeticka > geometrijska2 && aritmeticka > harmonijska) {
//          printf("Najbolji je prosek po aritmetickoj sredini!");
//      } else if (harmonijska > geometrijska2 && harmonijska > aritmeticka) {
//          printf("Najbolji je prosek po harmonijskoj sredini!");
//      } else if (geometrijska2 > aritmeticka && geometrijska2 > harmonijska) {
//          printf("Najbolji je prosek po geometrijskoj sredini!");
//      } else ("nzm");
//  }

// ----------------------------------------------------------------------------------------------------------------------------------

// Ako se učenik loše ponaša na časovima (ponašanje se unosi kao broj od 1 do 10, sve iznad 5 je dobro ponašanje), i ne zna gradivo (ocena na kontrolnom je manja od 4), profesor će ga izvesti pred tablu i oceniti ga. Ako se učenik loše ponaša i zna gradivo, biće isteran sa časa. Ako se učenik dobro ponaša, profesor će ga pohvaliti. Unosi se ponašanje, a ako je potrebno i ocena sa kontrolnog. Treba ispisati poruku "ISPITATI", "IZBACITI" ili "POHVALITI".

// int main() {

//     int ponasanje;
//     int ocena;

//     printf("Uneti ponasanje od 1-10: ");
//     scanf("%d", &ponasanje);

//     printf("Uneti ocenu: ");
//     scanf("%d", &ocena);

//     if (ponasanje <= 5 && ocena < 4) {
//         printf("Ispitati");
//     } else if (ponasanje <= 5 && ocena > 4) {
//         printf("Izbaciti");
//     } else if (ponasanje >= 5) {
//         printf("Pohvaliti");
//     }
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Ispisati sve brojeve od A do B, gde se A i B unose, u razmacima od po X.
// Npr. ako su A=5.3, B=7.6 i X=0.3, onda se ispisuju brojevi 5.3 5.6 5.9 6.2 6.5 6.8 7.1 i 7.4 .

// int main() {
//     float A;
//     printf("Unesite prvi broj : ");
//     scanf("%f", &A);
//     float B;
//     printf("Unesite drugi broj : ");
//     scanf("%f", &B);
//     float X;
//     printf("Unesite broj za razmak : ");
//     scanf("%f", &X);

//     for (float brojevi = A; brojevi <= B; brojevi+= X) {
//         printf("%.1f ", brojevi);
//      } printf("\n");

//     return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Unose se dva cela broja, A i B. Napraviti algoritam koji će ispisati sve brojeve od A do B korišćenjem ciklusa sa preduslovom.

// int main() {
//     int A;
//     printf("Unesite prvi broj : ");
//     scanf("%d", &A);
//     int B;
//     printf("Unesite drugi broj : ");
//     scanf("%d", &B);

//     for (int i = A; i <= B; i++) {
//         printf("%d\n", i);
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Ispis faktorijala unetog broja

// int main() {
//     int broj;
//     printf("Unesite broj: ");
//     scanf("%d", &broj);

//     int faktorijal = 1;
//     for (int f = broj; f >= 1; f--) {
//         faktorijal *= f;
//     }
//     printf("Faktorijal broja %d! jeste %d\n", broj, faktorijal);

//     return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Unose se celi brojevi dok se ne unese 0. Izračunati i ispisati zbir recipročnih unetih brojeva. Npr. za unete brojeve 5, 3 i 9, dobijamo zbir 1/5 + 1/3 + 1/9.

// int main() {
//     double A, B, C;
//     printf("Unesite 3 broja: ");
//     scanf("%lf %lf %lf", &A, &B, &C);

//     double brojevi = 0;
//     if (A  == 0 || B == 0 || C == 0) {
//         printf("Unesite broj drugaciji od 0");
//     } else {
//         brojevi = 1 / A + 1 / B + 1 / C;
//         printf("Zbir reciprocnih brojeva je: %f\n", brojevi);

//     }

// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Ispisati sve delioce unetog celog pozitivnog broja X.
// int main() {
//     int X;
//     printf("Unesite celi broj X: ");
//     scanf("%d", &X);

//     for (int i = 1; i <= X; i++) {
//         if (X % i == 0) {
//             printf("%d ", i);
//         }
//     } return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------
// Prestupnost godine

// int main() {
//     int godina;
//     printf("Provera prestupnosti godine.\nUnesite godinu: ");
//     scanf("%d", &godina);

//     if (godina % 4 == 0 && godina % 100 != 0) {
//         printf("Godina je prestupna!");
//     } else if (godina % 400 == 0) {
//         printf("Godina je prestupna!");
//     } else printf("Godina nije prestupna!");
// }         return 0;

// ----------------------------------------------------------------------------------------------------------------------------------

// Unose se celi brojevi dok se ne unese 0. Izračunati i ispisati prosek unetih parnih brojeva.

// float = %f, double = %lf

// int main() {
//     float A, B, C;
//     printf("Unesite brojeve : ");
//     scanf("%f %f %f", &A, &B, &C);

//     int delilac = 0;
//     float zbir = 0;

//     if ((int)A % 2 == 0) {
//         zbir += A;
//         delilac++;
//     }

//      if ((int)B % 2 == 0) {
//         zbir += B;
//         delilac++;
//     }

//     if ((int)C % 2 == 0) {
//         zbir += C;
//         delilac++;
//     }

//     if (delilac != 0) {
//         float prosek = zbir / delilac;
//         printf("Prosek je %.2f", prosek);
//     }    
//     return 0; }
// 

// ----------------------------------------------------------------------------------------------------------------------------------

// Unosi se redni broj dana u nedelji (celi broj od 1 do 7). Proveriti da li je u pitanju radni dan ili vikend.

// int main() {
//     int dan;
//     printf("Unesite redni broj vaseg dana u nedelji: ");

//     scanf("%d", &dan);
//     if (dan == 6 || dan == 7) {
//         printf("Vikend je!");
//     } else printf("Radni dan je!");
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Za unetu numeričku ocenu učenika (celi broj od 1 do 5), ispisati njeno značenje (5 - "Odličan", 4 - "Vrlo dobar", 3 - "Dobar", 2 - "Dovoljan" i 1 - "Nedovoljan").

// int main() {
//     int ocena;

//     printf("Unesite ocenu: ");
//     scanf("%d", &ocena);

//     switch (ocena) {
//         case 1:
//             printf("Odlican!");
//             break;

//         case 2:
//             printf("Vrlo dobar");
//             break;

//         case 3:
//             printf("Dobar");
//             break;

//         case 4:
//             printf("Dovoljan");
//             break;

//         case 5:
//             printf("Ne dovoljan");
//             break;

//         default:
//             printf("Nepoznata ocena");
//     }

//     return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------


// find the sum of the first N numbers

// int main() {
//     printf("Unesite broj: ");
//     int N;
//     scanf("%d", &N);

//     int sum = 0;

//     for (int i = 0; i <= N; i++) {
//         sum = sum + i;


//     } printf("%d", sum);
//     return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------


// print numbers of N from N to 0 in while and for loops

// int main() {
//      // for loop
//     // int N, i, sum = 0;
//     // printf("Unesite broj: ");
//     // scanf("%d", &N);

//     // for (i = N; i >= 0; i--) {
//     //     printf("%d\n", i);

//     // }

//     // int N;
//     // printf("Unesite broj: ");
//     // scanf("%d", &N);

//     // while (N >= 0) {
//     //     printf("%d\n", N);
//     //     N--;
        
//     // }
    
// ----------------------------------------------------------------------------------------------------------------------------------


//     return 0;
// }



// Unosi se pozitivan celi broj N.
// a) Ispisati sve cele brojeve od 2 do 2N.
// b) Ispisati sve cele brojeve od N do 1.
// int main() {
//      int N;
//      printf("Unesite broj: ");
//      scanf("%d", &N);
     
//      for (int i = N; i >= 1; i--) {
//         if (N == 1) {
//         printf("1"); 
//         continue;
//      }
//         printf("%d\n", i);

//       }
// }

// ----------------------------------------------------------------------------------------------------------------------------------


// Izračunati rezultat deljenja brojeva X i Y, zaokružen na dve decimale.

// int main() {
//      double x, y;
//      printf("Unesite brojeve: ");
//      scanf("%lf %lf", &x, &y);

//      double r = x / y;
//      printf("%.2lf", r);
//      return 0;   
//      }
// ----------------------------------------------------------------------------------------------------------------------------------

// Kalkulator

// int main() {
//     double x,y;
//     int op;
    
//     printf("Unesite prvi broj: ");
//     scanf("%lf", &x);

   
//     printf("1. + \n"); 
//     printf("2. -  \n"); 
//     printf("3. * \n"); 
//     printf("4. / \n"); 
//     printf("Unesite broj operatora: \n");
//     scanf("%d", &op);
    
//     printf("Unesite drugi broj: ");
//     scanf("%lf", &y);

//     switch(op) {
//          case 1:
//             printf("Zbir %.1lf i %.1lf jeste: %.2lf", x, y, x + y);
//             break;
//          case 2:
//             printf("Razlika %.1lf i %.1lf jeste: %.2lf", x, y, x - y);
//             break;
//          case 3:
//             printf("Rezultat mnozenja %.1lf i %.1lf jeste: %.2lf", x, y, x * y);
//             break;
//          case 4:
//             printf("Rezultat deljenja %.1lf i %.1lf jeste: %.2lf", x, y, x / y);
//             break;
//          default: printf("Unesite jedan od brojeva!");
//     }
// }
// ----------------------------------------------------------------------------------------------------------------------------------

// Napisati aplikaciju koja izracunava aritmetičku sredinu brojeva niza djeljivih sa nekim brojem uz pomoc for petlje.

// int main() {
//     int a, b, brojac;
//     float sum, rezultat;
//     printf("Unesite broj: ");
//     scanf("%d", &a);

//     printf("Unesite delilac: ");
//     scanf("%d", &b);

//     brojac = 0;
//     sum = 0;

//     for (int i = 1; i <= a; i++) {
//         if (i % b == 0) { 
//         brojac += 1;
//         sum += i;  
//         } 
//     } 
//     rezultat = sum / brojac;
//     printf("%.2f", rezultat);

//     return 0;
// }
// ----------------------------------------------------------------------------------------------------------------------------------


// Napišite program koji pronalazi faktorijel datog broja.

// int main() {
//     int a, n;
//     n = 1;

//     printf("Unesite pozitivan broj: ");
//     scanf("%d", &a);

//     for (int i = 1; i <= a; i++) {
//         if (a <= 0) {
//             printf("Unesite pozitivan broj!");
//         } else { 
//         n = n * i;
//          }
//     }   printf("%d", n);


//     return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------


// Ispisati zbir svih parnih brojeva i proizvod svih neparnih brojeva od 1 do N.

// int main() {

//     int broj, zbir, prozivod;
//     zbir = 0;
//     prozivod = 1;
//     printf("Unesite neki broj: ");
//     scanf("%d", &broj);

//     for (int i = 1; i <= broj; i++) {
//         if (i % 2 == 0) {
//             zbir += i;
            
//         } else {
//             prozivod *= i;
//         }
//     } 
//     printf("Zbir : %d\n", zbir); 
//     printf("Prozivod: %d\n", prozivod);
//     return 0;
// }
// ----------------------------------------------------------------------------------------------------------------------------------

// Implementirajte program koji proverava da li je dati broj prost ili nije.
 // Prost broj je broj veci od 1 i on je broj koji je deljiv samo sa 1 i sa samim sobom.
        // ,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113

        // int main() {
        //     int broj, prost = 1;
        //     printf("Unesite neki broj: ");
        //     scanf("%d", &broj);

        //     if (broj <= 1) {
        //         prost = 0;
        //     } else{ 
        //     for (int i = 2; i < broj; i++) {
        //         if (broj % i == 0) {
        //             prost = 0;
        //             break;
        //         }  }
        //     } if (prost == 1) {
        //         printf("Broj je prost!"); }
        //         else {
        //             printf("Broj nije prost!");
        //         }

        //      return 0;
        // }
// ----------------------------------------------------------------------------------------------------------------------------------

// Napravite program koji pronalazi zbir svih elemenata u nizu.

// int main() {
//     int broj, zbir = 0;
//     printf("Unesite broj: "); 
//     scanf("%d", &broj);

//     for (int i = 0; i <= broj; i++){ 
//         zbir += i;
//     }
//     printf("%d", zbir);
// }
// ----------------------------------------------------------------------------------------------------------------------------------

// Number Guessing Game: Create a simple number guessing game where the program generates a random number, and the user has to guess it within a certain number of attempts.

// int main() {
//     srand(time(0));
//     int tacanBroj = (rand() % 20) + 1;

//     int broj;
//     printf("Igra pogadjanja broja! ");

//     do {
//         printf("Unesite broj: ");
//         scanf("%d", &broj);
        
//         if (broj > tacanBroj) {
//             printf("Vas broj je veci od tacnog broja!\n"); }

//          else if (broj < tacanBroj) {
//          printf("Vas broj je manji od tacnog broja!\n"); }
//          else if (broj == tacanBroj) {
//             printf("Pogodili ste broj, bravo!\n");
//         } }  while (broj != tacanBroj);
         
        
//           return 0;
//     } 
// ----------------------------------------------------------------------------------------------------------------------------------

// Ispisati Fibonačijev niz do N-og člana.

// Write a C program to print all natural numbers in reverse (from n to 1). – using while loop

// Medved Limak želi da postane najveći medved, ili barem da postane veći od svog brata Boba.​
// Trenutno, Limak i Bob imaju težinu a i b respektivno. Garantovano je da je Limakova težina manja ili jednaka težini njegovog brata.​
// Limak jede mnogo i njegova težina se utrostručuje svake godine, dok se Bobova težina udvostručuje svake godine.​
// Posle koliko punih godina će Limak postati striktno veći (strogo teži) od Boba?​
// Jedini red unosa sadrži dva cela broja a i b — težinu Limaka i težinu Boba.​
// Odštampajte jedan ceo broj, označavajući ceo broj godina nakon kojih će Limak postati striktno veći od Boba.​
// ​

// Ulazni parametri: (4 7), (4 9), (1 1)​

// Izlazni parametri: (2), (3), (1)​


// 2.
// Jednog dana tri najbolja prijatelja Petya, Vasya i Tonya odlučili su da formiraju tim i učestvuju u programerskim takmičenjima. Učesnicima se obično nude različiti problemi tokom programerskih takmičenja. Dugo pre početka takmičenja prijatelji su odlučili da će rešiti problem samo ako bar dvoje od njih troje sigurno znaju rešenje. U suprotnom, prijatelji neće pisati rešenje problema.

// Takmičenje nudi n problema učesnicima. Za svaki problem znamo koji prijatelj je siguran u rešenje. Pomozite prijateljima da pronađu broj problema za koje će napisati rešenje.

// Ulaz
// Prvi red ulaza sadrži jedan ceo broj n (1 ≤ n ≤ 1000) — broj problema na takmičenju. Zatim n linija sadrže po tri cela broja, svaki broj je ili 0 ili 1. Ako prvi broj u liniji ima vrednost 1, onda Petya je siguran u rešenje problema, inače nije siguran. Drugi broj predstavlja stav Vasye o rešenju, treći broj predstavlja Tonyin stav. Brojevi u linijama su odvojeni razmakom.

// Izlaz
// Ispišite jedan ceo broj — broj problema za koje će prijatelji napisati rešenje na takmičenju.

int main() {
        int n;
        printf("Unesite broj problema na takmicenju: ");
        scanf("%d", &n);

        int a, b, c;
        
        int brojProblema = 0;

        for (int i = 1; i <= n; i++) { 
        printf("Unesite sigurnost takmicara sa 0 ili 1: ");
        scanf("%d %d %d", &a, &b, &c);

        int sigurnost = a + b + c;

        if (sigurnost >= 2) {
                brojProblema ++;
            
        } }
        printf("Broj problema koji ce napisati jeste %d", brojProblema);
        return 0;
}
