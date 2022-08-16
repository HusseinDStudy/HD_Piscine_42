#include <unistd.h>

#include <stdio.h>
//jamais des etoiles
int	main(void)
{
	int *nbr;
    int a;

    a = 0;
	nbr = &a;
	printf("%d",a);
	ft_ft (nbr);
	printf("%d",a);

}

int main (void)
{
	int a;
	int *nbr0;
	int **nbr1;
	int ***nbr2;
	int ****nbr3;
	int *****nbr4;
	int ******nbr5;
	int *******nbr6;
	int ********nbr7;
	int *********nbr8;

	a = 0;
	nbr0 = &a;
	nbr1=&nbr0;
	nbr2=&nbr1;
	nbr3=&nbr2;
	nbr4=&nbr3;
	nbr5=&nbr4;
	nbr6=&nbr5;
	nbr7=&nbr6;
	nbr8=&nbr7;
	printf("%d",a);
	ft_ultimate_ft(nbr8);
	printf("%d",a);
}

int main(void)
{
    int a;
	int b;

	a=0;
	b=10;
	printf("%d - %d ---",a, b);
	ft_swap(&a,  &b);
	printf("%d - %d.",a, b);
}

int main (void)
{
	int a;
	int b;

	a=10;
	b=2;
	int eculid;
	int modulo;
	printf(" a = %d \n", a);
	printf(" b = %d \n", b);
	ft_div_mod(a, b, &eculid, &modulo);
	printf("apres *div = a / b = %d \n", eculid);
	printf("apres *mod = a modulo b = %d \n", modulo);
}

int main (void)
{
	int a;
	int b;

	a=10;
	b=2;
	printf("avant a = %d \n", a);
	printf("avant b = %d \n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("apres a = a / b = %d \n", a);
	printf("apres b = a modulo b = %d \n", b);
}

int main(void)
{
	char *chaine;

	chaine = "abcdefg";
	ft_putstr(chaine);
    ft_putstr("abcdefg");
}

int main (void)
{
    int length;

    length =ft_strlen("abcde");
	printf("%d est la longeur de la chaine",length);
}

int main(void)
{
    int tab[8]={2, 1, 2, 4, 5, 6,16,15};
    printf("%d%d%d%d%d%d%d%d\n",tab[0],tab[1],tab[2],tab[3],tab[4],tab[5],tab[6],tab[7]);
    ft_rev_int_tab(tab, 8);
    printf("%d%d%d%d%d%d%d%d\n",tab[0],tab[1],tab[2],tab[3],tab[4],tab[5],tab[6],tab[7]);
}

int main(void)
{
    int tab[8]={15, 1, 2, 4, 5, 6,16,15};//int tab[8]={2, 1, 2, 4, 5, 6,16,15};
    printf("%d,%d,%d,%d,%d,%d,%d,%d\n",tab[0],tab[1],tab[2],tab[3],tab[4],tab[5],tab[6],tab[7]);
    ft_sort_int_tab(tab, 8);
    printf("%d,%d,%d,%d,%d,%d,%d,%d\n",tab[0],tab[1],tab[2],tab[3],tab[4],tab[5],tab[6],tab[7]);
    int tab1[5]={5,3, 1, 2, 5};
    printf("%d,%d,%d,%d,%d\n",tab1[0],tab1[1],tab1[2],tab1[3],tab1[4]);
    ft_sort_int_tab(tab1, 5);
    printf("%d,%d,%d,%d,%d\n",tab1[0],tab1[1],tab1[2],tab1[3],tab1[4]);
}
