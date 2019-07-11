#include <stdio.h>
// This program return the most oldest age

int maxEdad(int x,int y,int z);

int main() {
	// We declare three ages for compare
	int e1,e2,e3;
	printf(" Writte three random ages: \n");
	// Reading fron keyboard
	scanf("%d %d %d",&e1,&e2,&e3);
	// Calling to fuction maxEdad()
	maxEdad(e1,e2,e3);		
	return 0;
}
// We program our fuction for chosing the most oldest age
int maxEdad(int x, int y, int z) {
	int mayor;
	if(x > y && x > z) {
		mayor = x;
		printf("La mayor edad es : %i \n",x);	
	} else if (y > x && y > z) {
		mayor = y;
		printf("La mayor edad es : %i \n",y);
	} else {
		mayor = z;
		printf("La mayor edad es : %i \n",z);
	}
	return mayor;
}
