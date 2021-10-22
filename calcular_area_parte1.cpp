#include <stdio.h>
#include <math.h>


int main()

{



    float areaCuadro,areaTriangulo,areaCirculo, lado, radio, h, base;



    lado = 30;

    radio = 10;

    h = 15;

    base = 12;

    /*1. Cuadro*/

    



    areaCuadro = lado * lado;

    printf("\nLa raíz cuadrada del area  del cuadrado es: %f", sqrt(areaCuadro));



    /*2. Triangulo*/

    areaTriangulo = (base * h) / 2;

    printf("\nLa raíz cuadrada del area del triangulo es: %f", sqrt(areaTriangulo));



    
}
