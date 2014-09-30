#include <stdio.h>
#include <stdlib.h>

int FindChar(char *, char); 

int main(){

char *str ="bakery"; 
char y = 'c'; 

printf("Enter your string\n");
scanf("%s", str);

printf("Return value = %d",(FindChar(str, y))); 


return 0;
}

int FindChar(char *charPtr, char x){

while(charPtr)
if(*charPtr == x)
	return 1;
else
	charPtr++;

return 0;  
}

