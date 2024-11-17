/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitaabe <haitaabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:00:40 by haitaabe          #+#    #+#             */
/*   Updated: 2024/11/14 23:11:50 by haitaabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*s1;
	char	*s2;

	if (!dst && !src)
		return (0);
	s1 = (char *)dst;
	s2 = (char *)src;
	while (n--)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	return (dst);
}
