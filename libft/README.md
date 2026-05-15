*This project has been created as part of the 42 curriculum by bduffey.*

<h1 align="center">Libft</h1>
<h2 align="center"> 📑 TOC</h2>

1. [Description](#description)
2. [Instructions](#instructions)
3. [Example Usage](#example-usage)
5. [Library Details](#library-details)
   - [Part 1 - Libc Functions](#part-1---libc-functions)
   - [Part 2 - Additional Functions](#part-2---additional-functions)
   - [Part 3 - Linked List Functions](#part-3---linked-list-functions)
6. [Resources](#resources)

<h2 align="center">Description</h2>

<p align="center">
  This project implements <b>Libft</b>, my very first custom C library.<br>
  Its goal is to recreate standard C library functions with my own versions, and extend functionality with additional utility and linked list functions.<br>
  This library demonstrates understanding of <b>memory management, string manipulation, pointer arithmetic, and data structures</b> in C.
</p>


<h2 align="center">Instructions</h2>

```bash
git clone <repository_url>
cd <project_folder>
make
````

The `libft.a` library is created at the root.

Include in your code:

```c
#include "libft.h"
```

Compile with:

```bash
libft.a
```

```
make all/make # Builds the library
make clean    # Removes object files(.o)
make fclean   # Removes object files(.o) and the library(.a)
make re       # Remove .o, .a and rebuilds
```

<h2 align="center">Example Usage</h2>

```c
#include "libft.h"

int main(void)
{
    char *s = ft_strjoin("Hello, ", "World!");
    if (!s)
        return (1);
    ft_putstr_fd(s, 1); // Outputs a string to a file descriptor.
    free(s);
    return (0);
}
`````
<!--
<h2 align="center">Technical Considerations</h2>

- Declaring global variables is strictly forbidden.
- Helper functions for complex functions must be `static` to restrict scope.
- All files must be placed at the **root** of the repository.
- Submitting unused files is not allowed.
- Every `.c` file must compile with the flags: `-Wall -Wextra -Werror`.
- Use the `ar` command to create the library; **libtool is forbidden**.
- `libft.a` library must be at the root of the repository.
- Code must be in accordance with the Norm from 42.
-->

<h2 align="center">Library Details</h2>

<h3 align="center">Part 1 - Libc Functions</h3>

<p align="center">Functions are reimplement with the `ft_` prefix:</p>

- **Character classification**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`  
- **String & memory**: `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_strlcpy`, `ft_strlcat`, `ft_toupper`, `ft_tolower`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_memchr`, `ft_memcmp`, `ft_strnstr`, `ft_atoi`  
- **Memory allocation**: `ft_calloc`, `ft_strdup`

> If `nmemb` or `size` is 0, `calloc` returns a unique pointer value that can be successfully passed to free().

> Functions like `strlcpy`, `strlcat`, and `bzero` may require `<bsd/string.h>` and compile with `-lbsd` flag.

<h3 align="center">Part 2 - Additional Functions</h3>

<p align="center">Functions not present in libc or available in a different form.</p>

| Function | Prototype | Description |
|----------|-----------|-------------|
| `ft_substr` | `char *ft_substr(char const *s, unsigned int start, size_t len)` | Returns a substring from `s`. |
| `ft_strjoin` | `char *ft_strjoin(char const *s1, char const *s2)` | Concatenates `s1` and `s2`. |
| `ft_strtrim` | `char *ft_strtrim(char const *s1, char const *set)` | Returns a copy of ’s1’ with characters from ’set’ removed. |
| `ft_split` | `char **ft_split(char const *s, char c)` | Splits `s` by delimiter `c`. |
| `ft_itoa` | `char *ft_itoa(int n)` | Converts integer to string. |
| `ft_strmapi` | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Applies `f` to each character and returns a new string. |
| `ft_striteri` | `void ft_striteri(char *s, void (*f)(unsigned int, char *))` | Applies `f` to each character in place. |
| `ft_putchar_fd` | `void ft_putchar_fd(char c, int fd)` | Outputs a character to a file descriptor. |
| `ft_putstr_fd` | `void ft_putstr_fd(char *s, int fd)` | Outputs a string to a file descriptor. |
| `ft_putendl_fd` | `void ft_putendl_fd(char *s, int fd)` | Outputs a string followed by newline to fd. |
| `ft_putnbr_fd` | `void ft_putnbr_fd(int n, int fd)` | Outputs an integer to fd. |

<h3 align="center">Part 3 - Linked List Functions</h3>

<p align="center">Functions to manipulate linked lists using the following structure:</p>

```c
typedef struct  s_list
{
    void            *content;
    struct s_list   *next;
}  t_list;
````

| Function        | Prototype                                                                 | Description                                |
| --------------- | ------------------------------------------------------------------------- | ------------------------------------------ |
| ft_lstnew       | `t_list *ft_lstnew(void *content)`                                        | Creates a new node.                        |
| ft_lstadd_front | `void ft_lstadd_front(t_list **lst, t_list *new)`                         | Adds a node to the front.                  |
| ft_lstsize      | `int ft_lstsize(t_list *lst)`                                             | Counts nodes in a list.                    |
| ft_lstlast      | `t_list *ft_lstlast(t_list *lst)`                                         | Returns the last node.                     |
| ft_lstadd_back  | `void ft_lstadd_back(t_list **lst, t_list *new)`                          | Adds a node to the end.                    |
| ft_lstdelone    | `void ft_lstdelone(t_list *lst, void (*del)(void *))`                     | Deletes a single node.                     |
| ft_lstclear     | `void ft_lstclear(t_list **lst, void (*del)(void *))`                     | Deletes all nodes.                         |
| ft_lstiter      | `void ft_lstiter(t_list *lst, void (*f)(void *))`                         | Applies a function to each node’s content. |
| ft_lstmap       | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | Creates a new list applying `f`.           |

<h2 align="center">Resources</h2>

- Library Functions Manual
- [LibftTester by Tripouille](https://github.com/Tripouille/libftTester)
- I used AI as I would use google, AI can reduce alot of time spent on finding the resource to learn.
- AI used to help write this readme.
