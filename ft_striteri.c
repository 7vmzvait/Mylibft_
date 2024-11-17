/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitaabe <haitaabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:34:53 by haitaabe          #+#    #+#             */
/*   Updated: 2024/11/15 21:57:57 by haitaabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))

{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void	t_toupper(unsigned int i,char *c)
// {
// 	(void) i;
// 	int x = 0;
// 	if (c[x] >= 97 && c[x] <= 122)
// 		c[x] -= 32;
// }
// #include <stdio.h>
// int main(void)
// {
// 	char str[] = "hamza";
// 	ft_striteri(str,t_toupper); 
// 	printf("%s", str);
// }