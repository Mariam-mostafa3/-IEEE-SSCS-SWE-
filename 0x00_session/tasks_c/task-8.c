#include <stdio.h>


int main(){

int n,i;
for(n=0;n<=9;n++){
  for(i=0;i<=9;i++){
   printf("%d",n*i);
   if(i<9){
   printf(", ");
}else {
printf("\n");

}
}

}

return 0;
}
