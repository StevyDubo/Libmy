/*
** my_strdup.c for  in /home/stevy/depot_exo/dubo_s/Jour07/dubo_s/my_strdup
** 
** Made by DUBO Stévy
** Login   <dubo_s@etna-alternance.net>
** 
** Started on  Mon Oct 26 13:06:59 2015 DUBO Stévy
** Last update Thu Nov 19 14:03:49 2015 DUBO Stévy
*/
#include <stdio.h>
#include <stdlib.h>

int	my_strlen(char *str);
char	*my_strcpy(char *dest, char *src);

char	*my_strdup(char *str)
{
  int	i;
  char	**argv;

  i = 0;
  str = (char *) malloc((my_strlen(*argv) + 1) * sizeof(*argv));
  while (*argv[i] != '\0')
    {
      my_strcpy(str, *argv);
      i++;
    }
  return (str);
}
  
