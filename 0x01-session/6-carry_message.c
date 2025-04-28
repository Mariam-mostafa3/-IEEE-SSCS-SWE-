#include<stdio.h>
void print_message(char*msg);

void print_message(char*msg){
printf("%s\n",msg);

}

int main(){

char message[]="Hi,I'm Mariam Mostafa";
print_message(message);
return 0;
}
