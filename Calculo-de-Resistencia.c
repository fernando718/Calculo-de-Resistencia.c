#include <stdio.h>
int main()
{
  float voltaje, corriente, division;
  printf("\n\n         BUENAS DIAS. ");
  printf("\n\n Calculadora de resistencia");
  printf("\n\n por favor, ingrese los valores que se le pide");
  printf("\n\n ¿Cuál es el valor del voltaje en volts en su circuito?");
  scanf("%f",&voltaje);
  printf("\n\n ¿Cuál es el valor de la corriente en Amperes en su circuito? ");
  scanf("%f",&corriente);
  division = voltaje/corriente;
  printf("\n La resistencia obtenida en ohms es %f" ,division);
  printf("\n objetivo completado, buen día");
  return 0;

}
