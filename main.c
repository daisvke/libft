#include <stdio.h>
#include <stdbool.h>

#include "libft.h"

typedef struct 
{
	int	a;
	int	b;
	char	c;
	bool	d;
}	t_struct;

int	main()
{
	t_struct	a;

	printf("a: %d\n", a.a);
	printf("b: %d\n", a.b);
	printf("c: %c\n", a.c);
	printf("d: %d\n\n\n", a.d);

	ft_bzero(&a, sizeof(a));

	printf("a: %d\n", a.a);
	printf("b: %d\n", a.b);
	printf("c: %c\n", a.c);
	printf("d: %d\n", a.d);
}
