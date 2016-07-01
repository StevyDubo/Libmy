/*
** my_swap.c for  in /home/stevy/depot_exo/dubo_s/Jour03C/dubo_s/my_swap
** 
** Made by DUBO Stévy
** Login   <dubo_s@etna-alternance.net>
** 
** Started on  Wed Oct 21 12:11:07 2015 DUBO Stévy
** Last update Mon Nov 23 15:38:57 2015 DUBO Stévy
*/
#include <stdio.h>
#include <stdlib.h>

void	my_swap(int *a, int *b)
{
  int	tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
