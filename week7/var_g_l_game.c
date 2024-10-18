// var_g_l_game.c
#include <stdio.h>
#include <stdlib.h> // rand(), srand(42)
#include <time.h>
// time() - 1970�� 1�� 1�� 00:00���� ���ݱ��� m, s

// ���� ����
int randNum;

// ���� �ʱ�ȭ �Լ�
void gamelnit() {
	srand(time(0));
	randNum = rand() % 10 + 1; // (0~9)+1 = 1~10
}

// ���� ���� �Լ�
void gamePlay() {
	// ���� ����
	int guess = 0;
	int count = 0;
	int allowed = 5; // 5���� ������ �� �� ����

	printf("Guess a number (1~10): ");

	do {
		scanf_s("%d", &guess);
		count++;

		if (guess == randNum) {
			printf("Good guess! You win!");
			break;
		}
		else if (guess < randNum) {
			printf("Too low! Try again!");
		}
		else if (guess > randNum) {
			printf("Too high! Try again!");
		}
	} while (count <= allowed); // 5�� ������ ����

	printf("Too many guesses! You lose!");
}

int main(void) {
	gamelnit();
	gamePlay();
	return 0;
}