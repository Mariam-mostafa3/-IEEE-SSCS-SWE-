#include "_putchar.h"

int main(){
char alpha;
for (alpha='a';alpha<='z';alpha++){
 
      if(alpha=='q'){
continue;
}
   _putchar(alpha);
}
for(alpha='Z';alpha>='A';alpha--){
if(alpha=='Q'){
continue;
}
_putchar(alpha);
}

_putchar('\n');
return 0;

}
