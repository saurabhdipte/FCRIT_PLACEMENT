/*NAME-SAURABH DIPTE
ROLL NO.-1020132
DATE-12/10/21
TITLE-Implementation of linear/simple queue data structure using array.*/


#include<stdio.h>
#include<conio.h>
#define MAX 3

int queue [MAX];
int front = -1, rear =-1 ;
void insert(void);
int delete_element(void);
void display(void);

int main()
  { 	
   int option, val,s;
   do{
	printf("\n\n MAIN MENU");
	printf("\n 1.INSERT AN ELEMENT");
	printf("\n 2.DELETE AN ELEMENT");	
	printf("\n 3.DISPLAY THE QUEUE:");
	printf("\n 4.EXIT:");
	printf("\n Enter your option:");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			insert();
			break;
			
		case 2:
			val=delete_element();
			if(val!=-1)
			printf("\n The no. deleted is %d",val);
			break;
			
	
			
		case 3:
			display();
			break;
			}
		
    }
    while(option!= 4);
		getch();
		return 0;
}
		
    void insert()
    {
    	int num;
    	printf("\n Enter the number to be inserted in the queue: ");
    	scanf("%d",&num);
    	if(rear==MAX-1)
    	printf("\n OVERFLOW");
    	else if(front==-1 && rear==-1)
    	{front=rear=0;
    	queue[rear]=num;}
    	else
    	{rear++;
    	queue[rear]=num;}
    }
    
    int peek(){
    	if(front == -1 || front>rear ){
    		printf("\n QUEUE IS EMPTY");
    		return -1;
		}
		else
		{
			return queue [front];
		}
	}

     void display()
     {
     	int i;
     	printf("\n");
     	if (front==-1 || front>rear)
     	printf("\n QUEUE IS EMPTY");
     	else
     	{
     		for(i=front; i<=rear; i++)
     		printf("\t%d", queue[i]);
		 }
	 }
	 
	 int delete_element()
	 {
	 	int val;
	 	if(front == -1 || front>rear)
	 	{
	 		printf("\n UNDERFLOW");
	 		return -1;
		 }
		 else
		 {
		 	val=queue[front];
		 	front++;
		 	if(front>rear)
		 	front=rear=-1;
		 	return val;
		 	
		 }
	 }


