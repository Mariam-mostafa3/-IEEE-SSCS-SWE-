#include<stdio.h>
int sumDigits(long long int);

int sumDigits(long long int n){
if(n<=0){
return 0;
}
return n%10+ sumDigits(n/10);

}

int main(){
int number=125;
printf("the number is %d\n",number);
int sum=sumDigits(number);
printf("the sum is %d\n", sum);

return 0;
}
