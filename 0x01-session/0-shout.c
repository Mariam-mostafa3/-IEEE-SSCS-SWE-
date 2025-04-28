#include <stdio.h>
void repeat_message(int n);

void repeat_message(int n){
int i;

for(i=1; i<=n; i++){

printf("%d:Hello,World. \n",i);
}
}


int main(){
int n;
scanf("%d",&n);
 repeat_message( n);
return 0;
}
