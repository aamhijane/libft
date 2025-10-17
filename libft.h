/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayamhija <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:46:57 by ayamhija          #+#    #+#             */
/*   Updated: 2025/10/17 17:49:00 by ayamhija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

#define LIBFT_H

#include <stddef.h>

void    ft_bzero(void *s, size_t n);
void    *ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t  ft_strlen(char *str);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isdigit(int n);
int	ft_isascii(int c);
int	ft_isprint(int c);

#endif
