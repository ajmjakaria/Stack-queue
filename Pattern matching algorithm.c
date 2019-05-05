#include<stdio.h>
int main()
{
    char p[100];
    char t[100];
    int k=0, s, r, l, index=-1, max;

    printf("Enter characters to match.\n");
    gets(p);                 ///*pattern to match ...E.g: 'ab'*/
    r=strlen(p);
    printf("Enter your pattern.\n");
    gets(t);                ///*pattern match with...E.g: 'aaabc'*/
    s=strlen(t);
    max=s-r+1;

    while(k<max){
        for(l=0; l<r; l++){
            if(p[l]!=t[k+l])
        {
            break;
        }
        }
        if(l==r){
            index=k;
            printf("%d", index);
            break;
        }
        k=k+1;
    }
    if(index==-1)
        printf("not found");
    return 0;
}
