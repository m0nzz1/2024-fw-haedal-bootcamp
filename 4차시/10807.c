// 개수 세기
#include <stdio.h>

int main(void)
{
    int n, v;
    int cnt = 0;
    int N[100] = {0, 0};

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &N[i]);
    }

    scanf("%d", &v);
    for (int i = 0; i < n; i++)
    {
        if (N[i] == v)
            cnt++;
    }
    printf("%d", cnt);

    return 0;
}