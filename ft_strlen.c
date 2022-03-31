/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manu <manu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:40:23 by manu              #+#    #+#             */
/*   Updated: 2022/03/31 20:41:20 by manu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	number_characters;

	number_characters = 0;
	while (str && *str)
	{
		str++;
		number_characters++;
	}
	return (number_characters);
}
