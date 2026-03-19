#include <stdio.h>

int main()
{
	int num = 0;
	scanf("%d", &num);

	if (num < 2) {
		printf("false");
		return 0;
	}

	int arr[num+1];

	for (int i = 0; i <= num; i++) {
		arr[i] = i;
	}

	for (int i = 2; i < num; i++) {
		if (arr[i] == 0) continue;
		for (int j = i * i; j <= num; j += i) {
			arr[j] = 0;
		}
	}

	if (arr[num] != 0) { printf("%s", "true") ;}
	if (arr[num] == 0) {printf("%s", "false");}

return 0;
}
