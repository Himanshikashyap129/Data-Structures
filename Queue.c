// # include <stdio.h>
// # include <stdlib.h>
// # define maxlen 10
// int q[maxlen];
// int front=0,rear=-1,item;
// void insert_item(int q[])
// {
//     printf("\n enter the element: ");
//     scanf("%d",&item);
//     if(rear==maxlen-1)
//     {
//         printf("\n overflow");
//     }
//     else
//     {
//         rear++;
//         q[rear]=item;
//     }
// }
//     int delete_item(int q[])
//     {
//         if(front>rear)
//         {
//            printf("\n underflow");


//         }
//         else{
//               item=q[front];
           
//               front++;
            
//             return(item);
// }
// }
// void display() {
//     int i;
//     if (front==-1 && rear==-1) {
//         printf("Queue is empty.\n");
//         return;
//     }
//     printf("Queue elements: ");
//     for (i = front; i != rear; i = (i+1)%maxlen) {
//         printf("%d ", q[i]);
//     }
//     printf("%d\n", q[i]);
// }

// int main(){

//          while(1)
//          {
//                int ch;
//               printf("\n enter 1->delete 2->insertion 3->display 4->exit");
//               scanf("%d",&ch);
//               switch(ch)
//               {
//                 case 1:
//                 printf("%d is the deleted element",delete_item(q));
//                 break;
//                 case 2:
//                 insert_item(q);
//                 break;
//                 case 3:
//                 display();
//                 break;
//                 case 4:
//                 exit(1);
//                 default:
//                 printf("\n enter valid number");

//             }}
//             return 0;
//             }

//DEQUEUE
#include <stdio.h>    
#define size 5  
int deque[size];    
int front = -1, rare = -1;    
//  Inserting value from front  
void insertatfront(int x)    
{    
    if((front==0 && rare==size-1) || (front==rare+1))    
    {    
        printf("Overflow");    
    }    
    else if((front==-1) && (rare==-1))    
    {    
        front=rare=0;    
        deque[front]=x;    
    }    
    else if(front==0)    
    {    
        front=size-1;    
        deque[front]=x;    
    }    
    else    
    {    
        front=front-1;    
        deque[front]=x;    
    }    
}    
    
// Inserting value from the rear    
void insertatrear(int x)    
{    
    if((front==0 && rare==size-1) || (front==rare+1))    
    {    
        printf("Overflow");    
    }    
    else if((front==-1) && (rare==-1))    
    {    
        rare=0;    
        deque[rare]=x;    
    }    
    else if(rare==size-1)    
    {    
        rare=0;    
        deque[rare]=x;    
    }    
    else    
    {    
        rare++;    
        deque[rare]=x;    
    }    
    
}    
    
// display function prints all the value of deque.    
void display()    
{    
    int i=front;    
    printf("\nElements in a deque are: ");    
        
    while(i!=rare)    
    {    
        printf("%d ",deque[i]);    
        i=(i+1)%size;    
    }    
     printf("%d",deque[rare]);    
}    
    
// getfront function retrieves the first value of the deque.    
void getfront()    
{    
    if((front==-1) && (rare==-1))    
    {    
        printf("Deque is empty");    
    }    
    else    
    {    
        printf("\nThe value of the element at front is: %d", deque[front]);    
    }    
        
}    
    
// getrear function retrieves the last value of the deque.    
void getrear()    
{    
    if((front==-1) && (rare==-1))    
    {    
        printf("Deque is empty");    
    }    
    else    
    {    
        printf("\nThe value of the element at rear is %d", deque[rare]);    
    }    
}    
    
// delete_front() function deletes the element from the front    
void delete_front()    
{    
    if((front==-1) && (rare==-1))    
    {    
        printf("Deque is empty");    
    }    
    else if(front==rare)    
    {    
        printf("\nThe deleted element is %d", deque[front]);    
        front=-1;    
        rare=-1;    
    }    
     else if(front==(size-1))    
     {    
         printf("\nThe deleted element is %d", deque[front]);    
         front=0;    
     }    
     else    
     {    
          printf("\nThe deleted element is %d", deque[front]);    
          front=front+1;    
     }    
}    
// delete_rear() function deletes the element from the rear    
void delete_rear()    
{    
    if((front==-1) && (rare==-1))    
    {    
        printf("Deque is empty");    
    }    
    else if(front==rare)    
    {    
        printf("\nThe deleted element is %d", deque[rare]);    
        front=-1;    
        rare=-1;    
    }    
     else if(rare==0)    
     {    
         printf("\nThe deleted element is %d", deque[rare]);    
         rare=size-1;    
     }    
     else    
     {    
          printf("\nThe deleted element is %d", deque[rare]);    
          rare=rare-1;    
     }    
}    
int main()    
{    
    insertatfront(30);    
    insertatfront(60);    
    insertatrear(30);    
    insertatrear(90);    
    insertatrear(120);    
    display();  // Calling the display function to retrieve the values of deque    
    getfront();  // Retrieve the value at front-end  
    getrear();  // Retrieve the value at rear-end   
    delete_front();    
    delete_rear();    
    display(); // calling display function to retrieve values after deletion   
    return 0;    
}
