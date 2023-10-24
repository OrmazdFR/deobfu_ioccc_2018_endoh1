#include <stdio.h>

void saveIntToFile(int myvar)
{
	FILE *file = fopen("testFile.txt", "a+");
	if (file == NULL) {
		printf("Failed to open file.\n");
	}

	fprintf(file, "%d", myvar);

	fclose(file);
}

void saveCharToFile(char mychar) {
	FILE *file = fopen("testFile.txt", "a+");
	if (file == NULL) {
		printf("Failed to open file.\n");
	}

	fprintf(file, "%c", mychar);

	fclose(file);
}

void savePixelToFile(int pixel, int k) {
	if ((pixel + 1)%4 == 0) {
		saveCharToFile(k ? 'M' : ' ');
		if ((pixel +1)%24 == 0) {
			saveCharToFile('\n');
		}
	}
}
