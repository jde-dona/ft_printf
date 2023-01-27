#include "ft_printf.h"

int	ft_putnbr_basex(unsigned int nbr, int casex)
{
	if (casex == 1)
		return (ft_putnbr_basep(nbr, "0123456789abcdef"));
	else
		return (ft_putnbr_basep(nbr, "0123456789ABCDEF"));
}

int	ft_putnbr_baseu(unsigned int nbr)
{
	unsigned int		nb;
	int					count;	

	nb = nbr;
	if (nb >= 10)
	{
		count = ft_putnbr_baseu((nb / 10));
		count += ft_putnbr_baseu((nb % 10));
		return (count);
	}
	else
		return (ft_putchar((nb + '0')));
}

int	ft_putnbr_basep(unsigned long int nbr, char *base)
{
	unsigned long int	nb;
	int					count;

	nb = nbr;
	if (nb >= 16)
	{
		count = ft_putnbr_basep((nb / 16), base);
		count += ft_putnbr_basep((nb % 16), base);
		return (count);
	}
	else
		return (ft_putchar(base[nb]));
}

int	ft_putnbr(int nb)
{
	int	nbr;
	int	count;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = (unsigned int)(nb * -1);
		count = 1;
	}
	else
	{
		nbr = (unsigned int)nb;
		count = 0;
	}
	count += ft_putnbr_baseu(nbr);
	return (count);
}
