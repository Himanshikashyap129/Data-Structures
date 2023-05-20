#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
struct node{
    int data;
    struct node *next;
}*head;
create(){
    struct node *newnode, *temp;
    head=NULL;
    int choice;
    while(choice){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data:");
    scanf("\n%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        head=temp=newnode;
    }else{
        temp->next=newnode;
        temp=newnode;
    }temp->next=head;
    printf("\n1 for continue and 0 for exit");
    scanf("\n%d",&choice);
}

}

void insert_begin(int data){
    struct node *newnode;
    struct node *temp;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(temp==NULL){
        temp=newnode;
        temp->next=newnode;
    }else{
        newnode->next=temp->next;
        temp->next=newnode;
    }
    printf("\n%d",temp->next->data);
    
}
void insert_end(int data){
    struct node *newnode,*tail;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(head==0){
        head=tail=newnode;
    }else{
        newnode->next=tail->next;
        tail->next=newnode;
        tail=newnode;
    }
    printf("\n%d",tail->next->data);

}
void insert_at_position(int data, int pos){
    struct node *newnode, *temp;
    int i=1, l;
    l=getlength(head);
    newnode=(struct node *)malloc(sizeof(struct node));
    if(pos<0 || pos>l){
        printf("\nInvalid position");
        }else{
            newnode->data=data;
            newnode->next=NULL;
            temp=temp->next;
            while(i=pos-1){
            temp=temp->next;
            i++;
        }newnode->next=temp->next;
        temp->next=newnode;
    }
}

void display(){
    struct node *temp;
    if(head==NULL){
        printf("\nList is empty");
    }else{
        temp=head;
   while(temp->next!=head){
    printf("\n%d",temp->data);
    temp=temp->next;
   }
   printf("\n%d",temp->data);
    }
}
void main(){
  create();
  display();
  insert_begin(6);
  insert_at_position(12,3);
//   insert_end(9);
}