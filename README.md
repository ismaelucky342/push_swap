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
- include/: Contains the header files.
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
