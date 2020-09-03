#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
  char *celsiusString = readline("Enter temperature in celsius: ");
  float celsiusFloat = atof(celsiusString);
  float fahrenheit = (celsiusFloat * 1.8 + 32);
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n",celsiusFloat,fahrenheit);
  return 0;
}