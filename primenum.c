#include <stdio.h>


/**
1: prime number
0: NOT prime number
**/

int primenum(unsigned int n)
{
	int i,halfn;
		
	if( n==1 ) return 0;
	if( n==2 ) return 1;
	if( n%2==0 ) return 0;  /** 2ˆÈŠO‚Ì‹ô”‚Í‘f”‚Å‚È‚¢ **/
	
	
	halfn = n/2;
	for( i=3; i<halfn; i=i+2){
		if( n%i==0 ){ return 0; }
	}
	
	return 1;
}


int main( int argc, char *argv[] )
{
	unsigned int n = 23;
	int p,i;

	for( i=1; i<100000; i++ ){
		n = (unsigned int)i;
		
		if( n <= 0 ){
			puts("NOT natural number");
			return 1;
		}
	
		p = primenum( n );
	
		if( p ){ 
			printf("%d is prime number\n",n);
		}else{
			printf("%d is NOT prime number\n",n);
		}
	}
	
	return 0;

}


