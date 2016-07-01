/*
** my_strcpy.c for  in /home/stevy/depot_exo/dubo_s/Jour04C/dubo_s/my_strcpy
** 
** Made by DUBO Stévy
** Login   <dubo_s@etna-alternance.net>
** 
** Started on  Thu Oct 22 10:22:13 2015 DUBO Stévy
** Last update Thu Nov 19 12:04:14 2015 DUBO Stévy
*/
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  return (dest);
}
