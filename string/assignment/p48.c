//48. WAP in C to delete palindrome word from string.	i/p: char s[20]="laxmi madam vector ”	o/p: char s[20]=”laxmi vector ”
#include<stdio.h>
#include<string.h>
void del_palindrome(char *);
void main()
{
	char s[100];
	printf("enter string: ");
	scanf("%[^\n]",s);

	del_palindrome(s);
	printf("%s",s);
}

int isPalindrome(char *q, char *r)
{
    while (q < r)
    {
        if (*q != *r)
            return 0;
        q++;
        r--;
    }
    return 1;
}

void del_palindrome(char *s)
{
    	char *p,*q; 
	q =s;
	p=s;
	
	char *t, *t2;

    while (*p)
    {
        while (*p == ' ')  
        {
            *q++ = *p++;
        }

        t = p;

        while (*p && *p != ' ')
            p++;

        t2 = p - 1;

        if (!isPalindrome(t, t2))
        {
            while (t <= t2)
                *q++ = *t++;

        }
        else
        {
        }
    }

    *q = '\0';


}
/*

void del_palindrome(char *s) {
	char *p = s;
	char *q = s;
	char *r = s;
	while (*p) {
		if ((*p == ' ' || *p == '\0') && p > s)
		 {
			if (isPalindrome(r, p - 1)) {
			} else {
				char *temp = r;
				while (temp <= p - 1) {
					*q++ = *temp++;
				}
				if (*p == ' ') {
					*q++ = *p;
				}
			}
			if (*p == ' ') {
				r = p + 1;
			} else {
				break;
			}
		}
		p++;
	}
	while (q > s && *(q - 1) == ' ') {
		q--;
	}
	*q = '\0';
}
 */
