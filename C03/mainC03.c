#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char login[40];
    char password[40];

    printf( "Please, enter your login: " );
    scanf( "%s", login );

    printf( "Enter your password: " );
    scanf( "%s", password );

    if ( ft_strcmp( login, "bond" ) == 0 && ft_strcmp( password, "007" ) == 0 ) {
        printf( "You are connected\n" );
    } else {
        printf( "Login failed. Retry later.\n" );
    }

    return 0;
}

int main() {

    char login[40];
    char password[40];

    printf( "Please, enter your login: " );
    scanf( "%s", login );

    printf( "Enter your password: " );
    scanf( "%s", password );

    if ( ft_strncmp( login, "bond",1 ) == 0 && ft_strncmp( password, "007",2 ) == 0 ) {
        printf( "You are connected\n" );
    } else {
        printf( "Login failed. Retry later.\n" );
    }
}

int main () {
   char str1[50], str2[50];

   //destination string
   strcpy(str1, "This is my initial string");

   //source string
   strcpy(str2, ", add this");

   //concatenating the string str2 to the string str1
   ft_strcat(str1, str2);

   //displaying destination string
   printf("String after concatenation: %s", str1);

   return(0);
}

int main()
{

   // Take any two strings
   char src[50] = "efghijkl";
   char dest[50]= "abcd";

   // Appends 5 character from src to dest
   ft_strncat(dest, src, 5);

   // Prints the string
   printf("Source string : %s\n", src);
   printf("Destination string : %s", dest);

   return 0;
}

int main() {

    // On cherche à lire une ligne de texte à partir du clavier.
    char buffer[ 255 ];
    printf( "Veuillez saisir une ligne de texte contenant le mot \"admin\" : \n" );
    scanf( "%[^\n]", buffer );
    // Pour supprimer le caractère '\n' du flux pour la prochaine lecture.
    fgetc( stdin );

    // Recherche de la présence de la chaîne "admin" dans la saisie.
    char * result = ft_strstr( buffer, "admin" );

    // Affichage d'une réponse à l'utilisateur.
    if ( result == NULL ) {
        puts( "Vous n'avez pas saisi le mot admin" );
    } else {
        puts( "La chaîne contient le mot admin" );
    }
    printf( "%s \n", result);

    return EXIT_SUCCESS;
}

int main()
{
    char first[] = "This is ";
    char last[] = "a potentially long string";
    int r;
    int size = 16;
    char buffer[size];

    strcpy(buffer,first);
    r = ft_strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}

