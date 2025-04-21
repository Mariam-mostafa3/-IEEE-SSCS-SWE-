#include <stdlib.h>
#include <time.h>
#include<stdio.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        if(n%2==0){
              printf("the number %d  is even\n",n);
}else{

     printf("the number %d is odd\n",n);
} 
  int last_digit=n%10;
if(last_digit>5){
   printf("the last digit is greater than 5 is %d",last_digit);
} 
else if(last_digit==5){
   printf("the last digit is equal to 5");
}else {
   printf("the last digit is less than 5 is %d",last_digit);
}
	return (0);
}
