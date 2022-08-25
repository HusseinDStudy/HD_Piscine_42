#include <stdio.h>
#include <string.h>

int main(void)
{
    char *a="ol";
    char *b="lyonnais";
    printf("a=%s b=%s\n", a, b);
    printf("a is distination=%s\n",ft_strcpy(a, b));
    //printf("%s %s\n", a, b);
}

int main(void)
{
    /*char a[]=" dfds";
    char b[]="ol lyonnais";
    printf("a=%s b=%s\n", a, b);
    printf("a is distination=%s\n",ft_strncpy(a, b,7));*/
    char a[]="dfds";
    char b[]="ol lyonnais";
    printf("a=%s :%lu b=%s :%lu\n", a, sizeof(a), b, sizeof(b));
    char *c= ft_strncpy(a, b,7);
    printf("a=%s :%lu b=%s :%lu\n", a, sizeof(a), b, sizeof(b));
    printf("distination=%s - %lu\n",c,sizeof(c));
}

int main(void) {
    printf("la chaine %s is %d\n", "", ft_str_is_alpha(""));
    printf("la chaine %s is %d\n", "abcdeFHYcAW", ft_str_is_alpha("abcdeFHYcAW"));
    printf("la chaine %s is %d\n", "ab1cdeFHYc", ft_str_is_alpha("ab1cdeFHYc"));
    printf("la chaine %s is %d\n", "abcdeFHY-c", ft_str_is_alpha("abcdeFHY-c"));
}

int main(void) {
    printf("la chaine %s is %d\n", "", ft_str_is_numeric(""));
    printf("la chaine %s is %d\n", "00ab015", ft_str_is_numeric("00ab015"));
    printf("la chaine %s is %d\n", "988465220", ft_str_is_numeric("988465220"));
    printf("la chaine %s is %d\n", "98721-218548_02", ft_str_is_numeric("98721-218548_02"));
}

int main() {
    printf("la chaine %s is %d\n", "", ft_str_is_lowercase(""));
    printf("la chaine %s is %d\n", "00ab015", ft_str_is_lowercase("00ab015"));
    printf("la chaine %s is %d\n", "abVD", ft_str_is_lowercase("abVD"));
    printf("la chaine %s is %d\n", "avngfgfhfh", ft_str_is_lowercase("avngfgfhfh"));
}

int main() {
    printf("la chaine %s is %d\n", "", ft_str_is_uppercase(""));
    printf("la chaine %s is %d\n", "00ab015", ft_str_is_uppercase("00ab015"));
    printf("la chaine %s is %d\n", "abVD", ft_str_is_uppercase("abVD"));
    printf("la chaine %s is %d\n", "QDAAJG", ft_str_is_uppercase("QDAAJG"));
}

int main() {
    printf("la chaine %s is %d\n", "", ft_str_is_printable(""));
    printf("la chaine %s is %d\n", "00ab015", ft_str_is_printable("00ab015"));
    printf("la chaine %s is %d\n", "abVD\n", ft_str_is_printable("abVD\n"));
    printf("la chaine %s is %d\n", "\t", ft_str_is_printable("\t"));
}

int main() {
    char test[10] = "BONJOUR";
    printf("%s\n", ft_strupcase(test));
    char test0[10] = "bonjour";
    printf("%s\n", ft_strupcase(test0));
    char test1[11] = "Bonjour1";
    printf("%s\n", ft_strupcase(test1));
    char test2[1] = "";
    printf("%s\n", ft_strupcase(test2));
}

int main() {
    char test[10] = "BONJOUR";
    printf("%s\n", ft_strlowcase(test));
    char test0[10] = "bonjour";
    printf("%s\n", ft_strlowcase(test0));
    char test1[11] = "BonJour1";
    printf("%s\n", ft_strlowcase(test1));
    char test2[1] = "";
    printf("%s\n", ft_strlowcase(test2));
}

int main() {
    //printf("%d\n", ft_str_is_alpha(''));
    char test[72] = "bonJour je suis, hussein dajani! ?J'aime la nourriture, et le japon.";
    printf("%s\n", ft_strcapitalize(test));
    char test1[63] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un+x";
    printf("%s\n", ft_strcapitalize(test1));
}

void test(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[19];
    int r;
    r = strlcpy(buffer,string,size);
    printf("ORIGINAL FX\nCopied '%s' into '%s', length %d\n",string,buffer,r);
    char string1[] = "Hello there, Venus";
    char buffer1[19];
    unsigned int r1;
    r = ft_strlcpy(buffer1,string1,size);
    printf("FT FX\nCopied '%s' into '%s', length %u\n",string1,buffer1,r1);
}
int main()
{
    test(19);
    test(10);
    test(1);
    test(0);

    return(0);
}

int main(void)
{
	char *a="Coucou\ntu vas bien ?";
	printf("Original: \n%s\n-----\nAfterward: \n",a);
	ft_putstr_non_printable(a);
}
int	main(void)
{
	char	*chaine = "xxxxxxxxxxxxxxx0xxxxxxxxxxxxxxx0xxxxxxxxxxxxxxx0xxxxxxxxx";
	ft_print_memory(chaine,ft_strlen(chaine));
}