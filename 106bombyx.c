/*
** 106bombyx.c for 106bombyx in /home/VSridhar78/106bombyx
** 
** Made by Sridhar Vengadesan
** Login   <VSridhar78@epitech.net>
** 
** Started on  Mon Feb  6 10:09:25 2017 Sridhar Vengadesan
** Last update Sat Feb 18 11:06:45 2017 jeremy elkaim
*/

#include "my.h"

void     bombyx_detail(int ac, char **av)
{
  if (av[1][0] == '-')
    {
      if (av[1][1] == 'h')
	{
	  my_putstr ("USAGE\n");
	  my_putstr ("\t    ./106bombyx [k| i0 i 1]\n\n");
	  my_putstr ("DESCRIPTION\n");
	  my_putstr ("\t    n\tnumber of first generation individuals\n");
	  my_putstr ("\t    k\tgrowth rate from 1 to 4\n");
	  my_putstr ("\t    i0\tinitial generation (included)\n");
	  my_putstr ("\t    i1\tfinal generation (included)\n");
	}
    }
}

int	option1(char **av)
{
  int	i;
  float	n;
  float	k;
  float	tmp;


  if (av[3][0] >= '1' && av[3][0] <= '4')
    {
      i = 1;
      n = atof(av[1]);
      k = atof(av[2]);
      printf("%0.2d %0.2f\n", i, n);
      while (i != 100)
	{
	  tmp = n;
	  n = k * tmp * ((1000 - tmp)/1000);
	  i++;
	  printf("%0.2d %0.2f\n", i, n);
	}
    }
  else
    return (84);
}

int	option2(char **av)
{
  float	i;
  int	j;
  float	l;	
  float	n;
  float	k;
  float	tmp;

  if (av[4][0] > '0' && av[4][0] > '0')
    {
      i = atof(av[3]);
      l = atof(av[2]);
      n = atof(av[1]);
      k = 1.00;
      tmp = n;
      while (k <= 4)
	{
	  j = 0;
	  while (j <= i)
	    {
	      while (j <= l)
		{
		  tmp = n;
		  n = k * tmp * ((1000 - tmp)/1000);
		  j++;
		}
	      printf("%0.2f %0.2f\n", k, n);
	      tmp = n;
	      n = k * tmp * ((1000 - tmp)/1000);
	      j++;
	    }
	  n = atof(av[1]);
	  k = k + 0.01;
	}
    }
  else
    return (84);
}

  int     main(int ac, char **av)
  {
    if (ac == 2)
      {
	if (av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0' && ac == 2)
	  bombyx_detail(ac, av);
	else
	  {
	    my_putstr("Error argument\n");
	    return(84);
	  }
      }
    else if (ac == 3)
      option1(av);
    else if (ac == 4)
      option2(av);
    else
      return(84);
  }
