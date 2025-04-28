#include<stdio.h>

int main(){

int variable_signal=98;
int*ptr=&variable_signal;
printf("the address is %p \n",ptr);     //the address
printf("the value ia %d \n",variable_signal);
return 0;
}
