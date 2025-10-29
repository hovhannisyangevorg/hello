/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armangri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 22:11:10 by armangri          #+#    #+#             */
/*   Updated: 2025/10/26 22:11:19 by armangri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

char	*read_file_simple(char *filename)
{
	int		fd;
	int		bytes;
	char	buffer[1024];
	char	*content;
	int		i;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (NULL);
	bytes = read(fd, buffer, 1024);
	content = malloc(bytes + 1);
	i = -1;
	while (++i < bytes)
		content[i] = buffer[i];
	content[bytes] = '\0';
	close(fd);
	return (content);
}
