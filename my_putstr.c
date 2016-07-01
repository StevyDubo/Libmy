/*
** my_putstr.c for  in /home/stevy/depot_exo/dubo_s/Jour03C/dubo_s/my_putstr
** 
** Made by DUBO Stévy
** Login   <dubo_s@etna-alternance.net>
** 
** Started on  Wed Oct 21 11:30:43 2015 DUBO Stévy
** Last update Thu Nov 19 11:32:07 2015 DUBO Stévy
*/
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}
