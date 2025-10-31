#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_len;
    size_t src_len = ft_strlen((char *)src);
    size_t i;

    if (size == 0)
        return src_len;
    dst_len = ft_strlen(dst);

    if (dst_len >= size) {
        return size + src_len;
    }

    for (i = 0; i < src_len && dst_len + i < size - 1; i++) {
        dst[dst_len + i] = src[i];
    }
    dst[dst_len + i] = '\0';

    return dst_len + src_len;
}

int main(int argc, char *argv[])
{
    #include <bsd/string.h>

    printf("%zu\n", strlcat(NULL, "Hello", 3));
    printf("%zu\n", ft_strlcat(NULL, "Hello", 3));
    return 0; 
}
