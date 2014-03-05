/*
** my_strcat.c for header in /home/raynau_a/rendu/PSU_2013_minishell1/my_lib
** 
** Made by matthieu raynaud de fitte
** Login   <raynau_a@epitech.net>
** 
** Started on  Wed Feb 26 18:10:31 2014 matthieu raynaud de fitte
** Last update Wed Feb 26 21:42:59 2014 matthieu raynaud de fitte
*/

#include "my.h"
#include <stdlib.h>

char	*my_strcat(char *stra, char *strb)
{
  char	*out;
  int	len;
  int	i;
  int	a;

  i = 0;
  a = 0;
  len = my_strlen(stra) + my_strlen(strb) + 1;
  if ((out = malloc((len) * sizeof(char))) == NULL)
    return (NULL);
  l_init(out, len);
  while (stra[i] != '\0')
    {
      out[i] = stra[i];
      i = i + 1;
    }
  while (strb[a] != '\0')
    out[i++] = strb[a++];
  out[i + 1] = '\0';
  return (out);
}