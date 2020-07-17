/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: temaapol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:15:24 by temaapol          #+#    #+#             */
/*   Updated: 2020/07/17 15:35:36 by temaapol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */char *ft_str(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	while(str[i] != '\0')
	{
       j = 0;
		while(to_find[j] == str[i + j])
		{
			if(to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	
}
