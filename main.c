#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *celsiusString = readline("Enter temperature in celsius: ");
  float celsiusFloat = atof(celsiusString);
  float fahrenheit = (celsiusFloat * (9.0/5.0) + 32);
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n",celsiusFloat,fahrenheit);
  return 0;
}