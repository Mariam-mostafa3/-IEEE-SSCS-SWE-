#include<stdio.h>
int is_response_detected(int strength);

int is_response_detected(int strength){

if(strength>50){
 return 1;
}
else{

return 0;
}
return 0;
}

int main(){
int n[]={40,60,20,90};
for(int i=0; i<4; i++){
if(is_response_detected(n[i])){
     printf("%d Is Detected \n",n[i]);
}else{
printf("%d Not Detected \n",n[i]);
}
}

return 0;
}
