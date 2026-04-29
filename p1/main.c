#include <stdio.h>

int main()
{
	int N;
	int found = 0;
	scanf("&d", &N);

	for (int a=1; a*900<N; a++) {
		for (int b=2;  b*750<N; b+=2) {
			for (int c=1; c*200<N; c++) {
				if (a*900 + b*750 + c*200 == N){
				    printf("%d %d %d\n", a, b, c);
				    found=1;
				}
			}
		}
	}

    if (!found){
        printf("none");
    }
    
	return 0;
}
