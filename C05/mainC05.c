
int main(void)
{
 int a = ft_iterative_factorial(5) ;
 printf("%d\n",a);
 int b = ft_iterative_factorial(1) ;
 printf("%d\n",b);
 int c = ft_iterative_factorial(0) ;
 printf("%d\n",c);
 int d = ft_iterative_factorial(-1) ;
 printf("%d\n",d);
}

/*an+1= an* (n+1)

a(r)= a(r-1)*r

a5=a4*5
a5=a3*4*5
a5=a2*3*4*5
a5=a1*2*3*4*5
a5=a0*1*2*3*4*5
a5=1*1*2*3*4*5*/
int main(void)
{
 int a = ft_recursive_factorial(5) ;
 printf("%d\n",a);
 int b = ft_recursive_factorial(1) ;
 printf("%d\n",b);
 int c = ft_recursive_factorial(0) ;
 printf("%d\n",c);
 int d = ft_recursive_factorial(-1) ;
 printf("%d\n",d);
}

int main(void)
{
 int a = ft_iterative_power(5,2) ;
 printf("%d\n",a);
 int b = ft_iterative_power(-1,10) ;
 printf("%d\n",b);
 int c = ft_iterative_power(0,2) ;
 printf("%d\n",c);
 int d = ft_iterative_power(-1,0) ;
 printf("%d\n",d);
 int e = ft_iterative_power(3,-3) ;
 printf("%d\n",e);
}

/*
5*5*5*5*5*5*5
a(r,p)= a(r-1)*r
a(r,p)
a(2,4)=2*a(2,3)
a(2,4)=2*2*a(2,2)
a(2,4)=2*2*2*a(2,1)
a(2,4)=2*2*2*2*1
*/
int main(void)
{
 int a = ft_recursive_power(5,2) ;
 printf("%d\n",a);
 int b = ft_recursive_power(-1,10) ;
 printf("%d\n",b);
 int c = ft_recursive_power(0,2) ;
 printf("%d\n",c);
 int d = ft_recursive_power(-1,0) ;
 printf("%d\n",d);
 int e = ft_recursive_power(3,-3) ;
 printf("%d\n",e);
}

int main(void)
{
 int a;
 int i = -2;
 while(i<=9)
 {
   a = ft_fibonacci(i) ;
   printf("F(%d)=%d\n",i,a);
   i++;
 }
}

//si racine n'est pas primaire rien ne serair
//https://en.wikipedia.org/wiki/Primality_test#C,_C++,_C#_&_D
//https://www.factmonster.com/math-science/mathematics/prime-numbers-facts-examples-table-of-all-up-to-1000

