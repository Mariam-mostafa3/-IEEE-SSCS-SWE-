#include<stdio.h>

int main(){

char alpha;
printf("enter the char please ");
scanf("%c",&alpha);

if(alpha>='a'&& alpha<='z'){
  printf("Lower");

} else if(alpha>='A' && alpha<='Z'){

   printf("Upper");
}else{
printf("invalid value");
}
return 0;
}

