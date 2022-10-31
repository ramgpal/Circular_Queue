//C program to implement Circular queue
#include <stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
//insertion in queue
void enqueue(int x) 
{
 if (front==-1 && rear ==-1) {
     front =rear=0;
     queue[rear]=x;
 }
 else if((rear+1)%N==front) {
     printf("Queue is full \n");
 }
 else
 {
 rear=(rear+1)%N;
 queue[rear]=x;
}
}
//Delation in queue
void dequeue() 
{
if(front==-1 && rear==-1) {
    printf("Queue is empty\n");
}
else if(front==rear) 
{
    front=rear=-1;
}
else
printf("%d \n",queue[front]);
front=(front+1)%N;
}
void display() 
{
    int i;
 if(front==-1 && rear==-1) {
    printf("Queue is empty\n");
}
else
while(i!=rear) 
{
    printf("%d\n",queue[i]);
    i=(i+1)%N;
    

}
}
int main()
{
    int choice,data;
    do 
    {
        printf("1.enqueue\n");
        printf("2.dequeue\n");
        printf("3.display\n");
        printf("4.quit\n");
        printf("Enter your choice\n");
        scanf("%d\n",&choice);
        switch(choice) 
        {
            case 1:
            printf("Input data you want to insert in queue \n");
            scanf("%d\n",&data);
            enqueue(data);
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            break;
            default:
            printf("Invalid entry\n");
            
            
        }
    }
    while(choice!=4);
    return 0;
}