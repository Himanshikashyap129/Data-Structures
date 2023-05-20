#include<stdio.h>
#define size 6
int stack[size];
int top=-1;
void push(){
    int x;
    printf("Enter the element:");
        scanf("%d",&x);
    if(top==size-1){
      printf("\nStack Overflow");
      return;
    }else{
        top++;
        stack[top]=x;
    }
}
void pop(){
    int item;
    if(top==-1){
        printf("\nUnderflow");
    }else{
        item=stack[top];
        top--;
        printf("%d",item);
    }
}
void peek(){
    if(top==-1){
        printf("\nstack is empty");
        return;
    }else{
        printf("%d",stack[top]);
    }
}
void traverse(){
    int i;
    for(i=top;i>=0;i--){
        printf("\n%d",stack[i]);
    }
}
void main(){
    char ch;
    do{
        printf("\nEnter choice:1 for push\n2 for pop\n3 for peek\n4 for display\n");
        scanf("%d",&ch);
        printf("\nYou have entered=%d\n",ch);
        switch(ch){
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            peek();
            break;
            case 4:
            traverse();
            break;
            default:
            printf("\nInvalid choice");
            break;
        }
    }while(ch!=0);
}