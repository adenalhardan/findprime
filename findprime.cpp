#include <iostream>

using namespace std;

bool IsPrime(int, int, int[]);
int Prime(int);

int main() {
	
	cout << Prime(303);
	return 0;
}

int Prime(int x) {
	int primes[x];
	
	primes[0] = 2;
	primes[1] = 3;
		
	for(int i = 2; i < x; i++) {
		primes[i] = primes[i - 1];
			
		while(!IsPrime(primes[i], i, primes)) {
			primes[i]++;
		}
	}
	
	return primes[x - 1];
}

bool IsPrime(int x, int i, int primes[]) {
	if((x % 2 != 0) && (x % 3 != 0)) {
		for(int j = 0; j < i; j++) {
			if(x % primes[j] == 0) {
				return false;
			}
		}
		
		return true;
	} else {
		return false;
	}
}

