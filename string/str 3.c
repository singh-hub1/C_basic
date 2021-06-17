#include<stdio.h>
int main()
{
    char str[90];
    printf("enter a string\n");
    scanf("%[^\n]",str);
    int i,alpha=0,space=0,digit=0,u=0;
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>='A'&& str[i]<='Z')||(str[i]>='a'&& str[i]<='z'))
            alpha++;
    else if(str[i]==' ')
        space++;
    else if(str[i]>='0' && str[i]<='9')
        digit++;
        else
            u++;

}
printf("total alpha:%d\n",alpha);
printf("total spaces:%d\n",space);
printf("total digit:%d\n",digit);
printf("total special symbol:%d\n",u);
return 0;
}
