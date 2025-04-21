#include "_putchar.h"

int main(){

int i,j;
for(i=0;i<=8;i++){

for(j=i+1; j<=9;j++){

_putchar(i+48);
_putchar(j+48);


if((i!=8 || j!=9)){
_putchar(',');
_putchar(' ');

}
}

}




_putchar('\n');
return 0;

}
