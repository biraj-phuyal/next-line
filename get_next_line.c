/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 22:17:40 by biphuyal          #+#    #+#             */
/*   Updated: 2025/07/10 22:17:42 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

char *get_next_line(int fd)
{
    char *str;
    static char buff[BUFFER_SIZE];
    int index;

    if (fd <= 0 || BUFFER_SIZE <= 0)
      return (NULL);
    index = 1;
    str = NULL;
    while(!has_newline(str))
    {
      index = read(fd, buff, BUFFER_SIZE);
      if (index < 0)
        return (NULL);
      if (index == 0)
        break ;
      str = ft_strjoin(str, buff);
      
    }
}
