#include<stdio.h>

int main(){

printf("enter an int from 1 to 9 ");
int  num;
scanf("%d",&num);

if(num>=1 && num <=9){
printf("the equivelent character is %c ",num+'0');

}else{
printf("invalid please try again");
}

return 0;

}
