#include<stdio.h>
#include<stdarg.h>

void pretty_printer(const char*seperator ,const unsigned int n,...){

va_list args;
va_start(args,n);


for(int i=0; i<n; i++){

printf("%d",va_arg(args,int));
if(i!=n-1){
    printf("%s",seperator);
}

}

va_end(args);
printf("\n");


}

int main(void){
pretty_printer(" | ",3,1,2,4);

pretty_printer(", ",5,1,2,3,4,5);
pretty_printer(" + ",2,5,10);
}
