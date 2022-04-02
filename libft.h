/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugarc <manugarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:54:40 by manugarc          #+#    #+#             */
/*   Updated: 2022/04/02 17:14:43 by manugarc         ###   ########.fr       */
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
extern	int		ft_strncmp(char *s1, char *s2, size_t n);
extern	int		ft_atoi(const char *str);
extern	void		ft_bzero(void *s, size_t n);
extern	void		*ft_memset(void *b, int c, size_t len);
extern	void		*ft_calloc(size_t count, size_t size);
extern	void		*ft_memcpy(void *dst, const void *src, size_t n);
extern	char		*ft_strdup(const char *s1);
extern	char		*ft_strchr(const char *s, int c);

#endif
