/*
** my_base_function.c for my_base_function in /home/VSridhar78/106bombyx
** 
** Made by Sridhar Vengadesan
** Login   <VSridhar78@epitech.net>
** 
** Started on  Mon Feb  6 10:28:02 2017 Sridhar Vengadesan
** Last update Mon Feb  6 10:41:04 2017 Sridhar Vengadesan
*/
#include "my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while(str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}
