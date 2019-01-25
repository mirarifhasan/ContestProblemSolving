#include<stdio.h>
int main()
{
    char a;
    scanf("%c", &a);

    switch(a)
    {
    case 'a' :
        printf("vowel");
        break;
    case 'e' :
        printf("vowel");
        break;
    case 'i' :
        printf("vowel");
        break;
    case 'o' :
        printf("vowel");
        break;
    case 'u' :
        printf("vowel");
        break;
    default :
        printf("consonant");
        break;
    }
    return 0;
}
