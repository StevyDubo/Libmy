/*
** my_strncmp.c for  in /home/stevy/depot_exo/dubo_s/Jour04C/dubo_s
** 
** Made by DUBO Stévy
** Login   <dubo_s@etna-alternance.net>
** 
** Started on  Thu Oct 22 12:41:11 2015 DUBO Stévy
** Last update Fri Nov 20 09:57:13 2015 DUBO Stévy
*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;
  int	j;

  i = 0;
  while ((s1[i] != '\0') || (s2[i] != '\0'))
    {
      if (i < n && n < my_strlen(s1) && n < my_strlen(s2))
	if (s1[i] < s2[i])
	  {
	    return (-1);
	  }
	else if (s1[i] == s2[i])
	  {
	    return (0);
	  }
	else
	  {
	    return (1);
	  }
      i++;
    }
}
