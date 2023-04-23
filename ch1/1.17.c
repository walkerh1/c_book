#include <stdio.h>
#define MAXLINE 1000
#define MAXLENGTH 80

/* read a line into `line`, return length */
int get_line(char line[], int maxline);

/* print the length and text of arbitrarily long lines  */
int main(void) {
    int len;
    char line[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0)
        if (len > MAXLENGTH) printf("%s", line);

    return 0;
}

int get_line(char line[], int maxline) {
    int c, i;

    for (i = 0; i < maxline-1 && (c=getchar()) != EOF && c != '\n'; i++)
        line[i] = c;

    if (c == '\n') {
        line[i] = c;
        i++;
    }

    line[i] = '\0';
    return i;
}
