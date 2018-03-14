int foo(int a, int b)
{
  int c = a, d = b;
  while(a != b)
  {
    if(a < b)
    a = a+c;
    else
    b = b+d;

  }
  return a;
}
