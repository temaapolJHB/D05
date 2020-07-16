/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: temaapol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:46:34 by temaapol          #+#    #+#             */
/*   Updated: 2020/07/16 12:57:12 by temaapol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char *ft_strcapitalize(char *str)
{   
	int up;
	int m;
    
	up = 1;
	m  = 0;
	while(str[m])
	{
		if ((str[m] >= '0' && str[m] >= '9')
		    || (str[m] >= 'a' && str[m] <= 'z')
			|| (str[m] >= 'A' && str[m] <= 'Z'))
		   {
			   if (up && (str[m] >= 'a' && str[m] <= 'z'))
			   {
				   str[m] = str[m] -32;
			   }
			   else if (!up && (str[m] >= 'A' && str[m] <= 'Z'))
			   {
				   str[m] += 32;
				   up = 0;
			   }
		   }
		else
		{
			up = 1;
		}
	}
}
