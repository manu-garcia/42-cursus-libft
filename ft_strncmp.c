/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manu <manu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:27:52 by manu              #+#    #+#             */
/*   Updated: 2022/04/01 18:30:55 by manu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	cont;
	size_t	result;

	if (!s1 && !s2)
		return (0);
	if (s1 && !s2)
		return (-1);
	if (!s1 && s2)
		return (1);
	result = 0;
	cont = 0;
	while (cont < n && s1[cont] && s2[cont] && result == 0)
	{
		result = s1[cont] - s2[cont];
		cont++;
	}
	if (result != 0)
		return (result);
	if (cont == n)
		return (0);
	return (s1[cont] - s2[cont]);
}
