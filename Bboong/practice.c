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
	int cal = rand() % 4 + 1;
	int correct;
	int answer;
	char calcu;
	switch (cal) {
	case 1:
		calcu = '+';
		correct = First + Second; break;
	case 2:
		calcu = '-';
		correct = First - Second; break;
	case 3:
		calcu = '*';
		correct = First * Second; break;
	case 4:
		calcu = '/';
		correct = First / Second; break;
	}
	printf("[%d/10] %d %c %d = ", QuizNum, First, calcu, Second);
	scanf_s("%d", &answer);

	if (answer == correct) {
		printf("Correct!\n");
	}
	else {
		printf("Wrong! Answer is %d.\n", correct);
	} 

}