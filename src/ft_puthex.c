#include "ft_printf.h" 

int	ft_puthex(unsigned long nb, int cap)
{
	char	*table;
	int	p = 0;

	if (cap)
		table = "0123456789ABCDEF";
	else
		table = "0123456789abcdef";
	if (nb > 15)
	{
		p += (ft_puthex(nb / 16, cap));
		p += (ft_puthex(nb % 16, cap));
	}
	else
		p += (ft_putchar(table[nb]));
	return (p);
}
