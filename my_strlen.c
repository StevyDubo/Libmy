/*
** my_strlen.c for  in /home/stevy/depot_exo/dubo_s/Jour03C/dubo_s/my_strlen
** 
** Made by DUBO Stévy
** Login   <dubo_s@etna-alternance.net>
** 
** Started on  Wed Oct 21 11:31:42 2015 DUBO Stévy
** Last update Thu Nov 19 11:29:35 2015 DUBO Stévy
*/
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	my_strlen(char*str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i++;
    }
  return i;
}
