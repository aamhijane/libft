/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_substr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayamhija <ayamhija@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:57:08 by ayamhija          #+#    #+#             */
/*   Updated: 2025/10/30 14:57:38 by ayamhija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	size_t total_size;
	char *str;

	total_size = len + 1;

	str = malloc(len);
	if (str == NULL)
		return NULL;

	i = 0;
	while (len > i && s[i])
	{
		str[i] = s[start + i];
		i++;
	}

	str[i] = '\0';

	return str;
}
