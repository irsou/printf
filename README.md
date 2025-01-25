# ft_printf

 Emulates the printf function
  Format specifiers:
		c - single character
 		s - string
 		p - pointer (in hexadecimal format prefixed with 0x)
 		d - signed decimal integer
 		i - signed decimal integer (alternative for d)
 		u - unsigned decimal integer
 		x - unsigned hexadecimal numnber (lowercase letters)
 		X - unsigned hexadecimal numnber (capital letters)
 		% - literal % symbol

Compilación con archivo main:
make
cc -Wall -Werror -Wextra main.c ft_printf.a
./a.out

  X cc -Wall -Werror -Wextra main.c -L. -lftprintf  no valdría porque el -l busca un archivo que empiece por lib, buscaría libftprintf.a
Compilación en línea:
make
echo '#include "ft_printf.h" int main(void) { ft_printf("%u\n", (unsigned int)4294967295); return 0; }' | cc -Wall -Werror -Wextra -x c - ft_printf.a && ./a.out


Enlaces de interés:
https://hackernoon.com/what-is-va_list-in-c-exploring-the-secrets-of-ft_printf
