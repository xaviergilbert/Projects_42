/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 15:30:09 by xgilbert          #+#    #+#             */
/*   Updated: 2019/04/01 14:52:40 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		taille_malloc(uintmax_t nb, uintmax_t base)
{
	int			i;

	i = 1;
	while (nb >= base)
	{
		i++;
		nb /= base;
	}
	return (i);
}

char			*ft_uitoa_base(uintmax_t nb, uintmax_t base)
{
	char		*str;
	int			p;

	p = taille_malloc(nb, base);
	if (base < 2 || 16 < base
	|| !(str = (char *)malloc(sizeof(char) * p + 2)))
		return (NULL);
	p = 0;
	while (base <= nb)
	{
		if (base > 10 && (nb % base >= 10))
			str[p++] = (nb % base) - 10 + 'a';
		else
			str[p++] = (nb % base) + '0';
		nb /= base;
	}
	base > 10 && (nb % base >= 10) ? str[p++] = (nb % base) - 10 + 'a' : 0;
	!(base > 10 && (nb % base >= 10)) ? str[p++] = (nb % base) + '0' : 0;
	p == 1 && base > 10 ? str[p++] = '0' : 0;
	str[p] = '\0';
	return (ft_strrev(str));
}
