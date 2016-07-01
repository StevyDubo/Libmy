/*
** my_str_to_wordtab.c for  in /home/stevy/depot_exo/dubo_s/Jour07/dubo_s/my_str_to_wordtab
** 
** Made by DUBO Stévy
** Login   <dubo_s@etna-alternance.net>
** 
** Started on  Mon Oct 26 15:01:19 2015 DUBO Stévy
** Last update Mon Nov 23 14:07:02 2015 DUBO Stévy
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	is_alpha(char c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
    {
      return (1);
      return (0);
    }
}

int	count_word(char *str)
{
  int	i;
  int	k;
  int	count;
  
  i = 0;
  count = 0;
  while (str[i] != '\0')
    {
      if (is_alpha(str[i]) == 1)
	{
	  while (is_alpha(str[i]) != 0)
	    {
	      i = i + 1;
	      count = count + 1;
	    }
	}
    }
  return count;
}

int	*count_car(char *str)
{
  int	j;
  int	i;
  int	*tab;
  int	nbr_car;

  i = 0;
  j = 0;
  nbr_car = 0;
  while ((str[i] != '\0') && (is_alpha(str[i]) != 0))
    {
      if (is_alpha(str[i]) == 0)
	{
	  while (is_alpha(str[i]) != 0)
	    {
	      i = i + 1;
	      nbr_car = nbr_car + 1;
	    }
	  tab[j] = nbr_car;
	  j = j + 1;
	}
      i = i + 1;
    }
  return tab;
}

char	**my_str_to_wordtab(char *src)
{
  int	l;
  int	j;
  int	y;
  char	**str;

  j = 0;
  l = 0;
  y = 0;
  str = malloc(sizeof(*str) * (count_word(src) + 1));
  while (y <= count_word(src))
    {
      str[y] = malloc(sizeof(str) * (count_car(src)[y] + 1));
      while ((src[l] != '\n') && (src[l] != '\0') && (is_alpha(src[l]) != 0))
	{
	  str[y][j] = src[l];
	  j++;
	  l++;
	}
      y++;
    }
  str[count_word(src) + 1] = NULL;
  return (str);
}
