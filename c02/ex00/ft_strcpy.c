/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 22:44:46 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/12 22:46:06 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	
	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

#include <stdio.h>
int		main(void)
{
	char src1[20];

	ft_strcpy(src1, "i love you");
	printf("%s \n", src1);
	
	char c[20];
	printf("%s \n", ft_strcpy(c, "12345678912345678900"));
	printf("%s \n", ft_strcpy(c, "ujuj"));
	printf("%s \n", ft_strcpy(c, "1234"));
}

