#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *celsiusString = readline("Enter temperature in celsius: ");
  double celsiusDouble = atof(celsiusString);
  double  fahrenheit = (celsiusDouble * (9.0/5.0) + 32);
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n",celsiusDouble,fahrenheit);
  return 0;
}