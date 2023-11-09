 Izračunati aritmetičku sredinu prirodnih brojeva od a do b. // suma brojeva / broj brojeva

int main() {
        float a, b;
        printf("Unesite 2 broja: ");
        scanf("%f %f", &a, &b);
        float suma = 0;
        float brojBrojeva = 0;


        for (float i = a; i <= b; i++){
            suma += i;
            brojBrojeva++;
        } printf("Aritmeticka sredina brojeva %.1f i %.1f jeste : %.5f: ", a, b, suma / brojBrojeva);
        return 0;


}