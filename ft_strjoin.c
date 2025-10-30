/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayamhija <ayamhija@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:32:53 by ayamhija          #+#    #+#             */
/*   Updated: 2025/10/30 16:46:32 by ayamhija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t i;
	size_t s1_len = ft_strlen((char *)s1);
	size_t s2_len = ft_strlen((char *)s2);
	size_t total_size = s1_len + s2_len;

	char *s = malloc(total_size);
	if (s == NULL)
		return NULL;

	for (i = 0; i < s1_len; i++)
		ft_memset(s + i, s1[i], 1);

	for (i = 0; i < s2_len; i++)
		ft_memset(&s[s1_len + i], s2[i], 1);

	s[total_size] = '\0';
	return s;
}
