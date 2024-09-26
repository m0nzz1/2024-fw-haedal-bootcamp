// 평균 구하기
#include <stdio.h>

int main(void)
{
	int n;
	int s[1000] = { 0, 0 };
	int max = -1000000;
	float score = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &s[i]);

		if (max < s[i])
			max = s[i];
	}
	for (int i = 0; i < n; i++)
	{
		score += (float)s[i] / max * 100;
	}
	printf("%f", (float)score / n);
	return 0;
}