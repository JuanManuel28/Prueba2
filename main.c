//Programa para sumar 2 puntos geometricos
#include <stdio.h>

typedef struct
{
  float X, Y;
} Coordenada
  
int main ()
{
  Coordenada P1, P2;
  printf ("Introduzca X,Y para P1:");
  scanf ("%f, %f", &P1.X, &P1.Y);
  //Pregunta al usuario coordenadas del punto 2
  printf ("Introduzca X,Y para P2:");
  scanf ("%f, %f", &P2.X, &P2.Y);
  

return 0;
}
