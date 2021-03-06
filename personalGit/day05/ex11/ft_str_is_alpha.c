/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 00:28:56 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/15 11:42:36 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (((*str < 'a') || (*str > 'z')) && ((*str < 'A') || (*str > 'Z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
