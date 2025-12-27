#include <stdio.h>
int main (){
	int h, m, s, am;
	scanf("%d:%d:%d", &h, &m, &s);
	printf("hour:%d\nminute:%d\nsecond:%d\n", h, m, s);
	int total = (h*3600)+(m*60)+s;
	printf("Next minutes: ");
	scanf("%d", &am);
	total = total + (am*60);
	h = total / 3600;
	total = total - (h*3600);
	m = total / 60;
	total = total - (m*60);
	
	if(m > 60){
		h = h + (m/60);
		m = m % 60;
	}
	if(h >= 24){
		h = h %24;
	}
	printf("\nhour:%d\nminute:%d\nsecond:%d\n", h, m, total);
	
	}