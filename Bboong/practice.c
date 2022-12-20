#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main() {
	srand(time(NULL));
	int QuizNum = 1;
	for (int i = 1; i <= 10; i++) {
		Quiz(QuizNum);
		QuizNum++;
	}
	
}

int Quiz(int QuizNum) {
	int First = rand() % 20 + 1;
	int Second = rand() % 20 + 1;
	int cal;
	printf("[%d/10] %d + %d = ", QuizNum, First, Second);
}