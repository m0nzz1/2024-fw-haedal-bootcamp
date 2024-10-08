#include <stdio.h>

int main(void)
{
	int A[42] = { 0 };
	int B[42] = { 0 };
	int n;
	int cnt = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &n);
        n = n % 42;
		A[n] = n;

		if (A[n] != 0)
		{
			B[n] += 1;
		}
		else if (A[0] == 0)
		{
			B[0] += 1;
		}
	}
	for (int i = 0; i <= 41; i++)
	{
		if (B[i] >= 1)
		{
			cnt += 1;
		}
	}
	printf("%d", cnt);
}