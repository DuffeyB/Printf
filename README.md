# # *This project has been created as part of the 42 curriculum by bduffey.*

<div align="center">

### 🛠️ Custom `ft_printf` Implementation  
#### Rebuilding one of C’s most iconic functions from scratch.

<img src="https://img.shields.io/badge/language-C-blue?style=for-the-badge"/>
<img src="https://img.shields.io/badge/build-Makefile-green?style=for-the-badge"/>
<img src="https://img.shields.io/badge/school-42-black?style=for-the-badge"/>

</div>

---

## 📚 Overview

`ft_printf` is a recreation of the standard C `printf()` function.

The goal of this project is to understand:

- Variadic functions
- Format parsing
- Type conversions
- Memory handling
- Low-level output in C

Instead of relying on the standard library implementation, this project builds formatted printing from the ground up using only allowed functions.

---

## ⚡ Supported Conversions

| Specifier | Description |
|----------|-------------|
| `%c` | Print a single character |
| `%s` | Print a string |
| `%p` | Print a pointer address |
| `%d` | Print a decimal integer |
| `%i` | Print an integer |
| `%u` | Print an unsigned integer |
| `%x` | Print lowercase hexadecimal |
| `%X` | Print uppercase hexadecimal |
| `%%` | Print a percent sign |

---

## 🧠 Example

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s!\n", "world");
    ft_printf("Hex: %x\n", 255);
    ft_printf("Pointer: %p\n", &main);
    return (0);
}
```

### Output

```bash
Hello world!
Hex: ff
Pointer: 0x7ffee4b2d4b8
```

---

## 🔧 Compilation

Clone the repository:

```bash
git clone https://github.com/bduffey/ft_printf.git
cd ft_printf
```

Compile the library:

```bash
make
```

This generates:

```bash
libftprintf.a
```

---

## 📂 Project Structure

```bash
.
├── includes/
│   └── ft_printf.h
├── src/
│   ├── ft_printf.c
│   ├── ft_putchar.c
│   ├── ft_putstr.c
│   ├── ft_putnbr.c
│   ├── ft_puthex.c
│   └── ...
├── Makefile
└── README.md
```

---

## 🚀 How It Works

The function scans the format string character by character.

Whenever a `%` is encountered:

1. The next conversion specifier is parsed
2. The corresponding argument is retrieved using `va_arg`
3. The value is formatted and printed

Prototype:

```c
int ft_printf(const char *format, ...);
```

---

## 🧩 Allowed Functions

Only these external functions are used:

```c
malloc
free
write
va_start
va_arg
va_copy
va_end
```

---

## 📌 Notes

- No buffer management like the real `printf`
- Handles core formatting features required by the project
- Built as part of the 42 curriculum
- Designed to be reusable in future C projects

---

## ✅ Makefile Rules

```bash
make
make clean
make fclean
make re
```

---

## 🎯 What I Learned

This project helped improve my understanding of:

- Variadic arguments
- Parsing logic
- Recursive number conversion
- Hexadecimal formatting
- Static libraries
- Clean modular C architecture

---

<div align="center">

### 💻 Built by `bduffey`

Because `write(1, &c, 1)` deserves better.

</div>
