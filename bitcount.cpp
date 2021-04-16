#include<stdio.h>
int main(){
	unsigned binarynum = 101;
	int b;

	for(b = 0;binarynum != 1;binarynum >>= 1){
		if(binarynum & 01){
			printf("%d\n",binarynum);
		b++;
	    }
	}

	printf("%d 1'\s present",b);
	return 0;
}
