/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugarc <manugarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:48:35 by manugarc          #+#    #+#             */
/*   Updated: 2022/04/12 11:26:38 by manugarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	digito_0_ascii;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	digito_0_ascii = 48;
	if (n < 0)
	{
		n *= -1;
		_putchar('-', fd);
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		n = n % 10;
	}
	if (n < 10)
		_putchar(n + digito_0_ascii, fd);
}
