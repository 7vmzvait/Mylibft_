/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitaabe <haitaabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:16:48 by haitaabe          #+#    #+#             */
/*   Updated: 2024/11/16 20:24:22 by haitaabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*s1;

	s1 = (unsigned char *)str;
	while (len-- > 0)
	{
		*s1 = (unsigned char)c;
		s1++;
	}
	return (str);
}
#include <stdio.h>
int main(void)
{
	int s;
	ft_memset(s, 255, 4);
	ft_memset(s, 5, 2);
	ft_memset(s, 57, 1);
	printf("%d", s);
	
}