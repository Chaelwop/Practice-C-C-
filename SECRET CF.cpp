#include <stdio.h>
#include <string.h>

int main() {
    char crushName[50];
    printf("Enter the name of your crush: ");
    scanf("%s", crushName);

    printf("Confession: \n");
    printf("Dear %s, ", crushName);
    printf("i been in love in you since we meet. \n");
    printf("Yours lovingly, \nEarl\n");

    return 0;
}

