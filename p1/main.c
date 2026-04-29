#include <stdio.h>

int main()
{
	int N;
	int found = 0;
	scanf("&d", &N);

	for (int a=1; a<=N/900; a++) {
		for (int b=2;  b<=N/750; b+=2) {
			for (int c=1; c<=N/200; c++) {
				if (a*900 + b*750 + c*200 == N){
		            if (a>c || a>b){
		                printf("%d %d %d\n", a, b, c);
				        found=1;
		            }
				}
			}
		}
	}

    if (found==0){
        printf("none");
    }
    
	return 0;
}
