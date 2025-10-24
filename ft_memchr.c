#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str = (unsigned char *)s;
	unsigned char chr = (unsigned char)c;

	for (size_t i = 0; (i < n && str[i] != '\0'); i++)
	{
		if (str[i] == chr)
			return &str[i];
	}
	return NULL;
}
