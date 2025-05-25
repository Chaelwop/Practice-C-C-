#include <stdio.h>
#include <string.h>

int main() {
    char crushName[50];
    char yourName[50];

    printf("Welcome to the confession program!\n");
    printf("Please enter your name: ");
    scanf("%s", yourName);

    printf("Hi, %s! We all know that programming is fun, but there's something more exciting for me right now.\n", yourName);
    printf("I wanted to let you know that I have a crush on someone.\n");
    printf("Please enter the name of the person you have a crush on: ");
    scanf("%s", crushName);

    printf("Thank you for your honesty, %s.\n", yourName);
    printf("I want to confess that the person I have a crush on is %s. I have admired them for a while now.\n", crushName);
    printf("I'm not sure if you feel the same way, but I wanted to let you know how I feel.\n");
    printf("Maybe we can talk more about this in person sometime.\n");

    return 0;
}

