#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;
 
 
int  fib1(int n)
{
   if ( n <= 1 )
      return n;
   return fib1(n-1) + fib1(n-2);
} 
 
int  fib2(int n)
{
  /* Declare an array to store fibonacci numbers. */
  int  f[n+1];
  int i;
 
  /* 0th and 1st number of the series are 0 and 1*/
  f[0] = 0;
  f[1] = 1;
 
  for (i = 2; i <= n; i++)
  {
      /* Add the previous 2 numbers in the series
         and store it */
      f[i] = f[i-1] + f[i-2];
  }
 
  return f[n];
}

int  fib3(int n)
{
  int  a = 0, b = 1, c, i;
  if( n == 0)
    return a;
  for (i = 2; i <= n; i++)
  {
     c = a + b;
     a = b;
     b = c;
  }
  return b;
}
 
/* Helper function that multiplies 2 matricies F and M of size 2*2, and
  puts the multiplication result back to F[][] */
void multiply(int  F[2][2], int  M[2][2]);
 
/* Helper function that calculates F[][] raise to the power n and puts the
  result in F[][]
  Note that this function is desinged only for fib() and won't work as general
  power function */
void power(int  F[2][2], int n);
 
int  fib4(int n)
{
  int  F[2][2] = {{1,1},{1,0}};
  if(n == 0)
      return 0;
  power(F, n-1);
 
  return F[0][0];
}
 
void multiply(int  F[2][2], int  M[2][2])
{
  int  x =  F[0][0]*M[0][0] + F[0][1]*M[1][0];
  int  y =  F[0][0]*M[0][1] + F[0][1]*M[1][1];
  int  z =  F[1][0]*M[0][0] + F[1][1]*M[1][0];
  int  w =  F[1][0]*M[0][1] + F[1][1]*M[1][1];
 
  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}
 
void power(int  F[2][2], int n)
{
  int  i;
  int  M[2][2] = {{1,1},{1,0}};
 
  // n - 1 times multiply the matrix to {{1,0},{0,1}}
  for ( i = 2; i <= n; i++ )
      multiply(F, M);
} 

void multiply1(int  F[2][2], int  M[2][2]);
 
void power1(int  F[2][2], int n);
 
/* function that returns nth Fibonacci number */
int  fib5(int n)
{
  int  F[2][2] = {{1,1},{1,0}};
  if(n == 0)
    return 0;
  power1(F, n-1);
  return F[0][0];
}
 
/* Optimized version of power() in method 4 */
void power1(int  F[2][2], int n)
{
  if( n == 0 || n == 1)
      return;
  int  M[2][2] = {{1,1},{1,0}};
 
  power1(F, n/2);
  multiply1(F, F);
 
  if( n%2 != 0 )
     multiply1(F, M);
}
 
void multiply1(int  F[2][2], int  M[2][2])
{
  int  x =  F[0][0]*M[0][0] + F[0][1]*M[1][0];
  int  y =  F[0][0]*M[0][1] + F[0][1]*M[1][1];
  int  z =  F[1][0]*M[0][0] + F[1][1]*M[1][0];
  int  w =  F[1][0]*M[0][1] + F[1][1]*M[1][1];
 
  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}
 
 
int main ()
{
  int n = 45;
  int  f = 0;
  float t1;
  float t2;
  float diff;
  
  t1 = clock();
  f = fib1(n);
  t2 = clock();
  diff = (t2-t1)/CLOCKS_PER_SEC;
  printf("%d ", f);
  cout << "Fib1 took "<< diff<<" sec"<<endl;
  
  t1 = clock();
  f = fib2(n);
  t2 = clock();
  diff = (t2-t1)/CLOCKS_PER_SEC;
  printf("%d ", f);
  cout << "Fib2 took "<< diff<<" sec"<<endl;
  
  t1 = clock();
  f = fib3(n);
  t2 = clock();
  diff = (t2-t1)/CLOCKS_PER_SEC;
  printf("%d ", f);
  cout << "Fib3 took "<< diff<<" sec"<<endl;
  
  t1 = clock();
  f = fib4(n);
  t2 = clock();
  diff = (t2-t1)/CLOCKS_PER_SEC;
  printf("%d ", f);
  cout << "Fib4 took "<< diff<<" sec"<<endl;
  
  t1 = clock();
  f = fib5(n);
  t2 = clock();
  diff = (t2-t1)/CLOCKS_PER_SEC;
  printf("%d ", f);
  cout << "Fib5 took "<< diff<<" sec"<<endl;
  
  

  
  getchar();
  return 0;
}
