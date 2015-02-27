#include <stdio.h>
#include <math.h>

int main() {
	float input;
	float sum = 0;

	for (int i = 0; i < 4; i++) {
		scanf("%f,", &input);

		sum += input;
	}

	if (sum >= 0) {
		if (sum - (int)sum >= 0.5) {
			sum = ceil(sum);
		} else {
			sum = floor(sum);
		}
	} else {
		if (sum - (int)sum <= -0.5) {
			sum = floor(sum);
		} else {
			sum = ceil(sum);
		}
	}

	printf("%.0f\n", sum);

	return 0;
}