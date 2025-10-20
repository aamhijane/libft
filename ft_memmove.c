/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayamhija <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:17:16 by ayamhija          #+#    #+#             */
/*   Updated: 2025/10/18 19:46:55 by ayamhija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
  char *ds = (char *)dest;
  const char *sr = (const char *)src;
  size_t i;

  if (ds < sr)
  {
    for (i = 0; i < n; i++)
      ds[i] = sr[i];
  }
  else if (ds > sr)
  {
    for (i = n; i-- > 0; )
      ds[i] = sr[i];
  }

  return dest;
}
