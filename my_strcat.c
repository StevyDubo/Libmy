/*
** my_strcat.c for  in /home/stevy/depot_exo/dubo_s/Jour04C/dubo_s/my_strcat
** 
** Made by DUBO Stévy
** Login   <dubo_s@etna-alternance.net>
** 
** Started on  Thu Oct 22 13:33:25 2015 DUBO Stévy
** Last update Tue Nov 24 10:30:28 2015 DUBO Stévy
*/
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	my_strlen(char *str);

char     *my_strcat(char *s1, char *s2)
{
  int	j;
  int	size;
  
  size = my_strlen(s1);
  for (j = 0; s2[j] != '\0'; j++)
    {
      s1[size + j] = s2[j];
    }
  s1[size + j] = '\0';
  return (s1);
}
