/*
stack.c

*/

#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

typedef struct {
	int arr[MAX_SIZE];
	int top;
} Stack;

void Initialize (Stack *stack) {
	stack->top = -1;
}

bool isFull (Stack *stack) {
	return stack->top == MAX_SIZE - 1;
}

bool isEmpty (Stack *stack) {
	return stack->top == -1;
}

void push (Stack *stack, int x) {
	if (isFull(stack)) {
		printf("The stack is currently full\n");
		return;
	}
	stack->arr[++stack->top] = x;
	printf("Pushed %d to the stack\n", x);
}

int pop (Stack *stack, int x) {
	if (isEmpty(stack)) {
		printf("The stack is currently empty\n");
		return -1;
	}
	int popped = stack->arr[stack->top];
	stack->top--;
	printf("Popped %d from the stack\n", x);
	return popped;
}

int peek (Stack *stack) {
	if (isEmpty(stack)) {
		printf("The stack is currently empty\n");
		return -1;
	}
	return stack->arr[stack->top];
}

int main () {
	Stack stack;
	Initialize(&stack);

	push(&stack, 3);
	peek(&stack);

	push(&stack, 5);
	peek(&stack);

	return 0;
}
