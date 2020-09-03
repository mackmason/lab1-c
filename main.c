// Author: Mack Mason mjm8542@psu.edi
// Collaborator: Brady Bender bmb6369@psu.edu
// Collaborator: Addy Burchfield abb6060@psu.edu
// Collaborator: Jacob Hallowell jph5997@psu.edu


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