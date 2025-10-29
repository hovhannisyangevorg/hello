/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armangri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 22:13:54 by armangri          #+#    #+#             */
/*   Updated: 2025/10/26 22:14:01 by armangri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_lib.h"

void	free_all(char *file, char **lines, t_dict *dict)
{
	int	i;
	int	size;

	i = -1;
	size = ft_count_lines(file);
	if (file)
		free(file);
	if (lines)
	{
		while (lines[++i])
			free(lines[i]);
		free(lines);
	}
	i = -1;
	if (dict)
	{
		while (++i < size)
		{
			if (dict[i].key)
				free(dict[i].key);
			if (dict[i].value)
				free(dict[i].value);
		}
		free(dict);
	}
}
