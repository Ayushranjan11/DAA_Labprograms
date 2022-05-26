#include <stdio.h>
#include <string.h>

void search(char *pattern,char *str)
{
  int m=strlen(pattern);
  int n=strlen(str);
  
  int i,j;
  for(i=0;i<=n-m;i++)
  {
    for(j=0;j<m;j++)
    {
      if(str[i+j]!=patter[j])
        break;
      if(j==m)
      {
        printf("Pattern found\n");
        return;
      }
    }
  }
  printf("Pattern not found\n");
}
