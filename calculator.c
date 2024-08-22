#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  if(argc != 4){
    printf("Usage: ./calculator <option> <operand> <operand>\n");
    return 1;
  }
  int opt;
  float numbers[2] = {atof(argv[2]), atof(argv[3])};
  while((opt = getopt(argc, argv, "a:s:m:d:")) != -1){
    switch(opt){
      case 'a':
        printf("Result: %.2f + %.2f = %.2f\n", numbers[0], numbers[1], numbers[0] + numbers[1]);
	break;
      case 's':
        printf("Result: %.2f - %.2f = %.2f\n", numbers[0], numbers[1], numbers[0] - numbers[1]);
	break;
      case 'm':
        printf("Result: %.2f * %.2f = %.2f\n", numbers[0], numbers[1], numbers[0] * numbers[1]);
	break;
      case 'd':
        printf("Result: %.2f / %.2f = %.2f\n", numbers[0], numbers[1], numbers[0] / numbers[1]);
	break;
      case '?':
	 break;
    }
  }

  return 0;
}
