#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s_one = (unsigned char *)s1;
	unsigned char *s_two = (unsigned char *)s2;

	for (size_t i = 0; i < n && (s_one[i] != '\0' || s_two[i] != '\0'); i++) 
	{
		if (s_one[i] != s_two[i])
			return s_one[i] - s_two[i];
	}
	return 0;
}
