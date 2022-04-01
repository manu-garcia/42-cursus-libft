/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manu <manu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:12:18 by manu              #+#    #+#             */
/*   Updated: 2022/04/01 18:14:41 by manu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	cont;
	size_t	len_src;
	size_t	len_dest;

	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (!dest || !src || !size)
		return (len_src + len_dest);
	cont = 0;
	while ((cont + len_dest) < (size - 1) && src[cont])
	{
		dest[len_dest + cont] = src[cont];
		cont++;
	}
	dest[len_dest + cont] = '\0';
	return (len_src + len_dest);
}
