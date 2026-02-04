# 📚 Libft – My First C Library (42)

## 🧠 About the project

**Libft** is my first project at **42 School** and represents my first step into low-level programming in **C**.

The objective of this project is to build a personal C library by reimplementing a set of standard `libc` functions, along with additional utility functions. This library will be reused throughout future C projects at 42.

Beyond functionality, this project focuses on understanding how these functions work internally, handling memory safely, and writing clean, norm-compliant code.


## 🎯 Project objectives

- Understand the internal behavior of standard C functions  
- Learn and apply **manual memory management** (`malloc`, `free`)  
- Write **robust, reusable and maintainable code**  
- Follow the **42 Norm** strictly  
- Build a strong foundation for future projects (`get_next_line`, `printf`, `minishell`, etc.)



## 🛠️ Project structure

The library is divided into three main parts:

### 1️⃣ Libc function reimplementations

Reimplementation of essential standard functions, all prefixed with `ft_`, such as:

- Memory manipulation: `ft_memcpy`, `ft_memmove`, `ft_memset`, `ft_bzero`
- String handling: `ft_strlen`, `ft_strdup`, `ft_strncmp`, `ft_strchr`
- Character checks & conversions: `ft_isalpha`, `ft_isdigit`, `ft_toupper`, `ft_tolower`
- Numeric conversion: `ft_atoi`

These functions strictly replicate the behavior of their original `libc` counterparts.



### 2️⃣ Additional utility functions

Custom helper functions to simplify work with:

- **Memory**: `ft_memalloc`, `ft_memdel`
- **Strings**: `ft_strjoin`, `ft_strtrim`, `ft_strsplit`, `ft_itoa`, `ft_strsub`
- **Output**: `ft_putchar`, `ft_putstr`, `ft_putnbr` and their `_fd` variants

All functions are designed with careful memory handling and edge-case management.



### 3️⃣ Bonus – Linked lists

Implementation of a generic linked list structure using:

```c
typedef struct s_list
{
    void            *content;
    size_t          content_size;
    struct s_list   *next;
} t_list;

