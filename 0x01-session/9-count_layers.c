#include<stdio.h>
int sum_layers(int n);


int sum_layers(int n){
if(n<=0){
return 0;
}

return n+ sum_layers(n-1);
}
 
int main(){
int number =10;
int sum=sum_layers(number);
printf("sum=%d\n",sum);
return 0;
}
