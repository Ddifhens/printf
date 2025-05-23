#include "ft_printf.h"

int	ft_printptr(void *ptr)
{
	int	p;

	p = 0;
	if (!ptr)
		return (ft_printstr("(nill)");
	p += ft_printstr("0x");
	return (p + (ft_puthex((unsigned long)ptr, 0)));
}
