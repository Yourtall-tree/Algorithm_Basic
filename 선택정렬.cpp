#include <stdio.h>
int main(void) {
	//��Ȳ : 1,10,5,8,7,6,4,3,2,9 ��� �Է��� ��������
	//1,2,3,4,5,6,7,8,9,10���� ����
	int i, j, min, index,tmp;
	int arr[10] = { 1,10,5,8,7,6,4,3,2,9 };
	for (int i = 0; i < 10; i++) {
		//ó���� min���� ������ ���ں��� �ξ� ū ���ڸ� �־��ش�.
		min = 999;
		for (int j = i; j < 10; j++) {
			if (min > arr[j]) {
				min = arr[j];
				index = j;
			}
		}
		//���� min����i�����Ǽ����߿� ���� ���� ���� ��
		tmp = arr[i];
		arr[i] = arr[index];
		arr[index] = tmp;
		printf("%d��° ���ڴ� %d\n", i, arr[i]);
	}
	for (int i = 0; i > 10; i++) {
		printf("%d", arr[i]);
	}
}