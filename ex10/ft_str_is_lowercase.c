/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: temaapol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 13:22:22 by temaapol          #+#    #+#             */
/*   Updated: 2020/07/16 13:25:38 by temaapol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_lowercase(char *str)
{

	int j;

	j = 0;
    while (str[j])
	{
		if(!(str[j] >= 'a' && str[j] <= 'z'))
		{
			return (0);
		}
		j++;
	 } 
	  return(1);
}
