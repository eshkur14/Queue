/*
**Author	:Eshani Shet Kurtarkar
**Date		:25th Jan'18
**Program	:Implementation of queue (general)
*/


#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include"gen_head.h"


#define MAX 5

int rear=-1, front=-1;
int q_arr[MAX];


//just display the intoduction of the program
void displayIntro(char *intro)
{
	printf("\n------------------------------------------------------\n");	
	printf("%s",intro);
	printf("\n------------------------------------------------------\n");
}


//to get valid response from user
char getValidResponse()
{
	char t;
	do{
		getchar();
		scanf("%c",&t);
		t=toupper(t);
		if(t=='Y' || t=='N')
		 {
		 	break;
		 }
		else
		 {
		  	printf("invalid respose enter Y or N\n");
		 }
	}
	while(1);
	return t;
}


//to insert the element in a queue
void insert(int item)
{
	if(isFull()==1)
	{
		printf("Queue is full\n");
		return;
	}
	if(front==-1)
	{
		front=front+1;
	}
	rear=rear+1;
	q_arr[rear]=item;
}


//to delete an element from the queue
int delete_element()
{
	int item,i;
	if(isEmpty()==1)
	{
		printf("Queue underflow\n");
		exit(-1);
	}
	item=q_arr[front];
	for(i=1;i<=rear;i++)
	{
		q_arr[i-1]=q_arr[i];
		rear=rear-1;
	}
	return item;
}


//display queue
void display()
{
	int i;
	if(isEmpty()==1)
	{
		printf("Queue is empty");
		return;
	}
	printf("Elements in queue are \n");
	for(i=front;i<=rear;i++)
	{
		printf(" | %d | \n ------ \n",q_arr[i]);
	}
}


//isEmpty function to check if the Q is empty or not
int isEmpty()
{
	if(rear==-1)
	{
		return 1;
	}else{
		return 0;
	}
}


//isFull function to check if the Q is full or not
int isFull()
{
	if(rear==MAX-1)
	{
		return 1;
	}else{
		return 0;
	}
}


