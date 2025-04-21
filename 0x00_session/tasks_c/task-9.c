#include <stdio.h>

int main(){
int n,i,j;
scanf("%d",&n);
 if(n>15 || n<0){
}else{
   for(i=0;i<=n;i++){
      for(j=0;j<=n;j++){

      printf("%d",i*j);
    if(j<n){
     printf(", ");
}else{
    printf("\n");
}

}
  

}



}
return 0;
}
