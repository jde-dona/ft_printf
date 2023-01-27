#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_print_s(char *c);
int	ft_print_p(uintptr_t ptr);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int nb);
int	ft_putnbr_baseu(unsigned int nbr);
int	ft_putnbr_basex(unsigned int nbr, int lowercase);
int	ft_putnbr_basep(unsigned long int nbr, char *base);

#endif
