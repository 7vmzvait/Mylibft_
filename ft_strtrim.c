/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitaabe <haitaabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:30:38 by haitaabe          #+#    #+#             */
/*   Updated: 2024/11/16 20:35:17 by haitaabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	its_set(char const s1, char const *s)
{
	while (*s)
	{
		if (s1 == *s)
			return (1);
		s++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*str;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[start] && its_set(s1[start], set) == 1)
		start++;
	while (end > start && its_set(s1[end - 1], set))
		end--;
	str = malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (end > start)
	{
		str[i++] = s1[start++];
	}
	str[i] = '\0';
	return (str);
}
int main(void)
{
	char str[] = ",,,,,,, wash akhy ,,,,,,,, hello ,,,,,,,,";
	char str2[] = ",";
	char *res = ft_strtrim(str, str2);
	printf("%s", res);
}