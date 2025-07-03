#include <stdio.h>
#include<stdarg.h>

int sum_them_all(const unsigned int n,...){

va_list args ;
int sum=0;
va_start(args,n);
for(int i=0; i<n; i++){
   sum+=va_arg(args,int);
   
}
va_end(args);
return sum;
}


int main(void){
int sum=sum_them_all(1,5);
printf(" Sum =%d\n",sum);

 sum=sum_them_all(5,1,2,3,4,5);
printf(" Sum =%d\n",sum);

sum=sum_them_all(0);
printf(" Sum =%d\n",sum);

return 0;
}
