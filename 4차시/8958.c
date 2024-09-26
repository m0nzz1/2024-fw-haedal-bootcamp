#include <stdio.h>

int main(void)
{
    int n, i;
    int score = 0;
    char* s[80] = {0, 0};

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%c", s[i]);

        if (s[i] == 'O')
        {
            score++;
        }
    }
    printf("%d", score);

    return 0;
}