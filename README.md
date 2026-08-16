*This project has been created as part of the 42 curriculum by <hassamoh>.*

# ft_printf

## Description
**ft_printf** is a mandatory project of the **42 curriculum**. The goal of this project is to recreate the behavior of the standard C library function `printf`.

This project helps students understand:
- Variadic functions in C
- Formatted output
- Parsing and handling format specifiers
- Low-level input/output using `write`

Only the **mandatory part** of the project has been implemented. No bonus or additional features were completed.

---

## Instructions

### Compilation
Compile the library using:
```make
```

This will generate the library file:
```make
libftprintf.a
```

To clean object files:
```make clean
```

To remove all compiled files:
```make fclean
```

To recompile everything:
```make re
```

---

## Usage

Include the header in your C file:
```#include "ft_printf.h"
```

Compile your program with the library:
```gcc main.c libftprintf.a
```

Example usage:
```ft_printf("Hello %s, number: %d\n", "42", 42);
```

---

## Algorithm and Data Structure

### Algorithm
The implementation follows these main steps:
1. Parse the format string character by character
2. When a '%' character is found, identify the corresponding format specifier
3. Retrieve the correct argument using `va_list`
4. Convert and print the argument using helper functions
5. Count and return the total number of printed characters

This approach ensures correct behavior while keeping the code modular and readable.

### Data Structures
No complex data structures are used. The project relies on:
- `va_list` for handling variadic arguments
- Basic C types and helper functions

This choice respects the constraints of the subject and keeps memory usage minimal.

---

## Project Scope
- ✅ Mandatory part completed
- ❌ Bonus part not implemented

The focus of this project was correctness and strict compliance with the subject requirements.

---

## Resources

### References
- 42 subject PDF (ft_printf)
- Linux man pages:
  - `man printf`
  - `man stdarg`
- Documentation:
  - https://en.cppreference.com

### AI Usage
AI tools were used for:
- Clarifying concepts related to variadic functions and format parsing
- Reviewing explanations and improving README clarity

All code logic and implementation decisions were made by the author.
