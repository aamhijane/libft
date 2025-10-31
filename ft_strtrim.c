/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayamhija <ayamhija@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 22:42:38 by ayamhija          #+#    #+#             */
/*   Updated: 2025/10/30 22:43:06 by ayamhija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_trimfrom(char const *s1, char const *set)
{
	size_t i, j;

	for (i = 0; (s1[i] != '\0'); i++)
	{
		j = 0;
		while (set[j] != '\0' && set[j] == s1[i + j])
			j++;

		printf("I = %zu\n", i);
		printf("J = %zu\n", j);
		printf("I + J = %zu\n", j + i);
		if (s1[i + j] == '\0')
			return 1;
		else if (i - j == 0)
			return 0;
	}
	return 2;
}

char *ft_strtrim(char const *s1, char const *set)
{
	// size_t setlen = ft_strlen((char *)set);
	// size_t s1len = ft_strlen((char *)s1);
	// size_t total_size;


	if (ft_trimfrom(s1, set) == 0)
		printf("REMOVE CHARACTERS FROM THE START.");
	else if (ft_trimfrom(s1, set) == 1)
		printf("REMOVE CHARACTERS FROM THE END.");
		// total_size = s1len - s1len;
	// else
		// total_size = s1len;

	// char *s1_copy = malloc(total_size);
	// if (s1_copy == NULL)
	// 	return NULL;


	return NULL;
}

int main(void)
{
	char const *s1 = "Hello Ayman! how are you?";
	char const *set = "you?";

	printf("%s\n", ft_strtrim(s1, set));
	return 0;
}
