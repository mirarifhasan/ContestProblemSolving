#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int a, j, i, count, flag = 1;
    gets(s);
    a = strlen(s);

	for(i=0 ;i<a ;i++ ){
        count = 0;
        for(j=0 ;j<a ; j++){
            if(s[i] == s[j])
                count++;
        }
        if(count%2 == 1){
            flag = 0;
            break;
        }
	}

	if(flag == 0)
        printf("No");
    else
        printf("Yes");

    return 0;
}
