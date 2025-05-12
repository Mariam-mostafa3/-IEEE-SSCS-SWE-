#include<stdio.h>
#include<stdlib.h>
struct Node{

int value;
struct Node*next;
};


struct Node* create_new_node(int value){

struct Node*new_node=malloc(sizeof(struct Node));
new_node->value=value;
new_node->next=NULL;
return new_node;

}

void add_node_at_end(struct Node**head ,int value){
struct Node*new_node=create_new_node(value);
if(!new_node)
return ;

if(*head==NULL){
*head=new_node;
return;
}


struct Node*current=*head;
while(current->next!=NULL){

current=current->next;
}
current->next=new_node;

}

void print_list(struct Node*head){
struct Node*current=head;
while(current!=NULL){
printf("%d->",current->value);
current=current->next;

}
printf("NULL\n"); 
}

int main(){
struct Node*head=NULL;
 add_node_at_end(&head,10);
 add_node_at_end(&head,20);
 add_node_at_end(&head,30);

print_list(head);
struct Node*temp;
while(head!=NULL){
temp=head;
head=head->next;
free(temp);
}
return 0;
}









