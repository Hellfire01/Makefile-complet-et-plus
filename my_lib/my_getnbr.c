/*
** my_getnbr.c for my_getnbr in /home/raynau_a/rendu/Piscine-C-lib/my
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Wed Oct  9 15:39:20 2013 a
** Last update Sat Jan 25 01:23:52 2014 a
*/

#include	"my.h"

int	neg2(char *str)
{
  int	countera;
  int 	counterb;

  countera = 0;
  counterb = 0;
  while ((str[countera] == '-' || str[countera] == '+') \
	 && str[countera] != '\0')
    {
      if (str[countera] == '-')
	{
	  counterb = counterb + 1;
	}
      countera = countera + 1;
    }
  if (counterb % 2 == 0)
    return (0);
  else
    return (1);
}

int	number2(char c)
{
  if (c >= '0' && c <= '9')
    return (1);
  else
    return (0);
}

int	my_getnbr(char *str)
{
  int	counter;
  int	nbr;
  char	*message;

  nbr = 0;
  counter = 0;
  message = "la taille de l'int est depassee";
  while (number2(str[counter]) == 0)
    counter = counter + 1;
  while (number2(str[counter]) == 1)
    {
      if (nbr > 214748364)
	{
	  my_putstr(message);
	  return (0);
	}
      else if (nbr == 214748364 && str[counter] > '7')
	{
	  my_putstr(message);
	  return (0);
	}
      nbr = nbr * 10 + str[counter] - 48;
      counter = counter + 1;
    }
  if (neg2(str) == 1)
    nbr = nbr * (-1);
  return (nbr);
}