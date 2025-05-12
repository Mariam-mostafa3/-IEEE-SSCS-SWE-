#include<stdio.h>
#include<stdlib.h>
int global_variable=10;

int main(){

   int local_variable=30;

   int*dynamic_variable=(int*)malloc(sizeof(int));
  *dynamic_variable=100;

    char*string_literal="Hello";

printf("(%p:Static data segment)-> %d\n ",(void*)&global_variable,global_variable);
printf("(%p:Stack Segment)-> %d\n ",(void*)&local_variable, local_variable);
printf("(%p:Heap Segment)-> %d\n ",(void*)dynamic_variable,*dynamic_variable);
printf("(%p:Read only data segment)-> %s\n ",(void*)string_literal,string_literal);
return 0;
}
