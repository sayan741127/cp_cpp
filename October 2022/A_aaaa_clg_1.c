// // ------------------------------- Array Implementation of Stack ---------------------------------

// #include <stdio.h>
// #include<stdlib.h>
// #include<stdbool.h>

// // Declaration

// #define ss 100

// struct list
// {
//     int top;
//     int items[ss];
// };

// typedef struct list stack;
// stack s;

// // Creation

// void create(stack *s)
// {
//     s->top = -1;
// }

// // Push Operation

// void push(stack *st, int value)
// {
//     if (st->top == (ss - 1))
//     {
//         printf("\n Stack overflow");
//         exit(1);
//     }
//     else
//     {
//         st->top++;
//         st->items[st->top] = value;
//     }
// }

// // Pop Operation

// int pop(stack *st)
// {
//     if (st->top == -1)
//     {
//         printf("\n Stack underflow");
//         exit(1);
//     }
//     else
//     {
//         return (st->items[st->top--]);
//     }
// }

// // Empty stack

// bool empty(stack *st)
// {
//     if (st->top == -1)
//         return (true);
//     else
//         return (false);
// }

// int main()
// {
//     stack k;
//     push(&k,3);
//     push(&k,4);

//     printf("%d", pop(&k));

//     return 0;
// }

// -----------------------------  Linked List Implementation --------------------------------

// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>

// // Declaration

// struct list
// {
//     int items;
//     struct list *link;
// };
// typedef struct list stack;
// stack *top;

// // Creation

// void create(stack *top)
// {
//     top = NULL;
//     /* top points to NULL, indicating empty stack */
// }

// // Push Operation

// void push(stack *top, int value)
// {
//     stack *ps;
//     ps = (stack *)malloc(sizeof(stack));
//     if (ps == NULL)
//     {
//         printf("\n Stack is full");
//         exit(1);
//     }
//     ps->items = value;
//     ps->link = top;
//     top = ps;
// }

// // Pop Operation

// int pop(stack *top)
// {
//     int x;
//     stack *ps;
//     if (top == NULL)
//     {
//         printf("\n Stack is empty");
//         exit(1);
//     }
//     else
//     {
//         ps = top;
//         top = top->link;
//         x = ps->items;
//         // free(ps);
//         return x;
//     }
// }

// bool empty(stack *top)
// {
//     if (top == NULL)
//         return (true);
//     else
//         return (false);
// }

// int main()
// {

//     stack k;
//     push(&k, 3);
//     push(&k, 4);

//     printf("%d", pop(&k));

//     return 0;
// }

// /*
//  ------------------- Library Functions For Stack Implementation Using Array ------------------
// */
// #include <stdlib.h>
// #include <stdbool.h>

// //define stack struct
// struct stack
// {
//     int sp;
//     int Size;
//     char *bp;
// };

// typedef struct stack STACK;

// //function for initializing a stack
// bool InitializeStack(STACK* s, int size)
// {
//     s->sp = (-1);
//     s->Size = size;
//     s->bp = (char *)malloc(size * sizeof(char));
//     if(s->bp == NULL)
//       return false;
//     else
//       return true;
// }

// //function for checking wheather the stack is empty
// bool IsEmpty(STACK* s)
// {
//     if(s->sp <= (-1))
//       return true;
//     else
//       return false;
// }

// //function for checking wheather the stack is full
// bool IsFull(STACK* s)
// {
//     if(s->sp == (s->Size - 1))
//       return true;
//     else
//       return false;
// }

// //function for insert element to the top of the stack
// bool Push(STACK* s, char val)
// {
//     if(IsFull(s))
//        return false;
//     else
//     {
//         s->sp++;
//         s->bp[s->sp] = val;
//         return true;
//     }
// }

// //function to get the top element
// char Top(STACK* s)
// {
//     return s->bp[s->sp];
// }

// //function for poping out the top element
// bool Pop(STACK* s)
// {
//     if(IsEmpty(s))
//       return false;
//     else
//     {
//         s->sp--;
//         return true;
//     }
// }

// //function for clearing the stack
// void ClearStack(STACK* s)
// {
//     free(s->bp);
// }

// //------------ Write a program to check the validity of a parenthesized arithmetic expression -----------
// //  (whether the parenthesis is properly used or not).

// #include <stdio.h>
// #include <string.h>
// // #include "StackUsingArray(char).h"

// //Validator function
// bool Validate(char open, char close)
// {
//     switch (close)
//     {
//         case ')':
//            return (open == '(');
//         case '}':
//            return (open == '{');
//         case ']':
//            return (open == '[');
//     }

//     return true;
// }

// //main routine for validating a parenthesized expression
// int main()
// {
//     char ex[1000]; bool status = true;
//     printf("enter the expression: ");
//     scanf("%s", ex);

//     STACK s;
//     if(!InitializeStack(&s, strlen(ex)))
//     {
//         printf("Not Enough memory\n");
//         return 0;
//     }

//     for(int i=0; ex[i]!='\0'; i++)
//     {
//         if(ex[i]=='(' || ex[i]=='{' || ex[i]=='[')
//            Push(&s,ex[i]);
//         else if(ex[i]==')' || ex[i]=='}' || ex[i]==']')
//         {
//             char ch = Top(&s);
//             if(!Pop(&s))
//             {
//                 status = false;
//                 break;
//             }

//             if(!Validate(ch,ex[i]))
//             {
//                 status = false;
//                 break;
//             }
//         }
//     }

