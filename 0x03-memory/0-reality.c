#include<stdio.h>
void status(int n);


void status(int n){

if(n>0){
   printf("Postive\n");
}else if(n<0){
    printf("Negative\n");
   
}else{
     printf("Zero\n");

}
}

int main(){

void (*status_pointer)(int);
status_pointer=status;

status_pointer(10);
status_pointer(-30);
status_pointer(0);

  return 0;
}
