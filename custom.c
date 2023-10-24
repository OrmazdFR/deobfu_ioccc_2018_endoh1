#include <stdio.h>

void putWord(char* word) {
	while(*word) {
		putchar(*word++);
	}
}
