/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 22:17:37 by biphuyal          #+#    #+#             */
/*   Updated: 2025/07/13 13:38:22 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.c"
#include <unistd.h>
#include <stdlib.h>

char *move_buffer(char *buff)
{
	size_t	i;
	size_t	j;
	char	*new_buff;

	i = 0;
	while (buff[i] && buff[i] != '\n')
		i++;
	if (!buff[i])
		return (NULL);
	new_buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!new_buff)
		return (NULL);
	j = 0;
	while (buff[++i])
		new_buff[j++] = buff[i];
	new_buff[j] = '\0';
	return (new_buff);
}

char *ft_strjoin(char *str, char *buff)
{

}

int has_newline(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			return (1);
			i++;
		}
	}

	return (0);
}