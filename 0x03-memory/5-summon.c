#include<stdio.h>
#include<stdlib.h>

int*summon_allies(int*allies,int n){

allies=malloc(n*sizeof(int));
if(allies==NULL){

printf("Allocation Failed\n");
return 0;
}

for(int i=1; i<=n;i++){
printf("enter element %d\n",i);
scanf("%d",&allies[i-1]);
}

return allies;
}

int main(){

int n;
printf("enter no of elements:");
scanf("%d",&n);

int*allies=NULL;
allies=summon_allies(allies, n);

if(allies!=NULL){
for(int i=0;i<n;i++){
  printf("you have entered element[%d]:%d\n",i+1,allies[i]);

}free(allies);
}

return 0;
}
