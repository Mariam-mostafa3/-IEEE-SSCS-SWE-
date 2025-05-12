#include<stdio.h>
int manual_sizeof();

int manual_sizeof(){
int arr[2];
int *a=&arr[0];
int *b=&arr[1];


return (char*)b-(char*)a;
}

int main(){


printf("size is %d\n",manual_sizeof());
return 0;

}
