#include <stdio.h>

int main()
{
  int n, cnt = 0, x;
 
  scanf("%d\n", &n);
  for (int i = 0 ; i < n; i++)
    {
      scanf("%d", &x);
      if (x > 0) cnt++;
    }
  printf("%d\n", cnt);

  return 0;
}
