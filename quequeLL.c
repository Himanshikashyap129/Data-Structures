#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};struct node *front=0;
struct node *rear=0;
void enqueue(int x){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    if(front==NULL && rear==NULL){
        front=rear=newnode;
    }else{
        rear->next=newnode;
        rear=newnode;
    }
}
void display(){
    struct node *temp;
    temp=front;
     if(front==NULL && rear==NULL){
        printf("\nList is empty");
    }else{
       while(temp!=NULL){
        printf("\n%d",temp->data);
        temp=temp->next;
       }
    }

}
void dequeque(){
    struct node *temp;
    temp=front;
     if(front==NULL && rear==NULL){
        printf("\nList is empty");
    }else{
        front=front->next;
        free(temp);
    }
}
void peek(){
      if(front==NULL && rear==NULL){
        printf("\nList is empty");
    }else{
        printf("\n%d",front->data);
    }
}
void main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    display();
    printf("\n______________");
    dequeque();
    display();
    printf("\n______________");
    peek();
    display();
}