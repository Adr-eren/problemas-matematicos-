#include <stdio.h>

int main() {
    /* Adriana García Hernández 
    Equipo AMUKE
    1 mayo 21 
    Programa 6
    */

    float valorx, valory, valorz, perimetro;
    printf ("\n\n Programa 6");
    printf ("\n\n Saca el perimetro de un triangulo");
    printf ("\n\n dame el valor1");
    scanf ("%f",&valorx); // Permite capturar un valor real y lo guarda en variable primer
    printf ("\n\n Dame el valor2");
    scanf ("%f",&valory); // Permite capturar un valor real y lo guarda en variable primer
    printf ("\n\n Dame el valor3");
    scanf ("%f",&valorz);
    perimetro = (valorx+valory+valorz); // Formula matematica para calcular la suma de dos numeros
    printf ("\n la suma de los dos valores es %f", perimetro);

    return  0;
}    