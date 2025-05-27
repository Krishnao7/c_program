#include<stdio.h>

int main()
{
    int a= 12 ,b = 5 ,temp;
    //swaping valude using another integer (temp)
    printf("before swap the value a and b : a = %d\n , b= %d\n", a,b);
    temp =  a;
    a = b;
    b = temp;
    
     printf(" after swap  the value of a and b: a=%d\n, b=%d\n" ,a,b);


   //Without Using a Temp

    int n = 78, j = 69;

     printf("before swapping: n = %d, j = %d\n", n, j);

    n = n + j;  // n = 147
    j = n - j;  // j = 147 - 69 = 78
    n = n - j;  // n = 147 - 78 = 69

    printf("After swapping: n = %d, j = %d\n", n, j);
 

   return 0;
   
}