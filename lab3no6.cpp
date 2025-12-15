#include <stdio.h>

int main () {
	int score, almostb;
	scanf("%d",&score);
	almostb = 75-score;
if (score >= 68) {
	((score>=85)? printf("A"):
	(score>=75)? printf("B"):
	printf("C \nError score = %d", almostb));
} else {
((score>=55)? printf("D"):
	(score>=0)? printf("F"):
	printf("Error score"));
}
}

