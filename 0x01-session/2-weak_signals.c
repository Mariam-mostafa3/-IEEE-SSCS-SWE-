#include<stdio.h>
int is_strong_signal(int strength);
void check_signal(int strength);


int is_strong_signal(int strength){
 if(strength>50){
 return 1;

}else {
return 0;
}
 }

void check_signal(int strength){
if(strength){
  printf("Strong Signal detected \n");
}else{

printf("No signal detected \n");
}
}

int main(){
  int n[]={20,50,60,30,80};
  int s_s;

 for(int i=0; i<5; i++){

    s_s=is_strong_signal(n[i]);
    check_signal(s_s);

  }

return 0;
}
