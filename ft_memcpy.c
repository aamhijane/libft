/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayamhija <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:52:51 by ayamhija          #+#    #+#             */
/*   Updated: 2025/10/17 17:52:53 by ayamhija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *ds = (unsigned char *)dest;
	const unsigned char *sr = (const unsigned char *)src;

	size_t	i = 0;

	while (i < n)
	{
		ds[i] = sr[i];
		i++;
	}

	return dest;
}
