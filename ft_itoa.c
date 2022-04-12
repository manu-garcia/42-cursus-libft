/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugarc <manugarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:44:29 by manugarc          #+#    #+#             */
/*   Updated: 2022/04/12 17:00:01 by manugarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	get_num_lenght(int n)
{
	int	lenght;

	lenght = 0;
	if (n < 0)
	{
		lenght += 1;
		n *= -1;
	}
	if (n == 0)
		return (lenght + 1);
	while (n > 0)
	{
		n /= 10;
		lenght++;
	}
	return (lenght);
}

static char	*_itoa(int n, char *str, int lenght)
{
	int	i;

	str[lenght] = '\0';
	i = lenght - 1;
	while (i >= 0)
	{
		str[i] = n + '0';
		i--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		lenght;
	int		mod;
	char	*str;

	lenght = get_num_lenght(n);
	str = (char *) malloc(lenght + 1);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		_itoa(n, str + 1, lenght - 1);
	}
	else
		_itoa(n, str, lenght);
	return (str);
}
