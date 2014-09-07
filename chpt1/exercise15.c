#include <stdio.h>

int calcCelcius(int fahr) {
  return (5.0/9.0) * (fahr-32.0);
}

int main() {
  float fahr, celcius;
  int lower,upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("Fahrenheit\tCelcius\n");
  while (fahr <= upper) {
    celcius = calcCelcius(fahr);
    printf("%10.0f %12.1f\n", fahr, celcius);
    fahr = fahr + step;
  }
}
