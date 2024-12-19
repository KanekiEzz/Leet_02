#include <unistd.h>

int check_double1(char *str, char c, int num)
{
  int i = 0;
  while(i < num)
  {
    if(str[i] == c)
      return 0;
    i++;
  }
  return 1; 
}


int check_double2 (char *str, char c)
{
  int i;

  i = 0;
  while(str[i] != '\0')
  {
    if(str[i] == c)
    {
      return 0;
    }
    i++;
  }
  return 1;
}

int main(int  ac, char **av)
{
  int i;
  int j;

  i = 0;
  if(ac == 3)
  {
    while(av[1][i] != '\0')
    {
      if(check_double1(av[1], av[1][i], i) == 1)
      {
        write(1, &av[1][i], 1);
      }
      i++;
    }


    i = 0;
    while(av[2][i] != '\0')
    {
      if(check_double2(av[1], av[2][i]) == 1)
      {
        if(check_double1(av[2], av[2][i], i) == 1)
          write(1, &av[2][i], 1);
      }
      i++;
    }
  }


  write(1, "\n", 1);
}