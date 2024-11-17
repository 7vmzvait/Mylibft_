/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitaabe <haitaabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:16:31 by haitaabe          #+#    #+#             */
/*   Updated: 2024/11/14 20:06:21 by haitaabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cdest;
	char	*csrc;

	cdest = (char *)dst;
	csrc = (char *)src;
	if (!dst && !src)
		return (0);
	if (dst <= src)
	{
		while (len--)
		{
			*cdest++ = *csrc++;
		}
	}
	else if (dst > src)
	{
		cdest += len - 1;
		csrc += len - 1;
		while (len--)
		{
			*cdest-- = *csrc--;
		}
	}
	return (dst);
}
