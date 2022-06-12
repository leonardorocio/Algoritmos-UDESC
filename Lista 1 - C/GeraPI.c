#include <stdio.h>
#include <math.h>

int main() {
	long long int n, cont, i;
	scanf("%lld", &n);
	double pi = 0;
	for (i = 1, cont = 0; cont <= n; i += 2, cont++) {
		pi += pow(-1, cont) * (4.0 / i);
//		printf("%lld\n", cont);
//		if (cont % 2 != 0) {
//			pi -= (4.0 / i);
//		} else {
//			pi += (4.0 / i);
//		}
	}
	printf("%.15lf", pi);
	return 0;
}
