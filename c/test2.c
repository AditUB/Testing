#include <stdio.h>
#include <string.h>

void ccomparee();

void main(){    
    comparee();
}
void comparee(){
    char s1[100], s2[100];
    gets(s1);
    gets(s2);
    int t=0;
    for(int i=0;s1[i]!='\0'||s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        {
            if((int)s1[i]-(int)s2[i]>0)
                printf("1");
            else
                printf("-1");
            ++t;
            break;
        }
    }
    if(t==0)
    printf("0\n");
    printf("%d",strcmp(s1,s2));
}

