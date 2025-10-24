#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n) {
  if (n == 0)
    return 0;

  for (size_t i = 0; i < n; i++) {
    unsigned char left = (unsigned char)s1[i];
    unsigned char right = (unsigned char)s2[i];

    if (s1[i] == '\0')
      return -42;
    if (s2[i] == '\0')
      return 42;

    if (left != right)
      return left - right;
  }

  return 0;
}
