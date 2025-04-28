#include<stdio.h>
void echo(int n);


void echo(int n){
if(n<=0){

return ;
}

printf("%d:Echo...\n",n);
echo(n-1);


}

int  main(){

int n=10;
echo(n);
return 0;
}
