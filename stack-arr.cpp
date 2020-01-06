#include<stdio.h>
#include<stdlib.h> 

#define SIZE 10

typedef struct
{
	int top;
	int data[SIZE];
}stack;
void init(stack* s)
{
	s->top=-1;
}
int is_full(stack* s)
{
	return (s->top==(SIZE-1));
}
int is_empty(stack* s)
{
	return (s->top==-1);
}
void push(stack* s, int v)
{
	if(is_full(s))
	{
	//	printf("FULL ERROR");
		return;
	}
	else s->data[++s->top]=v;
}
int pop(stack* s)
{
	if(is_empty(s))
	{
		printf("EMPTY ERROR");
		exit(1);
	}
	else return (s->data[s->top--]);
}
int peek(stack* s)
{
	if(is_empty(s))
	{
		printf("EMPTY ERROR");
		exit(1);
	}
	else return (s->data[s->top]);
}

int main()
{
	stack s;
	int value;
	init(&s);
	
	while(!is_full(&s))
	{
		scanf("%d", &value);
		push(&s, value);
		printf("%d", pop(&s));

	}

//이코드의 문제점 : s->top의 푸시팝에서 앞뒤에 ++--를 뺴도 잘작동됨ㅋㅋㅋㅋㅋㅋㅋ뭐임 

}
