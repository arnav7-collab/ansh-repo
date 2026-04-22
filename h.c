
#include <stdio.h>

int main() {
    char movie1[50], movie2[50], movie3[50];

    printf("Enter your first favourite movie: ");
    fgets(movie1, sizeof(movie1), stdin);

    printf("Enter your second favourite movie: ");
    fgets(movie2, sizeof(movie2), stdin);

    printf("Enter your third favourite movie: ");
    fgets(movie3, sizeof(movie3), stdin);

    printf("\nYour favourite movies are:\n");
    printf("1. %s", movie1);
    printf("2. %s", movie2);
    printf("3. %s", movie3);

    
}

