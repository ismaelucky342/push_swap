# Push_swap

![image](https://github.com/ismaelucky342/push_swap/assets/153450550/b39c3402-346e-4f32-85a7-25cc5535dc3a)

Welcome to the repository of my project "push_swap", part of the School 42 curriculum. This project focuses on the design and implementation of a program to sort a list of numbers using a specific set of operations on two stacks. Through "push_swap", skill in algorithms, optimization and handling of data structures is tested and developed. The goal of the project is to sort a stack of numbers using as few moves as possible. 

# Available operations

- sa : Swap the first two elements on stack 'a'.
- sb : Swaps the first two elements on stack 'b'.
- ss : Execute sa and sb simultaneously.
- pa : Takes the first element of stack 'b' and puts it on stack 'a'.
- pb : Takes the first element of stack 'a' and puts it on stack 'b'.
- ra : Moves all elements of stack 'a' up one position.
- rb : Moves all elements of stack 'b' up one position.
- rr : Executes ra and rb simultaneously.
- rra : Moves all elements on the 'a' stack one position down.
- rrb : Moves all elements of stack 'b' down one position.
- rrr: Run rra and rrb simultaneously.

### Repository structure
- src/: Contains the source code of the push_swap
- libft: contains my code library that has been evolving throughout the course
- includes/: Contains the header files.
- Makefile: To compile the project.

# How to use

### Clone the repository
```
$> git clone https://github.com/your-user/push_swap.git
$> cd push_swap
```

### Compile the project
```
$> make
```
### Execute push_swap
```
$> ./push_swap <list of numbers> | wc -l
```

# Algorithm (Ksort)
The ksort algorithm is a specific strategy designed to sort a stack of numbers using a series of operations allowed in the "push_swap" project. This algorithm is divided into two main phases:

### Phase 1: Division and Distribution of Elements (k_sort1)
In this phase, the goal is to divide the stack stack_a into "chunks" or smaller blocks and distribute these blocks on the stack stack_b. This facilitates subsequent rearrangement and reduces the complexity of the problem.

#### k_sort1 steps:

1. Variable Initialization:

- i: Counter for the current index.
- range: Range of elements that will be moved to the stack stack_b in each iteration. It is calculated using the square root of the stack size, multiplied by a factor to adjust for efficiency.

2. Distribution of Elements:

- Iterate over the elements of stack_a.
- If an element's index (s_index) is less than or equal to i, move the element to stack_b and rotate stack_b to keep the largest elements on top.
- If the index of an element is in the range i to i + range, move it to stack_b without rotating.
- If the element's index is greater than i + range, rotate stack_a to move the next element to the top.
- This process continues until all elements in stack_a have been moved to stack_b.

### Phase 2: Recomposition and Final Sorting (k_sort2)

In this phase, the elements in stack_b are moved back to stack_a in order, using a series of optimized operations to ensure that the number of moves is minimal.

#### k_sort2 steps:
1. Counter Initialization:
- rb_count: Counts the rotations needed to move the correct element to the top of stack_b.
- rrb_count: Counts the reverse rotations needed to move the correct element to the top of stack_b.

2. Recomposition of Elements:
- Iterate over the elements in stack_b from largest to smallest.
- Decide whether to use rotations (rotate) or reverse rotations (reverse_rotate) to get the correct element to the top of stack_b efficiently.
- Move the element to the top of stack_a using the push operation.

This process continues until all elements have been moved back to stack_a, completing the sort.

# Extras 

The "push_swap" project implements an efficient algorithm for sorting stacks using a limited set of operations. Although the ksort algorithm offers an optimal solution for handling stacks of various sizes, the project can be improved and extended in the future. It is possible to explore brute force techniques for small stacks, as this technique can find the optimal sequence of moves by trying all possible combinations. Although it is computationally intensive and not practical for large stacks, it can provide accurate and optimized solutions for smaller stacks.

-Born2code

![42madrid](https://github.com/ismaelucky342/Born2code/assets/153450550/3a377f34-9156-4eff-b04b-71c4b128523e)
