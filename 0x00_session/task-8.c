#include <stdio.h>

void isEven(int n) {
	if (n % 2 == 0) {
		printf("%d is even\n", n);
	} else {
		printf("%d is odd\n", n);
	}
}

void calculateArea(float n) {
	if (n == 0) {
		printf("no radius specified\n");
	} else {
		printf("the radius exists\n");
	}
}

int main() {
    isEven(3);
 isEven(2);
calculateArea(0);
calculateArea(5);

}
