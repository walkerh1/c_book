#include <stdio.h>
#define MAXLINE 1000
#define MAXLENGTH 80

/* read a line into `line`, ignoring trailing whitespace, return length */
int get_line(char line[], int maxline);

/* print the length and text of arbitrarily long lines  */
int main(void) {
    int len;
    char line[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0)
        printf("%d: %s", len, line);

    return 0;
}

int get_line(char line[], int maxline) {
    int c, i, j;

    for (i = 0; i < maxline-1 && (c=getchar()) != EOF && c != '\n'; i++)
        line[i] = c;

    while (i > 0 && line[i-1] == ' ' || line[i-1] == '\t')
        i--;

    if (c == '\n') {
        line[i] = c;
        i++;
    }

    line[i] = '\0';
    return i;
}