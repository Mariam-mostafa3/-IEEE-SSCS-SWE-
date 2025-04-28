#include<stdio.h>
int signal_strength=0;
void boost_signal(int n);

void boost_signal(int n){
int signal_strength=100;
printf("booster:signal strength=%d \n",n);
}

int main(){

printf("the global value before calling the function is %d \n ",signal_strength);
boost_signal(100);
printf("the global value after calling the function is %d \n ",signal_strength);


return 0;

}

