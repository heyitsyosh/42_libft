<h1 align="center">
 libft
</h1>

*<p align="center">This project is your very first project as a student at 42.<br>
You will need to recode a few functions of the C standard library as well as some other utility functions that you will use during your whole cursus.</p>*

## Score: 125/100🎉

## Usage:  
First, enter directory with `cd libft`.  
Then use any makefile command.  
To use in projects, compile with `libft.a` and `-I path/to/libft.h`.

#### Makefile Commands:
```C
make        //compile mandatory (to libft.a)
make bonus  //compile mandatory and bonus (to libft.a)
//mandatory: <ctype.h>, <string.h>, <stdlib.h>, non-standard functions
//bonus:     linked list util functions
make clean  //delete .o
make fclean //delete .o and .a
make re     //delete .o and .a and recompile mandatory
```

## Overview:

#### From `<ctype.h>`:
| Function | Description |
| ---------- | ----------- |
| [**ft_isalpha**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_isalpha.c) | Checks for an alphabetic character. |
| [**ft_isdigit**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_isdigit.c) | Checks for a numeric character. |
| [**ft_isalnum**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_isdigit.c) | Checks for an alphanumeric character. |
| [**ft_isascii**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_isascii.c) | Checks for an ASCII character. |
| [**ft_isprint**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_isprint.c) | Checks for a printable character. |
| [**ft_toupper**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_toupper.c) | Converts char to uppercase. |
| [**ft_tolower**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_tolower.c) | Converts char to lowercase. |

#### From `<string.h>`:
| Function | Description |
| ---------- | ----------- |
| [**ft_memset**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_memset.c) | Fills memory with a constant byte. |
| [**ft_strlen**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_strlen.c) | Calculates the length of a string. |
| [**ft_bzero**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_bzero.c) | Fills memory with 0. | 
| [**ft_memcpy**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_memcpy.c) | Copies memory area. |
| [**ft_memmove**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_memmove.c) | Copies memory area safely. |
| [**ft_strlcpy**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_strlcpy.c) | Copies string to a specific size. |
| [**ft_strlcat**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_strlcat.c) | Concatenates string to a specific size. |
| [**ft_strchr**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_strchr.c) | Locates first occurence of character in string. |
| [**ft_strrchr**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_strrchr.c) | Locates last occurence of character in string. |
| [**ft_strncmp**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_strncmp.c) | Compares two strings. |
| [**ft_memchr**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_memchr.c) | Scans memory for a character. |
| [**ft_memchr**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_memcmp.c) | Compares memory areas. |
| [**ft_strnstr**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_strnstr.c) | Locates a substring in a string. |
| [**ft_strdup**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_strdup.c) | Creates a duplicate of the given string. |

#### From `<stdlib.h>`:
| Function | Description |
| ---------- | ----------- |
| [**ft_atoi**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_atoi.c) | Converts a string to an integer. |
| [**ft_calloc**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_calloc.c) | Allocates and initializes memory area to 0. |

#### `Non-standard functions`:
| Function | Description |
| ---------- | ----------- |
| [**ft_substr**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_substr.c) | Returns a substring from a string. |
| [**ft_strjoin**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_strjoin.c) | Concatenates two strings. |
| [**ft_strtrim**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_strtrim.c) | Trims the beginning and end of string with specific set of chars. |
| [**ft_split**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_split.c) | Splits a string using a delimiter. |
| [**ft_itoa**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_itoa.c) | Converts a number to a string. |
| [**ft_strmapi**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_strmapi.c) | Applies a function to each character of a string. |
| [**ft_striteri**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_striteri.c) | Applies a function to each character of a string. |
| [**ft_putchar_fd**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_putchar_fd.c) | Writes a char to a file descriptor. |
| [**ft_putstr_fd**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_putstr_fd.c) | Writes a string to a file descriptor. |
| [**ft_putendl_fd**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_putendl_fd.c) | Writes a string to a file descriptor, followed by a new line. |
| [**ft_putnbr_fd**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_putnbr_fd.c) | Writes a number to a file descriptor. |

#### `Linked list functions`:
| Function | Description |
| ---------- | ----------- |
| [**ft_lstnew**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_lstnew.c) | Creates a new list element. |
| [**ft_lstadd_front**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_lstadd_front.c) | Adds an element at the beginning of a list. |
| [**ft_lstsize**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_lstsize.c) | Counts the number of elements in a list. |
| [**ft_lstlast**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_lstlast.c) | Returns the last element of the list. |
| [**ft_lstadd_back**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_lstadd_back.c) | Appends an element to a list. |
| [**ft_lstclear**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_lstclear.c) | Deletes and frees list. |
| [**ft_lstiter**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_lstiter.c) | Applies a function to each element of a list. |
| [**ft_lstmap**](https://github.com/heyitsyosh/42_libft/blob/main/libft/ft_lstmap.c) | Applies a function to each element of a list. |
