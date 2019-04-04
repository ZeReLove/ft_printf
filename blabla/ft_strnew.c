/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolfe <mrolfe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 20:37:50 by bconwy            #+#    #+#             */
/*   Updated: 2019/04/03 18:09:21 by mrolfe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strnew(size_t size)
{
	char	*chstr;
	size_t	i;

	i = 0;
	chstr = (char *)malloc(sizeof(char) * (size + 1));
	if (chstr)
	{
		while (i < size)
		{
			chstr[i] = 0;
			i++;
		}
		chstr[i] = '\0';
		return (chstr);
	}
	else
		return (NULL);
}
