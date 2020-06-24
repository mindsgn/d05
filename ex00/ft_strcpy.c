# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcpy.c                                          :+:      :+:    :+:  #
#                                                     +:+ +:+         +:+      #
#    By: stembe <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/24 10:21:14 by stembe            #+#    #+#              #
#    Updated: 2020/06/24 10:21:19 by stembe           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index = index + 1;
	}
	dest[index] = '\0';
	return (dest);
}
