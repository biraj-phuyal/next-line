/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 22:17:37 by biphuyal          #+#    #+#             */
/*   Updated: 2025/07/10 22:17:43 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.c"
#include <unistd.h>
#include <stdlib.h>

char *malloc_line(char *line)
{
  char *malloced_line;
  int i;
  int j;

  j = 0;
  i = 0;
  while (line && line[i])
    i++;
  malloced_line = malloc(i + 1);
  while (*line != '\0')
  {
    *malloced_line = *line;
    line++;
  }
  return (malloced_line);
}

char *ft_strjoin(char *str, char *buff)
{
  char *line;
  size_t j;

  j = 0;
  line = str;
  while (buff[j] != '\n')
  {
    line[j] = buff[j];
    j++;
  }
  line[j] = '\0';
  j++;
  line[j] = '\n';
  malloc_line(line);
  return (line);
}

int has_newline(char *str)
{
  int i;
  
  i = 0;
  if (!str)
    return (-1);
  while (str[i])
  {
    if (str[i] == '\n')
      return (-1);
    i++;
  }
  return (0);
}