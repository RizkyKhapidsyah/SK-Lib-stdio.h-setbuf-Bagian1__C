#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
	Source by CPlusPlus
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	char buffer[BUFSIZ];
	FILE* pFile1, * pFile2;

	pFile1 = fopen("myfile1.txt", "w");
	pFile2 = fopen("myfile2.txt", "a");

	setbuf(pFile1, buffer);
	fputs("This is sent to a buffered stream", pFile1);
	fflush(pFile1);

	setbuf(pFile2, NULL);
	fputs("This is sent to an unbuffered stream", pFile2);

	fclose(pFile1);
	fclose(pFile2);

	_getch();
	return 0;
}