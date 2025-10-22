#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_len = ft_strlen(dst);
    size_t src_len = ft_strlen((char *)src);
    size_t i;

    if (dst_len >= size) {
        return size + src_len;
    }

    for (i = 0; i < src_len && dst_len + i < size - 1; i++) {
        dst[dst_len + i] = src[i];
    }
    dst[dst_len + i] = '\0';

    return dst_len + src_len;
}
