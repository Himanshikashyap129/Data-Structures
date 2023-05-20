#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *link;
};struct node *top=0;
void push(int x){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->info=x;
    newnode->link=top;
    top=newnode;
}
void display(){
    struct node *temp;
    temp=top;
    if(top==0){
        printf("\nList is Empty");
    }else{
        while(temp!=NULL){
            printf("\n%d",temp->info);
            temp=temp->link;
        }
    }
}
void peek(){
    if(top==NULL){
        printf("\nList is Empty");
    }else{
        printf("\n%d",top->info);
    }
}
void pop(){
    struct node *temp;
    temp=top;
    if(top==NULL){
        printf("\nList is Empty");
    }else{
        top=top->link;
        free(temp);
    }
}
void main(){
    push(1);
    push(2);
    push(3);
    display();
    printf("\n_________");
    peek();
    printf("\n_________");
    pop();
    display();

}