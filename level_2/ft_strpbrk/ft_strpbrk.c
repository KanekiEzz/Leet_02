#include <string.h>
#include <stdio.h>

int __ft_search(const char *str, char c)
{
  int i = 0;
  while (str[i])
  {
    if (str[i] == c)
      return 1;
    i++;
  }
  return 0;
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
  char *ss1;

  ss1 =(char *)s1;
  while (*ss1 && __ft_search(s2, *ss1) == 0)
    ss1++;
  if (*ss1)
    return ss1;
  return (NULL);
}

int main() 
{ 
    char s1[] = "geeksforgeeks"; 
    char s2[] = "app"; 
    char s3[] = "kite"; 
    char* r, *t; 
  
    r = ft_strpbrk(s1, s2);  
    if (r != 0) 
        printf("First matching character: %c\n", *r); 
    else
        printf("Character not found"); 
    t = strpbrk(s1, s3); 
    if (t != 0) 
        printf("\nFirst matching character: %c\n", *t); 
    else
        printf("Character not found"); 
  
    return (0); 
} 