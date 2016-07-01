/*
** my_strncat.c for  in /home/stevy/depot_exo/dubo_s/Jour04C/dubo_s/my_strncat
** 
** Made by DUBO Stévy
** Login   <dubo_s@etna-alternance.net>
** 
** Started on  Thu Oct 22 15:13:29 2015 DUBO Stévy
** Last update Tue Nov 24 11:00:29 2015 DUBO Stévy
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	my_strlen(char *str);

char	*my_strncat(char *s1, char *s2, int n)
{
  int	i;
  int	len;

  len = my_strlen(s1);
  for (i = 0; s2[i] != '\0' && i < n; i++)
    {
      s1[len + i] = s2[i];
    }
  s1[len + i] = '\0';
  return (s1);
}
