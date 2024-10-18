// array.c
#include <stdio.h>
#include "array_funcs.h"

#define NUM_STUDENTS 5

void print_grades(int grades[]) {
	for (int i = 0; i < NUM_STUDENTS; i++) {
		printf("Student %d: %d\n", i + 1, grades[i]);
	}
}

int main(void) {
	int std_grades[NUM_STUDENTS] = { 85, 92, 78, 90, 88 };

	printf("Initial grades:\n");
	print_grades(std_grades);
	
	// ����ڰ� ���� �ٲٱ�
	int idx1, idx2;
	printf("\nSwap two grades (1-%d):\n", NUM_STUDENTS);
	scanf_s("%d %d", &idx1, &idx2);
	
	// 0-��� �ε��� ������ �����ϱ�
	idx1--;
	idx2--;
	
	// �´� �ε��� Ȯ���ϰ� ���� �ٲٱ�
	if (idx1 >= 0 && idx1 < NUM_STUDENTS &&
		idx2 >= 0 && idx2 < NUM_STUDENTS) {
		swap_grades(std_grades, idx1, idx2);

		printf("\nGrades after swap:\n");
		print_grades(std_grades);
	}
	else {
		printf("Invalid student numbers!\n");
	}
	
	// ���� �����ϱ�
	insertion_sort(std_grades, NUM_STUDENTS);

	printf("\nAfter sorting:\n");
	print_grades(std_grades);

	getch();

	return 0;
}