📚 ** Libft – My First C Library (42) **

🧠 About the project

Libft is my first project at 42 School and represents my first step into low-level programming in C.
The goal of this project is to recreate a personal C library by reimplementing a set of standard libc functions, as well as additional utility functions that will be reused in all future C projects.

This project is not just about “making functions work”, but about understanding how they work internally, managing memory correctly, and writing clean, norm-compliant code. 

Libft - Subject(EN)

🎯 Project objectives

Deeply understand how standard C functions behave

Learn manual memory management using malloc and free

Write robust and reusable code

Respect 42 Norm (strict coding standards)

Build a solid foundation for future projects like get_next_line, printf, minishell, etc.

🛠️ What’s inside

The library is divided into three main parts:

1️⃣ Reimplementation of libc functions

Functions such as:

ft_memcpy, ft_memmove, ft_memset

ft_strlen, ft_strdup, ft_strncmp

ft_atoi, ft_isalpha, ft_isdigit, …

These functions strictly follow the behavior of their original libc counterparts.

2️⃣ Additional utility functions

Custom helper functions to work with:

Memory (ft_memalloc, ft_memdel)

Strings (ft_strjoin, ft_strtrim, ft_strsplit, ft_itoa, …)

Output (ft_putchar, ft_putstr, ft_putnbr, and their _fd versions)

3️⃣ Bonus – Linked lists

Implementation of a generic linked list structure:

Creation, deletion, iteration and mapping of lists

Use of void * to store any data type

Careful memory handling to avoid leaks

🧩 Skills demonstrated in this project

This first project allowed me to develop and demonstrate the following skills:

🧠 Low-level understanding of C

Pointer arithmetic and manipulation

Explicit type casting

Understanding undefined behavior and edge cases

💾 Memory management

Dynamic allocation and deallocation

Avoiding memory leaks and segmentation faults

Clear ownership of allocated memory

🧱 Code structure & reusability

Modular design (one function per file)

Reuse of previously written functions

Clean and readable code

📏 Discipline & standards

Strict compliance with the 42 Norm

No forbidden functions

No global variables

Defensive programming mindset

🧪 Problem-solving mindset

Breaking complex problems into smaller subproblems

Anticipating edge cases

Testing functions independently

⚙️ Compilation & usage
make


This will generate the static library:

libft.a


You can then include it in your projects:

#include "libft.h"


And compile with:

gcc your_program.c -L. -lft
