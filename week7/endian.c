// endian.c
#include <stdio.h>

void check_endianness() {
	// ù �޸� �ּҰ� 0x12�̸� �� ������̰�
	// 0x78�̸� ��Ʋ ������̴�.
	unsigned int num = 0x12345678;
	unsigned char* byte_ptr = (unsigned char*)&num;

	// ��� ����Ʈ �ּҿ� ���� ����ϱ�
	for (int i = 0; i < sizeof(num); i++) {
		printf("%p    0x%02x\n", (byte_ptr + i), byte_ptr[i]);
	}

	// ù ����Ʈ �ּҸ� Ȯ���ϰ� �����Ͻ� ����ϱ�
	if (byte_ptr[0] == 0x12) {
		printf("\nThis is a big-endian system.");
	}
	else if (byte_ptr[0] == 0x78) {
		printf("\nThis is a little-endianness!~");
	}
	else {
		printf("\nUnknown endianness!~");
	}
}
int main(void) {
	check_endianness();
	getch();
	return 0;
}