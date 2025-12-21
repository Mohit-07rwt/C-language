/*#include <stdio.h>
#include <stdlib.h>

void my_itos(char *p);

int main(int argc, char **argv) {
    if (argc < 2) {
 

#include <stdio.h>
#include <stdlib.h>

char* my_itos(char *p);

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: %s \"<expression>\"\n", argv[0]);
        return 1;
    }
    char *result_str = my_itos(argv[1]);
    if (result_str) {
        printf("%s\n", result_str);
        free(result_str);
    }
    return 0;
}

char* my_itos(char *p) {
    int num1 = 0, num2 = 0, i = 0, j = 0, result = 0;
    char s[20], op = '\0';

    num1 = atoi(p);

    for (; p[i]; i++) {
        if (p[i] == '+' || p[i] == '-' || p[i] == '*' || p[i] == '/') {
            op = p[i];
            i++;
            break;
        }
    }

    for (; p[i] && j < 19; i++) {
        s[j++] = p[i];
    }
    s[j] = '\0';

    num2 = atoi(s);

    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else if (op == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            return NULL;
        }
    } else {
        return NULL;
    }
    char *result_str = (char*)malloc(50 * sizeof(char));
    if (!result_str) {
        return NULL;
    }
    sprintf(result_str, "%d%c%d=%d", num1, op, num2, result);
    return result_str;
}
*/



#include <stdio.h>
#include <stdlib.h>

void my_itos(char *p);

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: %s \"<expression>\"\n", argv[0]);
        return 1;
    }
    my_itos(argv[1]);
    return 0;
}

void my_itos(char *p) {
    int num1 = 0, num2 = 0, i = 0, j = 0, result = 0;
    char s[20], op = '\0';

    num1 = atoi(p);

    for (; p[i]; i++) {
        if (p[i] == '+' || p[i] == '-' || p[i] == '*' || p[i] == '/') {
            op = p[i];
            i++;
            break;
        }
    }

    for (; p[i] && j < 19; i++) {
        s[j++] = p[i];
    }
    s[j] = '\0';

    num2 = atoi(s);

    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else if (op == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            return;
        }
    } else {
        return;
    }
    printf("%d%c%d=%d\n", num1, op, num2, result);
}

