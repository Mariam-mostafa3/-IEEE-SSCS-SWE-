#include<stdio.h>


typedef enum {
type_int,
type_float,
type_char,
type_double

} DataType;

void echo (void*data , DataType type){
switch(type){
// print int data

case(type_int):
printf("int data value is %d\n ",*(int*)data);
break;
//print float data
case(type_float):
printf("Float data value is %f\n ",*(float*)data);
break;
 case(type_char):
//print char data
printf("Char data value is %c\n ",*(char*)data);
break;
//print double data
case(type_double):
printf("Double data type value is %lf\n",*(double*)data);

}
}
int main(){

int x=5;
float y=3.14;
char z='Z';
double d=5.77787777;
echo(&x,type_int);
echo(&y,type_float);
echo(&z,type_char);
echo(&d,type_double);
return 0;
}
