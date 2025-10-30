/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayamhija <ayamhija@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:34:26 by ayamhija          #+#    #+#             */
/*   Updated: 2025/10/30 14:48:36 by ayamhija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *strdup(const char *s)
{
	size_t i;
	size_t len;
	char *dup;

	len = ft_strlen((char *)s) + 1;

	dup = malloc(len);
	if (dup == NULL)
		return NULL;

	for (i = 0; s[i] != '\0'; i++)
		dup[i] = s[i];

	dup[i] = '\0';

	return dup;
}
