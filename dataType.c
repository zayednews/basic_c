#include<stdio.h>
int main()
{
  float a=5.2;
  if(a==5.2)
     printf("Equal");
  else if(a<5.2)
     printf("Less than");
     /*
      5.2 is double constant in c. In c size of double data is 8 byte while a is float variable. Size of float variable is 4 byte.
So double constant 5.2 is stored in memory as:
101.00 11001100 11001100 11001100 11001100 11001100 11001101
Content of variable a will store in the memory as:
101.00110 01100110 01100110
It is clear variable a is less than double constant 5.2
Since 5.2 is recurring float number so it different for float and double. Number likes 4.5, 3.25, 5.0 will store same values in float and double data type.
     */
  else
     printf("Greater than");
}
