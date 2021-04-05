#include<iostream>
using namespace std;
void main() {
	int loop = 4;
	while (loop < 10) {
		int inner = 1;
		printf("====== %d ´Ü ====== \n\n", loop);
		while (inner <= 9) {
			printf("%d * %d = %d \n", loop, inner, loop * inner);
			inner++;
		}
		loop += 4;
		printf("\n");
	}
	fgetc(stdin);
}