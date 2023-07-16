// 2. What will the output of the line number 6 from following snippet:

int main()
{
   int a,b,c,d,e;
   d = (a=printf("Tom"),b=printf("Jerry"),c=printf("Doremon\n"));
   printf("a=%d b=%d c=%d d=%d e=%d\n",a,b,c,d,e);
   e = ++d, a=7,b==5,a++,c++;
   printf("a=%d b=%d c=%d d=%d e=%d\n",a,b,c,d,e);
}

