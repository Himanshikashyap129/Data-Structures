#include<stdio.h>
#include<stdlib.h>
struct Node{
    int info;
    struct Node *next;
    struct Node *previous;
};struct Node *head=0,*tail;

void create(){
    struct Node *temp=0;
    struct Node *newnode;
    int choice=1;
    while(choice){ 
     newnode=(struct Node*)malloc(sizeof(struct Node));
     printf("\nenter data:");
    scanf("\n%d",&newnode->info);
    newnode->previous=NULL;
    newnode->next=NULL;
    if(head==NULL){
        head=tail=newnode;
    }else{
        tail->next=newnode;
        newnode->previous=tail;
        tail=newnode;
    }
   printf("\nEnter 0 or 1:");
   scanf("\n%d",&choice);
    }
}
void insert_beg(){
    struct Node *newnode;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("\nEnter data:");
    scanf("%d",&newnode->info);
    newnode->previous=NULL;
    newnode->next=NULL;
    head->previous=newnode;
    newnode->next=head;
    head=newnode;

} 
void insert_end(int info){
    struct Node *temp;
    struct Node *newnode;
    newnode=(struct Node *)malloc(sizeof(struct Node));
    temp=head;
    newnode->info=info;
    newnode->previous=NULL;
    newnode->next=NULL;
    tail->next=newnode;
    newnode->previous=tail;
    tail=newnode;
   
     
}
void insert_position(int position, int info){
     struct Node *newnode, *temp;
     int i=1;
     newnode=(struct Node*)malloc(sizeof(struct Node));
     newnode->info=info;
     if(position==1){
        insert_beg();
     }else{temp=head;
        while(i<position-1){
            temp=temp->next;
            i++;
        }
        newnode->previous=temp;
        newnode->next=temp->next;
        newnode->next=temp->next;
        temp->next=newnode;
        newnode->next->previous=newnode;
     }
}
void del_begin(){
    struct Node *temp;
    if(head==NULL){
        printf("\nList is empty");
    }
        else{
            temp=head;
            head=head->next;
            head->previous=NULL;
            temp->next=NULL;
            free(temp);
        }
    
}
void del_end(){
    struct Node *temp;
    if(head==NULL){
        printf("\nList is empty");
    }else{
       temp=tail;
       tail->previous->next=NULL;
       tail=tail->previous;
       free(temp);
    }
}
void del_position(int pos){
    int i=1;
    struct Node *temp;
    temp=head;
    while(i<pos){
        temp=temp->next;
        i++;
    }
    temp->previous->next=temp->next;
    temp->next->previous=temp->previous;
    free(temp);
}
void display(){
    struct Node *temp;
     temp=head;
   while(temp!=NULL){
    printf("\n%d\n",temp->info);
    temp=temp->next;
}
}
void main(){
  create();
  display();
  printf("\n____________");
   del_begin();
  display();
  printf("\n___________");
  del_end();
  display();
  printf("\n___________");
  del_position(2);
  display();

}

