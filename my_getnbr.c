/*
** my_getnbr.c for  in /home/stevy/depot_exo/dubo_s/Roulette
**
** Made by DUBO Stévy
** Login   <dubo_s@etna-alternance.net>
**
** Started on  Sat Oct 24 11:49:34 2015 DUBO Stévy
** Last update Tue Nov 24 11:01:14 2015 DUBO Stévy
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	my_getnbr(char *str)
{
  int	neg;
  int	i;
  int	n;

  neg = 1;
  i = 0;
  n = 0;
  while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
    {
      if (str[i] == '-')
	neg = neg * -1;
      i++;
    }
  while ('0' <= str[i] && str[i] <= '9')
    {
      n = n * 10;
      n = n + (str[i] - '0');
      if (n < 0)
	if (n != -2147483648 || neg == 1)
	  {
	    return (0);
	  }
      i++;
    }
  return (n);
}
