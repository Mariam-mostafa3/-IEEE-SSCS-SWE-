#include<stdio.h>
int global_counter=0;
void acess_one(){
static int  counter_one=0;
counter_one++;
global_counter++;
printf("calling access_one times are %d\n ",counter_one);
}


int acess_two(){

static int  counter_two=0;
counter_two++;
global_counter++;
printf("calling access_two times are %d\n ",counter_two);


}
 
int main(){

acess_one(); //1
for(int i=1;i<=10;i++){  //10
acess_two();
}
acess_one();//2

printf("total acesses %d\n",global_counter);
return 0;
}
