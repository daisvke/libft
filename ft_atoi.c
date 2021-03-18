#include "libft.h"

int	ft_atoi(const char *str)
{
	int				sign;
	int				s_count;
	unsigned long	res;

	while (ft_isws(*str))
		str++;
	sign = 1;
	s_count = 0;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		s_count++;
		str++;
	}
	if (s_count > 1)
		return (0);
	res = 0;
	while (ft_isdigit(*str))
	{
		res = res * 10 + *str - 48;
		str++;
	}
	if (res > 9223372036854775807)
	{
		if (sign == 1)
			return (-1);
		if (sign == -1)
			return (0);
	}
	return (res * sign);
}
