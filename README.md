# ft_printf

## 🚀 Purpose
Emulates the printf function

### 📜 Format specifiers:
* c - single character
* s - string
* p - pointer (in hexadecimal format prefixed with 0x)
* d - signed decimal integer
* i - signed decimal integer (alternative for d)
* u - unsigned decimal integer
* x - unsigned hexadecimal numnber (lowercase letters)
* X - unsigned hexadecimal numnber (capital letters)
* % - literal % symbol

## ⚙️ How to compile
With main.c file:
* make
* cc -Wall -Werror -Wextra main.c libftprintf.a // cc -Wall -Werror -Wextra main.c -L. -lftprintf
* ./a.out
  *Note: -l use searchs a library which starts by lib (libftprintf.a in this case).*

## 🌐 Related links
[va_list info](https://hackernoon.com/what-is-va_list-in-c-exploring-the-secrets-of-ft_printf)


##  🤝Contributions
Contributions are welcome! Open an issue or submit a pull request to suggest improvements or fixes.
