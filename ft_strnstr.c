#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char *b = (char *)big;
	char *l = (char *)little;
	size_t llen = ft_strlen(l);

	if (*l == '\0')
		return (b); 
	
	for(size_t i = 0; (i < len && b[i] != '\0' && i + llen <= len); i++)
	{
		size_t j = 0;
		while (j < llen && b[i + j] == l[j])
			j++;

		if (j == llen)
			return &b[i];
	}

	return NULL;
}
