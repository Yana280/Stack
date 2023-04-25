#include<stdio.h>

int stack[100], choice, n, top = -1, x, i;

void push(void);
void pop(void);
void display(void);

int main()
{
    printf("\nEnter the size of STACK: ");
    scanf("%d", &n);

    printf("\nSTACK OPERATIONS USING ARRAY");
    printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");

    do
    {
        printf("\nEnter the Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }

            case 2:
            {
                pop();
                break;
            }

            case 3:
            {
                display();
                break;
            }

            case 4:
            {
                printf("\nExiting...");
                break;
            }

            default:
            {
                printf("\nPlease Enter a Valid Choice(1/2/3/4)");
                break;
            }
        }
    } while(choice != 4);

    return 0;
}

void push()
{
    if(top >= n - 1)
    {
        printf("\nSTACK is over flow\n");
    }
    else
    {
        printf("Enter a value to be pushed: ");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if(top <= -1)
    {
        printf("\nStack is under flow\n");
    }
    else
    {
        printf("\nThe popped element is %d\n", stack[top]);
        top--;
    }
}

void display()
{
    if(top >= 0)
    {
        printf("\nThe elements in STACK:\n");

        for(i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
    else
    {
        printf("\nThe STACK is empty\n");
    }
}

