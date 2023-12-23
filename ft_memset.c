/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaperce <ayaperce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 05:19:56 by ayaperce          #+#    #+#             */
/*   Updated: 2023/12/22 05:20:00 by ayaperce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*res;

	res = s;
	while (n)
	{
		*res = c;
		res++;
		n--;
	}
	return (s);
}
