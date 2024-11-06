#include <stdio.h>
// C�digo del alumno Fabrizio Elian Morel
// link de git personal: https://github.com/Fabzsz/Escuela
// link del git grupal (lider Gabriel Alan Quiroz): https://github.com/matecebado357/Trabajo-de-Laboratorio-de-Programacion

double cm_a_pulgadas(double cm)
{
    return cm / 2.54;
}

double pulgadas_a_cm(double pulgadas)
{
    return pulgadas * 2.54;
}

int main()
{
    double centimetros = 80;
    double pulgadas = 31.4961;

    double resultado1 = cm_a_pulgadas(centimetros);
    double resultado2 = pulgadas_a_cm(pulgadas);

    printf("La conversión de %.2f centímetros a pulgadas es: %.4f\n", centimetros, resultado1);
    printf("La conversión de %.4f pulgadas a centímetros es: %.2f\n", pulgadas, resultado2);

    return 0;
}
