#include<stdio.h>
#include<stdarg.h>

void advanced_pretty_printer(const char flag,const char *seperator, const unsigned int n,...){

va_list args;
va_start(args,n);

for(int i=0; i<n; i++){
if(flag=='i'){
printf("%d",va_arg(args,int));

}

else if(flag=='s'){

printf("%s",va_arg(args,char*));
}

else{
printf("NULL");
}
if(i!=n-1){

printf("%s",seperator);
}

}
va_end(args);
printf("\n");

}


int main(void)
{

advanced_pretty_printer('i',"|",5,1,2,3,4,5);
advanced_pretty_printer('s',"-",3,"Hello","I'm","Mariam");



}
