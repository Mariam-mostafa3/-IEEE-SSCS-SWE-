#include "printf.h"

int _printf(const char*format,...){

va_list args;
va_start(args,format);

int count=0;
int i=0;
while(format[i])
{
if(format[i]=='%' && format[i+1])
{
i++;
if(format[i]=='c'){
count+=_putchar(va_arg(args,int));
}

else if(format[i]=='s'){

char*str=va_arg(args,char*);
while(*str){
count+=_putchar(*str);
str++;
}}
else if (format[i]=='%'){
count+=_putchar('%');

}
else{

count+=_putchar('%');
count+=_putchar(format[i]);
}
}

else{
count+=_putchar(format[i]);
}

i++;

}
va_end(args);
return count;
}
