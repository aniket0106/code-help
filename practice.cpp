#include<stdio.h>
#include<stdlib.h>

//implementing stack using singly linked list
//creation of top pointing to the last element of the stack
struct Stack
{
	struct List* data;
	struct Stack *next;
};
struct Stack *top=NULL;
//creation of node 
struct Stack* nn (struct List* ele)
{
	struct Stack *p=(struct Stack*)malloc(sizeof(struct Stack));
	p->data=ele;
	p->next=NULL;
}
//inserting at the beginning of the stack(linked list) = push
void push (struct List* data)
{
	struct Stack *p;
	p=nn(data);
	//if the stack is empty
	if(top == NULL)
		top=p;
	//insert at the beginning
	else
	{
		p->next=top;
		top=p;
	}
}
//deleting at the beginning of the stack(linked list) = pop
void pop ()
{
	struct Stack *ptr=NULL;
	//check if the stack is empty
	if(top == NULL)
	{
		printf("\nstack is empty");
		return;
	}
	//delete from the beginning
	ptr=top;
	top=ptr->next;
	free(ptr);
	ptr=NULL;
}

struct Stack *top1=NULL;
//creation of node 
struct Stack* nn1 (struct List* ele)
{
	struct Stack *p=(struct Stack*)malloc(sizeof(struct Stack));
	p->data=ele;
	p->next=NULL;
}
//inserting at the beginning of the stack(linked list) = push
void push1 (struct List* data)
{
	struct Stack *p;
	p=nn1(data);
	//if the stack is empty
	if(top1 == NULL)
		top1=p;
	//insert at the beginning
	else
	{
		p->next=top1;
		top1=p;
	}
}
//deleting at the beginning of the stack(linked list) = pop
void pop1 ()
{
	struct Stack *ptr=NULL;
	//check if the stack is empty
	if(top1 == NULL)
	{
		printf("\nstack is empty");
		return;
	}
	//delete from the beginning
	ptr=top1;
	top1=ptr->next;
	free(ptr);
	ptr=NULL;
}
struct List* peek ()
{
	return top->data;
}
struct List* peek1 ()
{
	return top1->data;
}
struct List
{
	int data;
	struct List *next;
};
struct List *start=NULL;
struct List *start1=NULL;

struct List* nn (int data)
{
	struct List* p=(struct List*)malloc(sizeof(struct List));
	p->data=data;
	p->next=NULL;
	return p;
}

void append (int data)
{
	struct List*ptr=nn(data),*ptr1=NULL;
	if(!start)
		start=ptr;
	else
	{
		ptr1=start;
		while(ptr1->next)
			ptr1=ptr1->next;
		ptr1->next=ptr;
	}
}

void display (struct List *ptr)
{
	if(!ptr)
		printf("list is empty");
	else
	{
		while(ptr)
		{
			printf("%d   ",ptr->data);
			ptr=ptr->next;
		}
	}
}
void display1 (struct List *ptr)
{
	if(!ptr)
		printf("list is empty");
	else
	{
		while(ptr)
		{
			printf("%d   ",ptr->data);
			ptr=ptr->next;
		}
	}
}
void append1 (int data)
{
	struct List*ptr=nn(data),*ptr1=NULL;
	if(!start1)
		start1=ptr;
	else
	{
		ptr1=start1;
		while(ptr1->next)
			ptr1=ptr1->next;
		ptr1->next=ptr;
	}
}


void deleteFromSorted (struct List *ptr)
{
	struct List *ptr1=ptr->next,*ptr2=NULL;
	while(ptr)
	{
		ptr1=ptr->next;
		while(ptr && ptr1 && ptr->data==ptr1->data)
		{
			ptr2=ptr1;
			ptr1=ptr1->next;
			free(ptr2);
		}
		ptr->next=ptr1;
		ptr=ptr1;
	}
}


void deleteFromUnsorted (struct List *ptr)
{
	struct List *ptr1=NULL,*ptr2=NULL;
	while(ptr)
	{
		ptr2=ptr;
		ptr1=ptr->next;
		while(ptr1)
		{
			if(ptr->data == ptr1->data)
			{
				ptr2->next=ptr1->next;
				ptr2=ptr1;
				ptr1=ptr1->next;
				free(ptr2);
			}
			else
			{
				ptr2=ptr1;
				ptr1=ptr1->next;
			}
		}
		ptr=ptr->next;
	}
}

int findIntersection (struct List *ptr,struct List *ptr1)
{
	while(ptr->next)
	{
		push(ptr->next);
		ptr=ptr->next;
	}
	while(ptr1->next)
	{
		push1(ptr1->next);
		ptr1=ptr1->next;
	}
	while(top && top1 && (peek() == peek1()))
	{
		pop();
		pop1();
	}
	return top1->data->next->data;
}

int main ()
{
	append(1);
	append(1);
	append(2);
	append(3);
	append(3);
	append1(1);
	append1(1);
	append1(2);
	append1(2);
	append1(3);
	
	start1->next->next->next=start->next->next;
	display(start);
	deleteFromUnsorted(start);
	printf("\n");
	display(start);
	printf("\n%d",findIntersection(start,start1));
	
}
