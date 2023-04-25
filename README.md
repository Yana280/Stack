# Stack
## 1.Stacks using array
This is a program written in C language for implementing a stack data structure using an array. 
The push() function checks if the stack is full or not. If the stack is full, it displays an error message. If the stack is not full, it prompts the user to enter a value and then adds it to the stack.

The pop() function checks if the stack is empty or not. If the stack is empty, it displays an error message. If the stack is not empty, it removes the top element and displays it.

The display() function checks if the stack is empty or not. If the stack is not empty, it displays all the elements in the stack.
![Screenshot (293)](https://user-images.githubusercontent.com/125993593/234151582-3d91eea0-244b-4110-be2e-029e52266b52.png)
### Algorithm

Start

Set top = -1, stack[100]

Read the value of n, the size of the stack

Print "STACK OPERATIONS USING ARRAY"

Print "1.PUSH 2.POP 3.DISPLAY 4.EXIT"

Repeat until the user chooses to exit:


7. Read the value of choice

If choice is 1, call push() function

If choice is 2, call pop() function

If choice is 3, call display() function

If choice is 4, print "Exiting..." and exit the program

If choice is not between 1-4, print "Please Enter a Valid Choice(1/2/3/4)"

End Repeat

End

push() function:

If top is greater than or equal to n-1, print "STACK is over flow" and return

Else, read the value of x

Increment top by 1

Set stack[top] equal to x

End

pop() function:


If top is less than or equal to -1, print "Stack is under flow" and return

Else, print "The popped elements is stack[top]"

Decrement top by 1

End

display() function:



If top is greater than or equal to 0:

2. Print "The elements in STACK"

Repeat for i = top to 0:

4. Print stack[i]

Print a new line

Print "Enter Next Choice"

Else, print "The STACK is empty"

End
