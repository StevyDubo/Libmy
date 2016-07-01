/*
** my_strcmp.c for  in /home/stevy/depot_exo/dubo_s/Jour04C/dubo_s/my_strcmp
** 
** Made by DUBO Stévy
** Login   <dubo_s@etna-alternance.net>
** 
** Started on  Thu Oct 22 12:02:06 2015 DUBO Stévy
** Last update Sat Oct 31 09:24:21 2015 DUBO Stévy
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	my_strcmp(char *s1, char *s2)
{
  int	i;
  int	j;
  
  i = 0;
  j = 0;
  while ((s1[i] != '\0') || (s2[j] != '\0'))
    {
      if (s1[i] < s2[j])
	  return -1;
      else if (s1[i] == s2[j])
	{
	  i++;
	  j++;
	}
      else
	return 1;
    }
  return 0;
}
