/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armangri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 22:14:41 by armangri          #+#    #+#             */
/*   Updated: 2025/10/26 22:14:45 by armangri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

unsigned long	ft_atoi(const char *str)
{
	unsigned long	result;
	unsigned long	digit;
	int				i;

	result = 0;
	i = 0;
	while (str[i] && str[i] < 32)
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		digit = str[i] - '0';
		if (result > (ULONG_MAX - digit) / 10)
			return (ULONG_MAX);
		result = result * 10 + digit;
		i++;
	}
	return (result);
}
