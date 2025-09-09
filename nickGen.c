#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Код не закончен!!! Code doesn't ended!!!

int main(){
    const char consonants[] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
    const char vowels[] = {'a','e','i','o','u','y'};
    int counter = 0;

    int nickLen = 8 + 2 * (rand() % 4);
    char *nick[nickLen] = {0};

    while (counter < nickLen)
    {
        nick[counter] = consonants[rand() % 21];
        nick[counter + 1] = vowels[rand() % 6];
        nick[counter + 2] = '\0';
        counter = counter + 2;
    }
    printf("%s", nick);

    return 0;
}
