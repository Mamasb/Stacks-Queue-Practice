#include <stdio.h>
#include <stdlib.h>

#define SIZE 100 // Define the size of the stack

int top = -1; // Initialize top of stack
int stack[SIZE]; // Define the stack array

void push(int element);
int pop();
void display();

int main() {
    int choice;

    while (1) {
        printf("\nPerform operations on the stack:");
        printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (top == SIZE - 1) {
                    printf("Stack Overflow\n");
                } else {
                    int element;
                    printf("Enter the element to be inserted:");
                    scanf("%d", &element);
                    push(element);
                }
                break;
            case 2:
                if (top == -1) {
                    printf("Stack Underflow\n");
                } else {
                    printf("The deleted item is %d\n", pop());
                }
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("\nInvalid choice!!");
        }
    }
}

void push(int element) {
    top++;
    stack[top] = element;
}

int pop() {
    int element = stack[top];
    top--;
    return element;
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("The elements of the stack are:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}