//     if(!IsEmpty(&s))
//        status = false;

//     printf("Status : %s\n", (status ? "Balanced" : "Unbalanced"));

//     ClearStack(&s);

//     return 0;

// }

// ----------------  3. Write a program to evaluate a postfix expression using a stack. ---------------
// [Hint: For simplicity, you can assume a single digit operand]

// C program to evaluate value of a postfix expression
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// #include <stdlib.h>

// // Stack type
// struct Stack
// {
// 	int top;
// 	unsigned capacity;
// 	int* array;
// };

// // Stack Operations
// struct Stack* createStack( unsigned capacity )
// {
// 	struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));

// 	if (!stack) return NULL;

// 	stack->top = -1;
// 	stack->capacity = capacity;
// 	stack->array = (int*) malloc(stack->capacity * sizeof(int));

// 	if (!stack->array) return NULL;

// 	return stack;
// }

// int isEmpty(struct Stack* stack)
// {
// 	return stack->top == -1 ;
// }

// char peek(struct Stack* stack)
// {
// 	return stack->array[stack->top];
// }

// char pop(struct Stack* stack)
// {
// 	if (!isEmpty(stack))
// 		return stack->array[stack->top--] ;
// 	return '$';
// }

// void push(struct Stack* stack, char op)
// {
// 	stack->array[++stack->top] = op;
// }

// // The main function that returns value of a given postfix expression
// int evaluatePostfix(char* exp)
// {
// 	// Create a stack of capacity equal to expression size

// 	struct Stack* stack = createStack(strlen(exp));
// 	int i;

// 	// See if stack was created successfully

// 	if (!stack) return -1;

// 	// Scan all characters one by one

// 	for (i = 0; exp[i]; ++i)
// 	{
// 		// If the scanned character is an operand (number here),
// 		// push it to the stack.

// 		if (isdigit(exp[i]))
// 			push(stack, exp[i] - '0');

// 		// If the scanned character is an operator, pop two
// 		// elements from stack apply the operator

// 		else
// 		{
// 			int val1 = pop(stack);
// 			int val2 = pop(stack);
// 			switch (exp[i])
// 			{
// 			case '+': push(stack, val2 + val1); break;
// 			case '-': push(stack, val2 - val1); break;
// 			case '*': push(stack, val2 * val1); break;
// 			case '/': push(stack, val2/val1); break;
// 			}
// 		}
// 	}
// 	return pop(stack);
// }

// int main()
// {
// 	char exp[] = "231*+9-";
// 	printf ("postfix evaluation: %d", evaluatePostfix(exp));
// 	return 0;
// }

// // --------------------------- Praneeth South Code ------------------

// // #include<stdio.h>
// // #include<stdlib.h>
// // int main(){
// //     int num[5];
// //     int top=0;
// //     while(1){
// //         int val;
// //         printf("enter 1 to push :\nenter 2 to pop:\nenter 0 to exit the program\n");
// //         int operation;scanf("%d",&operation);
// //         if(operation==0){
// //             printf("Stack values :\n");
// //             for(int i=top-1;i>=0;i--){
// //                 printf("%d ",num[i]);
// //             }
// //             exit(1);
// //         }
//         if(operation==1){
//      if(top<5){
//                printf("enter the value to push :\n");
//             int toPush;scanf("%d",&toPush);
//             num[top]=toPush;
//             printf("%d is pushed successfully\n",toPush);top++;
//             }
//             else{
//                 printf("Stack is full !\n");
//             }

//         }
//     }
//     return 0;
// }

// ------------------- linked list implementation of stack-------------------

// #include <stdio.h>
// #include <stdlib.h>

// // Structure to create a node
// struct Node
// {
//     int data;
//     struct Node *next;
// };
// struct Node *top;
// void create()
// {
//     top = NULL;
// }
// // Push() operation
// void push(int value)
// {
//     struct Node *newNode;
//     newNode = (struct Node *)malloc(sizeof(struct Node));
//     newNode->data = value; // assign value to the node
//     if (top == NULL)
//     {
//         newNode->next = NULL;
//     }
//     else
//     {
//         newNode->next = top;
//     }
//     top = newNode;
//     printf("Node is Inserted\n\n");
// }
// // Pop() operation
// int pop()
// {
//     if (top == NULL)
//     {
//         printf("\nStack Underflow\n");
//     }
//     else
//     {
//         struct Node *temp = top;
//         int temp_data = top->data;
//         top = top->next;
//         free(temp);
//         return temp_data;
//     }
// }
// // Display() the stack
// void display()
// {
//     // Display the elements of the stack
//     if (top == NULL)
//     {
//         printf("\nStack Underflow\n");
//     }
//     else
//     {
//         printf("The stack is \n");
//         struct Node *temp = top;
//         while (temp->next != NULL)
//         {
//             printf("%d ", temp->data);
//             temp = temp->next;
//         }
//         printf("%d \n", temp->data);
//     }
// }

// int main()
// {
//     int choice, value;
//     // printf("\nImplementaion of Stack using Linked List\n");
//     while (1)
//     {
//         printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
//         printf("\nEnter your choice : ");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//         case 1:
//             printf("\nEnter the value to insert: ");
//             scanf("%d", &value);
//             push(value);
//             break;
//         case 2:
//             printf("Popped element is :%d\n", pop());
//             break;
//         case 3:
//             display();
//             break;
//         case 4:
//             exit(0);
//             break;
//         default:
//             printf("\nWrong Choice\n");
//         }
//     }
// }