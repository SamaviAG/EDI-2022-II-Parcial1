#include <stdio.h>{

int Dias, Horas, Minutos, Segundos = 0;

  printf("Cantidad en segundos: \n");
  scanf("%d", & Segundos);
  Dias = Segundos / 86400;
  Segundos = Segundos % 86400;
  Horas = Segundos / 3600;
  Segundos = Segundos % 3600;
  Minutos = Segundos / 60;
  Segundos = Segundos % 60;
  printf(" %d dias \n" , Dias);
  printf("%d horas \n", Horas);
  printf("%2d minutos \n", Minutos);
  printf("%2d segundos \n", Segundos);
  return 0;
}