 #include <stdio.h>
  int z;
int main()  
{
  int x = 10;
  auto int y = 20;

  {
    int x = 20;
    printf("%d %d %d\n", x, --y, z);
    x++;
    y++;
    z++;
  }
  printf("%d,%d,%d", x, y--, z);
}