/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vabsolue.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 11:19:09 by xgilbert          #+#    #+#             */
/*   Updated: 2018/08/09 11:23:16 by xgilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

intmax_t		ft_vabsolue(intmax_t nb)
{
	if (nb < 0)
		return (-nb);
	else
		return (nb);
}
