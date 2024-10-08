#include <stdio.h>

int main(void)
{
	// FILE *fopen(const char *filename, const char *mode);

	FILE *fp = fopen("text.txt", "w");

	fputs("#이름: 윤성우\n", fp);
	fputs("#주민번호: 900208-1012589\n", fp);
	fputs("#전화번호: 010-1111-2222\n", fp);
	fputs("#즐겨먹는 음식: 물\n", fp);
	fputs("#취미: 호작질하기", fp);

	fclose(fp);

	return 0;
}