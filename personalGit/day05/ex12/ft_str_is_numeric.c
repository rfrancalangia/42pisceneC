/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 00:28:56 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/15 11:29:21 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if ((*str < 48) || (*str > 57))
		{
			return (0);
		}
		str++;
	}
	return (1);
}