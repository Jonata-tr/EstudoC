#include <stdio.h>
#include <stdlib.h>

// Fazer um codigo que imprima a tabuada de 1 a 10; 

int main(){
  int mult;

  for(int i = 1; i <= 10; i++){
    printf("\n/////////////\n");
    
    for(int y = 1; y <= 10; y++){
      mult = i * y;
      mult = i * y;

      printf("%d * %d = %d\n", i, y, mult);
    }
  }
}
