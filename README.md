Libft - Custom Standard Library Implementation

Libft is a personal library of essential C functions, developed as part of the 42 School curriculum. It includes key features of the C standard library, along with custom functions for enhanced memory management, string manipulation, file I/O, and linked list handling. Libft is designed to serve as a foundational toolkit for future projects in C, prioritizing efficiency, readability, and adherence to coding standards.

Overview

Libft is developed to reinforce key programming skills and provide reusable code that simplifies project work. It comprises core functions that replicate or extend the standard C library. The project serves as a learning experience in memory handling, string operations, data structure implementation, and more.
Features

    Memory management: Custom implementations for memory allocation, manipulation, and cleanup.
    String operations: Functions for handling and manipulating C strings.
    File I/O: Includes file reading functions such as get_next_line.
    Linked list handling: Modular functions to create and manage linked lists.

All functions are built with a focus on performance, error handling, and modularity, strictly following 42 School’s coding standards.
Installation

To integrate Libft into your own projects, follow these steps:

Clone the repository:
    
        git clone https://github.com/97OooO/libft.git
        cd libft

Compile the library: Run make to compile the library, which will generate a libft.a static library file.

bash

    make

Clean up (optional):
        Run make clean to remove object files.
        Run make fclean to remove both object files and libft.a.

    Recompile if necessary: Use make re to clean and rebuild the library.

Usage

  You can link Libft to your own C projects by including libft.a during compilation.

For example:

  In your code, simply include the Libft header:

#include "libft.h"

** Function List

Libft includes functions across several categories, as outlined below:
1. Standard Library Functions

    Memory: ft_memset, ft_memcpy, ft_memmove, ft_memcmp, ft_bzero, etc.
    String: ft_strlen, ft_strdup, ft_strchr, ft_strrchr, ft_strncmp, etc.

2. Additional Utility Functions

    Memory Allocation: ft_calloc, ft_strjoin, ft_substr, ft_split.
    String Manipulation: ft_strtrim, ft_itoa, ft_atoi.
3. File I/O

    You'll see how to use a file, open it, adding something or write on it or read from it.
You'll see that again in your future projects (get_next_line, miniSHELL,...).

5. Linked List Functions

    Linked Lists: Functions to create, modify, and free linked list nodes (ft_lstnew, ft_lstadd_front, ft_lstadd_back, etc.).

Project Structure

  libft.h: The main header file containing function prototypes.
  src/: Source files, organized by function category (memory, string, list, etc.).
  Makefile: Automates the build, clean, and rebuild processes.
  README.md: Project documentation.
