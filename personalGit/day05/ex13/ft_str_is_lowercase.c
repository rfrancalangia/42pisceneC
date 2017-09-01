/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 11:41:40 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/15 11:56:24 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if ((*str < 'a') || (*str > 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}