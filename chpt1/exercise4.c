#include <stdio.h>

int main() {
  float fahr, celcius;
  int lower,upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  celcius = lower;
  printf("Celcius\tFahrenheit\n");
  while (celcius <= upper) {
    fahr = (9.0/5.0) * celcius+32.0;
    printf("%7.0f %10.1f\n", celcius, fahr);
    celcius = celcius + step;
  }
}
