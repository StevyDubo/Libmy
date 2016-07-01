/*
** my_strncpy.c for  in /home/stevy/depot_exo/dubo_s/Jour04C/dubo_s/my_strncpy
** 
** Made by DUBO Stévy
** Login   <dubo_s@etna-alternance.net>
** 
** Started on  Thu Oct 22 11:28:44 2015 DUBO Stévy
** Last update Thu Nov 19 14:50:43 2015 DUBO Stévy
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*my_strcpy(char *dest, char *src);
int	my_strlen(char *str);

char	*my_strncpy(char *dest, char *src, int n)
{
  int	k;

  k = 0;
  if (n < my_strlen(src) && k < n)
    {
      my_strcpy(dest, src);
    }
  else
    {
      return (NULL);
    }
  return (dest);
}
