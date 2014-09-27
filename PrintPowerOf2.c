#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
int i; 
int value = 1; 
int limit = 20; 
printf("n        2^n\n");
printf("=====================================\n");
  for(i=1; i<limit; i++){
    value = value*2; 
printf("%3d        %10d\n",i,value);

  }

return 0; 
}
