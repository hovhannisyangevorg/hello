/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armangri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 22:16:11 by armangri          #+#    #+#             */
/*   Updated: 2025/10/26 22:16:16 by armangri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "mini_lib.h"

t_dict	*create_arr(char **arr, int size)
{
	t_dict	*keys_values;
	int		i;
	int		sep;
	int		val_len;

	i = 0;
	keys_values = malloc(sizeof(t_dict) * size);
	while (i < size)
	{
		sep = ft_find_char(arr[i], ':');
		keys_values[i].key = ft_substr(arr[i], 0, sep);
		val_len = ft_strlen(arr[i] + sep + 1);
		keys_values[i].value = malloc(val_len + 1);
		ft_strcpy(keys_values[i].value, arr[i] + sep + 1);
		i++;
	}
	return (keys_values);
}
