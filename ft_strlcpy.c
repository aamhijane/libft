#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	if (size > 0)
	{
		for (i = 0; i < size - 1 && src[i] != '\0'; i++)
				dst[i] = src[i];
		
		dst[i] = '\0';
	}

	return ft_strlen((char *)src);
}
