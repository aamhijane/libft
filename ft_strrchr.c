#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	size_t oslen = ft_strlen((char *)s);
	size_t slen = ft_strlen((char *)s);
	size_t i = 0;

	while(i < slen - 1)
	{
		if (s[slen] == c)
			return (char *)&s[slen];
		slen--;
	}
	return (char *)&s[oslen];
}
