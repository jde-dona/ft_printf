#include "ft_printf.h"

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
	if (i == 0)
		return (0);
	return (i);
}

int	ft_print_s(char *c)
{
	if (!c)
	{
		return (ft_putstr("(null)"));
	}
	else
	{
		return (ft_putstr(c));
	}
}

int	ft_print_p(unsigned long int ptr)
{
	int	count;

	count = 0;
	if (!ptr)
	{
		return (ft_putstr("(nil)"));
	}
	count = ft_putstr("0x");
	count += ft_putnbr_basep(ptr, "0123456789abcdef");
	return (count);
}
