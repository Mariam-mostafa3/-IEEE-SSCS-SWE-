#include "_isalpha.h"
#include<stdio.h>
int main(){

char x='G';
char y=5;
if(_isalpha(x)){
printf("it is alphaet is %c  \n ",x);
}else {
printf("it is not  alphaet \n ");
}

if(_isalpha(y)){ 
printf("it is alphaet is %c  \n ",y);
}else { 
printf("the second test is  not  alphaet \n ");
}

return 0;
}
