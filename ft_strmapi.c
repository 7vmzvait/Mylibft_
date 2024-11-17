/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitaabe <haitaabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:34:07 by haitaabe          #+#    #+#             */
/*   Updated: 2024/11/15 21:21:20 by haitaabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char	t_toupper(unsigned int i,char c)
// {
// 	(void) i;
// 	if (c >= 97 && c <= 122)
// 		c -= 32;
// 	return (c);
// }
// #include <stdio.h>
// int main(void)
// {
// 	char *s = ft_strmapi("hello",t_toupper);
// 	printf("%s", s);
// }