This project is done by Joshua Bediako Mensah (0x19. C - Stacks, Queues - LIFO, FIFO)

General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=c89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You allowed to use a maximum of one global variable
No more than 5 functions per file
You are allowed to use the C standard library
The prototypes of all your functions should be included in your header file called monty.h
Don’t forget to push your header file
All your header files should be include guarded
You are expected to do the tasks in the order shown in the project

Stack:

Last-In-First-Out (LIFO) Structure: In a stack, the last element added is the first one to be removed. Think of it like a stack of plates where you add and remove plates from the top.
Operations: Stacks support two primary operations:
Push: Adds an element to the top of the stack.
Pop: Removes and returns the top element of the stack.
Common Use Cases: Stacks are used in scenarios where you need to keep track of function calls (call stack) or manage temporary data that needs to be processed in reverse order.
Queue:

First-In-First-Out (FIFO) Structure: In a queue, the first element added is the first one to be removed. Think of it like a line of people waiting for a bus, where the person who arrives first gets on the bus first.
Operations: Queues also support two primary operations:
Enqueue: Adds an element to the back of the queue.
Dequeue: Removes and returns the front element of the queue.
Common Use Cases: Queues are used when you want to manage data in the order it was received or when you need to ensure that tasks are processed in a specific order, such as in task scheduling, print job management, or breadth-first search algorithms.

