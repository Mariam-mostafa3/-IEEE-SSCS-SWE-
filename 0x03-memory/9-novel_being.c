#include<stdio.h>

struct Being{
char* name;
int age;
float energy_level;
};

void print_being(struct Being*b){
if(b==NULL){
printf("b is Null");
}
printf("Name:{%s},Age:{%d},Energy:{%.4f}\n",b->name,b->age,b->energy_level);

}


int main(){

struct Being  values;
values.name="Mariam";
values.age=22;
values.energy_level=99.9f;

print_being(&values);
return 0;
}
