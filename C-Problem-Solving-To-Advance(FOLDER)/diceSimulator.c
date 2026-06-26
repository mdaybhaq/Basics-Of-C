#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand(time(NULL));

	int dice = 5;
	int roll = 0; //for stroing the value of dice from 1 t 6/

	for (int i = 1 ; i <= dice ; i++){ // For rolling dice 5 times , Loop runes 5 times.

		roll = rand() % 6+1;//rand() generates a random number like  32645
							//then mod by 6 will give remained 0 to 5. Any number divided by 6 gives 0 to 5 as remainder.
							//But we need number from 1 to 6 like that of Dice.
							//So addting 1 will always give any number from 1 to 6.
		printf("Dice %d : %d \n", i, roll);

	}

	return 0;
}
