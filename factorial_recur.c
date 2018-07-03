
/*In mathematics, the factorial of a non-negative integer n, denoted by n!, is
* the product of all positive integers less than or equal to n.
* For example, 5 ! = 5 × 4 × 3 × 2 × 1 = 120.
*/

#include <stdio.h>
#include <stdlib.h>		//for exit();


/*We made the return type of factorial function is u64 only then it is able to
* accomode the factorial of*/
unsigned int long long fact( int);

unsigned int long long fact( int n)
{
	if((n == 1) || (n == 0)){
		return 1;	
	}else{
		return ( n * fact( n - 1));
	}
}


int main()
{
	int n;
	
	printf("Enter the no. whose factorial need to be computed\n");
	scanf("%d", &n);
	if( n < 0){
		printf("Entered value is negative or might got overflowed\n");
		exit(1);
	}else{}
		printf("Factorial of %d is:%llu\n", n, fact(n));

	return 0;
}


