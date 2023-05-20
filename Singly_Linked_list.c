#include<stdio.h>
#include<stdlib.h>

//-------------INSERTION OPERATION-------------------
//structure
struct Node{
    int info;
    struct Node *next;
}; struct Node *head=NULL;
//display linked list
void traversal(struct Node *ptr){
    while(ptr!=NULL){
   printf("\n%d\n",ptr->info);
   ptr=ptr->next;
   }
   
}
//insert at the beginning
void insertatfirst(int info){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->info=info;
    ptr->next=head;
    head=ptr;
}
//insert at the end
void insertatend(int info){
    struct Node *temp;
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->info=info;
    ptr->next=NULL;
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=ptr;
}
void insertatposition(struct Node **head, int info, int position){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node *temp;
    ptr->info=info;
    ptr->next=NULL;
    if(position==1){
        ptr->next=*head;
        *head=ptr;
        return;
    }else{
        struct Node *current=*head;
        for(int i=1;i<position-1 && current!=NULL; i++){
            current=current->next;
        }
    
   if(current==NULL){
    printf("\nInvalid position");
    return;
   }
    
   temp=current->next;
   current->next=ptr;
   ptr->next=temp;
  
   } return head;
    
}

//---------------DELETION OPERATION--------------

//------DELETION AT THE BEGINNING------
int del_begin(){
    if(head==NULL){
        printf("\nlist is empty");
        return NULL;
    }
    struct Node *temp=head;
    head=head->next;
    free(temp);
    return head;
}
void del_end(){
    struct Node *pre_node;
    struct Node *temp;
    if(head==NULL){
        printf("\nlist is empty");
    }else{
        temp=head;
         while(temp->next!=NULL){
        pre_node=temp;
        temp=temp->next;
        }
         pre_node->next=NULL;
         free(temp);
    }
    
}
void del_pos(int position){
    struct Node *temp;
    struct Node *newnode;
    int l,i=1;
    temp=head;
    l=get_length(head);
    if(position>l){
        printf("\ninvalid position");
    }
    while(i<position-1){
        temp=temp->next;
        i++;
    }
    newnode=temp->next;
    temp->next=newnode->next;
    free(newnode);
}
//count length of the linked list------
int get_length(struct Node *head){
    struct Node *temp;
    int count=0;
    temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    printf("\n%d\n",count);
    return 0;
}


void create(){
    struct Node *temp=0;
    struct Node *newnode;
    int choice=1;
    while(choice){ 
     newnode=(struct Node*)malloc(sizeof(struct Node));
     printf("\nenter data:");
    scanf("\n%d",&newnode->info);
    newnode->next=NULL;
    if(head==NULL){
        head=temp=newnode;
    }else{
        temp->next=newnode;
        temp=newnode;
    }
   printf("\nEnter 0 or 1:");
   scanf("\n%d",&choice);
    }
}
void main(){
    create();
    traversal(head);
    printf("______________");
    insertatfirst(6);
    traversal(head);
    printf("______________");
    insertatend(9);
    traversal(head);
    printf("______________");
    insertatposition(&head,12,3);
    traversal(head);
    printf("______________");
    del_begin();
    traversal(head);
    printf("______________");
    del_end();
    traversal(head);
    printf("______________");
    del_pos(2);
    traversal(head);
    
}
