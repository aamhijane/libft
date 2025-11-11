# libft

## Project Overview

libft is the foundational C library project of the 42 School curriculum. The project requires recreating common C standard library functions from scratch along with additional useful utilities. The purpose is to deepen understanding of C programming fundamentals and prepare a reusable, robust library to be used in later projects where standard libraries are restricted.

## Purpose

- Reimplement essential standard C functions covering string manipulation, memory management, character checks, and conversions.
- Develop key programming skills including pointers, memory handling, modular design, and rigorous testing.
- Build a reliable static library (`libft.a`) to support all future projects in the 42 cursus.
- Learn to respect strict coding and style guidelines important in professional software development.

## What I Learned

- Strong grasp of memory operations, string functions, and linked list manipulation.
- The importance of edge-case handling and defensive programming to avoid bugs and unsafe behavior.
- Writing Makefiles to compile static libraries and managing project structure.
- The discipline of rigorous code review, testing, and style adherence.
- How foundational C functions work internally, which builds confidence for more complex projects ahead.

## My Experience

Working on libft was challenging but rewarding. Understanding each function in depth required thorough research and iterative testing. I gained valuable insight into memory safety, pointer arithmetic, and handling special cases like overlapping memory with `memmove`. Peer feedback and automated tests helped refine my code quality. This project laid a solid foundation for subsequent 42 projects and real-world C programming.

## How to Use

1. Clone the repository.
2. Run `make` in the project directory to compile the static library `libft.a`.
3. Include `libft.h` in your source files to use the library functions.
4. Link your programs with the compiled library using `-L.` and `-lft` flags during compilation.

```sh
git clone https://github.com/yourusername/libft.git
cd libft
make
gcc your_program.c -L. -lft -o your_program
```

## Project Structure

- `libft.h`  Header file with all function prototypes.
- `srcs/`  Source files implementing your functions.
- `Makefile`  Build automation to compile the library and clean object files.

## Bonus

Additional linked list functions to practice dynamic data structure management are included as a bonus part of the project.
