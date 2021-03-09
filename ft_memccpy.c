#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char*)src;
	while (n--)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
			return (d + i + 1);
		i++;
	}
	return (0);
}


#include <stdio.h>
#include <string.h>

// ex:		./a.out "jklmnoprstuvwxyz" "abcdefghi" e 7
/*
int	main(int argc, char *argv[])
{
	char	*s;
	char	*s2;

	if (argc == 5)
	{
		s = argv[1];
		s2 = argv[1];
		printf("\nft_memccpy :\t%s\n", (char *)ft_memccpy(s, \
													argv[2], \
													argv[3][0], \
													ft_atoi(argv[4])));
		printf("memccpy :\t%s\n", (char *)memccpy(s2, \
													argv[2], \
													argv[3][0], \
													ft_atoi(argv[4])));
	}
	printf("\n");
	return (0);
}*/

// ex:		./a.out 254 25
int	main(int argc, char *argv[])
{
	char	s[] = {'a', 'b', 254, 'o', 'k', '\0'};
	char	s2[] = {'a', 'b', 254, 'o', 'k', '\0'};

	char src[4] = {'c', 'd', 254};
	char src2[4] = {'c', 'd', 254};

	if (argc == 3)
	{
		printf("\nft_memccpy :\t%s\n", (char *)ft_memccpy(s, \
												src, \
												ft_atoi(argv[1]), \
												ft_atoi(argv[2])));
		printf("memccpy :\t%s\n", (char *)memccpy(s2, \
												src2, \
												ft_atoi(argv[1]), \
												ft_atoi(argv[2])));
	}
	printf("\n");
	return (0);
}


