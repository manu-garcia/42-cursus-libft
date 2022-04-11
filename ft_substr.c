/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manu <manu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:01:43 by manu              #+#    #+#             */
/*   Updated: 2022/04/11 15:17:56 by manu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <errno.h>
#include "libft.h"

char	*ft_substr(const char *s, size_t start, size_t size)
{
	char	*str;
	size_t	len_s;

	len_s = ft_strlen(s);
	if (!len_s || (start + size) > len_s)
		return (NULL);
	str = malloc(size + 1);
	if (!str)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_strlcpy(str, s + start, size + 1);
	return (str);
}
