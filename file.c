#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main() {

    // This is a comment 
    // printf("I\nlike\npizza\n");
    // printf("It's really good!\n");

    // // there are 
    // // multiple comments

    // printf("1\t2\t3\n4\t5\t6\n");
    // printf("\"I like Pizza\"");

    int x; // declaration
    x  = 132; // initilization

    int y = 192; // declaration + intilization

    int age = 18; // integer
    float gpa = 3.05; // floating point number/ decimal
    char grade = 'B'; // single character
    char name[] = "Mejra"; // array of characters
    
    // printf("Hello, %s", name);
    // printf("\nYou are %d years old\n", age);
    // printf("Your average grade is %c\n", grade);
    // printf("Your gpa is %f", gpa);

    // double d = 3.141567567567; // 8 bytes
    // printf("0.15%lf\n", d);

//    bool e = true;
//    printf("%d\n", e);

//    unsigned char f = 280;
//    printf("%d", f);

//    short int h = 32525;
//    unsigned short in i = 6555;

    //  float item1 = 5.75;
    //  float item2 = 10.00;
    //  float item3 = 100.99;

    //  printf("Item 1 : $%8.2f\n", item1);
    //  printf("Item 2 : $%8.2f\n", item2);
    //  printf("Item 3 : $%8.2f\n", item3);

    // return 0;

    // printf("I like pizza!\n");

    // int age1;
 
    // //char name1[25]; // bytes
    // printf("Whats your name?\n");
    // //scanf("%s", &name1);
    // fgets(name, 25, stdin);
    // name[strlen(name)-1] = '\0';

    // printf("Hello %s, how are you?\n", name);
    // printf("How old are you?\n");
    // scanf("%d", &age1);
    // printf("You are %d years old", age1);

    // double A = sqrt(64);
    // double B = pow(2, 4);
    // int C = round(3.14);
    // int D = ceil(3.14); //round up
    // int E = floor(3.99); // round down

    // printf("\n%d", E);

    // circle circumference round up calculator
    double r;
    
    const double PI = 3.14159;
    // printf("Enter the radius of your circle\n");

    // scanf("%lf", &r);
    // int E = 2 * r * PI;
    // double area;
    // area = PI * r * r;
    // printf("\narea: %lf", area);
    // printf("\nCircumference: %d", E);


    double A;
    double B;
    double C;

    printf("Enter side A: ");
    scanf("%lf", &A);

    printf("Enter side B: ");
    scanf("%lf", &B);
    
    C = sqrt(A*A + B*B);
    printf("Side C: %lf", C);
   

    return 0;
}