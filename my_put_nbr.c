/*
** my_put_nbr.c for  in /home/stevy/depot_exo/dubo_s/my_put_nbr
**
** Made by DUBO Stévy
** Login   <dubo_s@etna-alternance.net>
**
** Started on  Fri Oct 23 14:51:32 2015 DUBO Stévy
** Last update Tue Nov 24 11:59:41 2015 DUBO Stévy
*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	my_putchar(char c)
{
    write(1, &c, 1);
}

void    my_put_nbr(int n)
{
  int   flag;
  char  c;

  flag = 0;
  my_putchar("-");
  if (n == -2147483649)
    {
      flag = 1;
    }
  n = n * -1;
  if (n >= 10)
    //my_put_nbr(n / 10);
    if (n != -2147483648 || flag == 1)
      {
	flag = 0;
	c = (char)(n % 10);
	my_putchar(c);
      }
    else
      my_putchar(c);
}


int main()
{
    int n;
    n = -2147483649;
    my_put_nbr(n);
    printf("%d", n);
    return 0;
}
