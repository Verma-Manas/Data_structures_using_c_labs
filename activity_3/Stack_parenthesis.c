//C Program to Check if Expression is correctly Parenthesized using Stacks.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top = -1;
char stack[100];

void push(char);
void pop();
void find_top();

void main()
{
	int i,exp;
	char arr[100];
	printf("enter expression\n");
	scanf("%s", &exp);
	for (i = 0; arr[i] != '\0';i++)
	{
		if (arr[i] == '('||arr[i] == '{'||arr[i] == '[')
		{
			push(arr[i]);
		}
		else if (arr[i] == ')'||arr[i] == '}'||arr[i] == ']')
		{
			pop();
		}
	}
	find_top();
}


void push(char exp)
{
	stack[top] = exp;
	top++;
}

void pop()
{
	if (top == -1)
	{
		printf("expression is invalid\n");
		exit(0);
	}
	else
	{
		top--;
	}
}

void find_top()
{
	if (top == -1)
		printf("\nexpression is valid\n");
	else
		printf("\nexpression is invalid\n");
}
