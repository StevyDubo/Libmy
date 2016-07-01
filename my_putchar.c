/*
** my_putchar.c for  in /home/stevy/depot_exo/dubo_s/Libmy/dubo_s/libmy_02
** 
** Made by DUBO Stévy
** Login   <dubo_s@etna-alternance.net>
** 
** Started on  Fri Oct 30 12:00:33 2015 DUBO Stévy
** Last update Fri Oct 30 12:01:10 2015 DUBO Stévy
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void my_putchar(char c)
{
  write (1, &c, 1);
}
