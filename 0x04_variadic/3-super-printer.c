#include<stdio.h>
#include<stdarg.h>

void super_printer(const char *flag,...){

va_list args;
va_start(args,flag);

if(flag=="i"){
printf("%d",va_arg(args,int));

}else if(flag=="f"){

printf("%f",va_arg(args,double));

}else if(flag=="c"){
printf("%c",va_arg(args,int));
}
else if (flag=="s"){
printf("%s",va_arg(args,char*));
}
else{
printf("null");}

va_end(args);
printf("\n");

}

int main(void){

super_printer("i",33);
super_printer("c",'M');
super_printer("s","Hello");
super_printer("f",33.54);
}
