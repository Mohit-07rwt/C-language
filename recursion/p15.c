#include <stdio.h>

void my_strncpy(char *p, char *q, int n) {
	if (n == 0) {
		return;
	}
	*p = *q;
	if (*q != '\0') {
		my_strncpy(p + 1, q + 1, n - 1);
	} else {
		my_strncpy(p + 1, q, n - 1);
	}
}

int main() {
	char s[100],s1[100];
	int n;
	printf("enter string:");
	scanf("%s",s1);
	
	printf("enter number of character to copy:");
	scanf("%d",&n);

	my_strncpy(s, s1, n);

	printf("Source string: %s\n", s1);
	printf("Copied string: %s\n", s);

	return 0;
}

