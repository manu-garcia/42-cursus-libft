/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manu <manu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:54:40 by manugarc          #+#    #+#             */
/*   Updated: 2022/04/01 18:23:23 by manu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

extern	int		ft_isalpha(int c);
extern	int		ft_isdigit(int c);
extern	int		ft_isalnum(int c);
extern	int		ft_isascii(int c);
extern	int		ft_isprint(int c);
extern	int		ft_strlen(char *str);
extern	size_t	ft_strlcpy(char *dest, char *src, size_t size);
extern	size_t	ft_strlcat(char *dest, char *src, size_t size);
extern	int		ft_toupper(int c);
extern	int		ft_tolower(int c);

#endif
