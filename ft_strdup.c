/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugarc <manugarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:58:04 by manugarc          #+#    #+#             */
/*   Updated: 2022/04/02 17:00:40 by manugarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	void	*ptr;
	int		len;

	len = ft_strlen((char *)s1);
	if (!len)
		return (NULL);
	ptr = (char *)malloc(len + 1);
	if (!ptr)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_strlcpy(ptr, (char *)s1, len + 1);
	return (ptr);
}
