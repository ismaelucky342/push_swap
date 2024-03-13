# push_swap
"Swap_push is not so natural"

In this project we will organize data in a stack, with a limited set of instructions, and using the fewest possible number of actions. To be successful, we must try using various types of algorithms and choose the most appropriate solution.
(among many possible ones) to achieve optimized data ordering.
## Implementation
- The push_swap algorithm can be implemented using different data structures such as stacks (Last In First Out) or linked lists. For this project, a doubly linked list data structure is recommended for efficient stack manipulation.

  - Create a doubly linked list structure to represent stack nodes, with each node containing an integer value and pointers to the next and previous nodes.
  - Implement functions for stack initialization, stack operations (push, pop, swap, rotate, and reverse rotate), and stack sorting.
  - For my approach, I implemented a function to calculate the minimum number of moves required to push an element from stack A to stack B. This function will determine the optimal moves to push to stack B during the sorting process before the actual sorting operation begins.

## Sorting Algorithms
- The push_swap algorithm uses different sorting techniques based on the number of elements in the stack:
  - A sorting algorithm based on permutations is used for small stack sizes (typically 3 or less). This involves checking all possible permutations of the stack and determining the minimum number of operations required to sort it.
  - For larger stack sizes, more efficient sorting algorithms such as quicksort or mergesort can be implemented. These algorithms divide the stack into smaller sub-stacks, sort them recursively, and then combine them to achieve the final sorted order.

## Usage
- To compile the push_swap program, run:
  ```
  make
  ```
- To use the push_swap program, provide a series of integers as arguments:
  ```
  ./push_swap <integers>
  ```
  For example:
  ```
  ./push_swap 5 2 7 1 4
  ```
- The program will output a list of operations to sort the input stack. A two/three-letter code represents each operation. The goal is to minimize the number of operations required to sort the stack efficiently.

# Extras 
Push_swap is not a very difficult project in terms of code construction. You will see that it doesn't need many steps to finish it. The hardest part is to find a solution to the problem and to to construct its algorithm. 
And be careful with memory leaks. Good luck hitchhiker. 

-Born2code

![image](https://github.com/ismaelucky342/ft_printf/assets/153450550/0ab002b6-139e-4b74-b2f9-931ae794fb68)
