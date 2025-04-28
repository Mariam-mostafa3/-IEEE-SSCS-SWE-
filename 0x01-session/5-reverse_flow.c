#include<stdio.h>
void swap(int*a,int*b);


void swap(int*a,int*b){
int temp=*a;
*a=*b;
*b=temp;
}

int main(){

int var1=10;
int var2=5;
printf("before swap %d , %d\n",var1,var2);
swap(&var1,&var2);
printf("after swap %d , %d\n",var1,var2);


return 0;
}
