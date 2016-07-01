/*
** my_strstr.c for  in /home/stevy/depot_exo/dubo_s/Jour04C/dubo_s/my_strstr
**
** Made by DUBO Stévy
** Login   <dubo_s@etna-alternance.net>
**
** Started on  Thu Oct 22 18:29:06 2015 DUBO Stévy
** Last update Fri Oct 30 13:17:30 2015 DUBO Stévy
*/
#include <unistd.h>
#include <string.h>

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	j;
  int	current_car;

  i = 0;
  j = 0;
  current_car = 0;
  while ((str[i] != '\0') && (to_find[i] != '\0'))
    {
      if ((str[i] == to_find[j]) && (j = 0))
	{
      current_car = i;
      j++;
      return (&str[current_car]);
	}
      else
	{
	  return NULL;
	}
      i++;
    }
}

int main()
{
    char str[5] = "totol";
    char s[4]  = "tot";
    char *aff;

    aff = my_strstr(str, s);
    printf("%d\n", &aff);
}
