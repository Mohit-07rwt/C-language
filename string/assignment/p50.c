#include<stdio.h>
#include<string.h>
//void shift(char *,char *);
void replace(char *,char *,char *);
void main()
{
        char str[20],s1[10],s2[20];
        printf("enter string str: ");
        scanf("%[^\n]",str);
        //getchar();

        printf("enter string s1: ");
        scanf("%s",s1);

        printf("enter string s2: ");
        scanf("%s",s2);

        replace(str,s1,s2);

}


void replace(char *str,char *s1,char *s2)
{
        char *p,*q,*r,*start,*t;
        p=str,t=str;
        q=s1;
        int d,f;
        while(*t)
                t++;

        while(*p)
        {
                f=0;
                q=s1;
                r=s2;
                d=strlen(s2)-strlen(s1);
                start=p;
                while(*q!=0 && *start!=0)
                {
                        if(*q!=*start)
                                break;
                        else
                        {
                                q++;
                                start++;
                        }
                }
                if(*q == 0)
                        f=1;

                if(f==1)
                {
                        t = str;
                        while(*t) t++;  // t at null terminator
                        while(t >= start)
                        {
                                *(t+d)=*t;
                                t--;
                        }

                        while(*r)
                        {
                                *p++=*r++;
                        }
                }
                else
                        p++;

        }
        printf(" string:=\n ");
        printf("%s",str);

}

