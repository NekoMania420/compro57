#include <stdio.h>
#include <string.h>

void fight(char* );

int hp[2]; // Player1, Player2

int main() {
	int inputNum;
	char atk[1000];

	scanf("%d %s", &inputNum, atk);

	hp[0] = hp[1] = inputNum;

	fight(atk);

	return 0;
}

void fight(char* atk) {
	int powerLvl;
	int combo[2] = {0, 0};

	for (int i = 0; i < strlen(atk); i++) {
		powerLvl = atk[i] - '0'; // Convert number character to integer

		if (powerLvl % 2 == 0) {
			// puts("Player 1 atk.");
			hp[1]--;
			combo[0]++;
			combo[1] = 0;
		} else {
			// puts("Player 0 atk.");
			hp[0]--;
			combo[1]++;
			combo[0] = 0;
		}

		/* Check if someone make 3 combo */
		if (combo[0] == 3) {
			// puts("Player 1 combo3");
			hp[1] -= 3;
			combo[0] = 0;
		} else if (combo[1] == 3) {
			// puts("Player 0 combo3");
			hp[0] -= 3;
			combo[1] = 0;
		}
		// printf("%d %d\n", hp[0], hp[1]);
	}

	/* Print result */
	if (hp[0] > hp[1]) {
		printf("0");
	} else if (hp[0] < hp[1]) {
		printf("1");
	} else {
		printf("-");
	}
	printf(" %d %d\n", hp[0], hp[1]);
}
