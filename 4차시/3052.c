#include <stdio.h>

int main(void)
{
    int a;
    int N = 0;
    int cnt = 0;
    int n[41]= {0, 0};

    for (int i = 1; i < 11; i++)
    {
        scanf("%d", &a);

        if (N = a % 42)
        {        
            n[N] += 1;
        }
        else
            ;
    }
    for (int i = 0; i <= 41; i++)
    {
        if (n[i] >= 1)
        {        
            cnt++;
        }
    }
    return 0;
}