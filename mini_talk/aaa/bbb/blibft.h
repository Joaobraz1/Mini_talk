/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-o <joaobraz1204@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:28:49 by jpedro-o          #+#    #+#             */
/*   Updated: 2022/07/22 15:44:17 by jpedro-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(const char *str);
int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
char	*ft_joinl(char const *s1, char l);

#endif
