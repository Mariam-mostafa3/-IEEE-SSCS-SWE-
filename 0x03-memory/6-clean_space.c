#include<stdio.h>
#include<stdlib.h>

void*clear_allocation(size_t count ,size_t size){

int total_size=count*size;
 int *ptr=(int*)malloc(total_size);
    if(ptr==NULL){
printf("Allocation failed\n");
    }
char*byte_ptr=(char*)ptr;
for(int i=0;i<total_size;i++){
  byte_ptr[i]=0;
}
return ptr;
}

int main(){

int n=5;

int *array=(int*)clear_allocation(n,sizeof(int));

printf("setting all bytes to zero value\n");
for(int i=0;i<n;i++){
printf("array[%d] =%d\n",i,array[i]);

}
free(array);



return 0;

}
