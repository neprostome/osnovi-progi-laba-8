#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* sublime(char *s1, char *s2) {

    char *itog = malloc(strlen(s1) + strlen(s2) + 1);
    memcpy(itog, s1, strlen(s1));
    memcpy(itog + strlen(s1), s2, strlen(s2) + 1);

    return itog;
}

int main() {
    //ex1
    char s[10000], s1[10000];
    gets(s);
    gets(s1);
    char *s2 = sublime(s, s1);
    printf("ex1:\n");
    printf("%s\n", s2);
    free(s2);
    //ex3
    printf("ex3:\n");
    if (strcmp (s, s1) == 0)
        puts ("Strings are the same");
    else
        puts ("Strings arent the same");
    //ex5
    printf("ex5:\n");
    char s3[10000], s4[10000];
    //gets(s3);
    //gets(s4);
    strncpy (s3, s1,strlen(s1));
    printf("lets copy second string to new string:\ns1 = %s\nnew string = %s\n", s1, s3);
    //ex10
    printf("ex10:\n");
    char *delta = strchr(s1,s[0]);
    if(delta == NULL){
        printf("Im sorry, we have no symbols like that in this string");
    }
    else {
        printf("%d\n", delta - s1 + 1);
    }
    //ex12
    printf("ex12:\n");
    int dl;
    //char s5 = *s, s6 = *s1;
    dl = strcspn(s, s1);
    printf("Character where strings intersect is at position %d\n", dl);
}
