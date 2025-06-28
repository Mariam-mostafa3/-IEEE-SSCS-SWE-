#include<stdio.h>
#include<string.h>


int main(int argc, char *argv[]){

int msg_rev=0;

if(argc==1){

printf("Silence.Nothing came Through\n");

}


for (int i=1;i<argc;i++){

printf("%s\n",argv[i]);

if(strcmp(argv[i],"revelation")==0){

msg_rev=1;
}

}
if(msg_rev==1){

printf("A truth revealed : you are not alone.\n");

}



return 0;

}
