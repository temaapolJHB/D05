/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: temaapol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:38:09 by temaapol          #+#    #+#             */
/*   Updated: 2020/07/16 12:44:58 by temaapol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** *
 char *ft_strlowcase(char *str)
 {
    int j;

	j = 0;
	while(str[j])
	{
	   if(str[j] >= 'A' &&str[j] <= 'Z')
	   {
	     str[j]  += 32;
		 j++;
		 }
		return(str);

	}
}