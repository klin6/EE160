#include <stdio.h>
#define BASE 10
int dig_it(int a, int b);

int main()
{ 
int i;
int x, m;

m = 463;

for(i = 4; i < BASE; i+=4){ 
	x = dig_it(m,i);
	if(x){ 
		m -= x * i;
		printf("%d out from %d is %d\n", i, x, m);

	}
	else printf("no %d\n", i);
}
}


int dig_it(int x, int m){ 

	int i = 1;
	while( x > 0){ 
		if( x % BASE == m)
		return i;
		x = x / BASE;
		i = i * BASE;
	}
	return 0;
}
