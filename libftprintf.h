/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 08:43:51 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/10/12 14:22:46 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>

typedef struct	s_specs
{
	int	hash;
	int	space;
	int	plus;
	int	minus;
	int	zero;
	int	width;
}		t_specs;

# define specifiers	"cspdiuxX%"

int	ft_printf(const char *str, ...);

t_specs	ft_spec_default(void);

void	ft_putchar_fd(char c, int fd);

#endif
