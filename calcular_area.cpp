#include <stdio.h>



int main()

{



    float area, l1, radio, h, base;



    l1 = 5;

    radio = 8;

    h = 9;

    base = 5;

    /*cuadrado*/

    



    area = l1 * l1;

    printf("El area es del cuadrado es: %f", area);



    /*Triangulo*/

    area = (base * h) / 2;

    printf("\nEl area del triangulo es de: %f", area);



    /*Circulo*/

    area = (radio * radio) * 3.14;

    printf("\nEl area del circulo es de: %f", area);

}