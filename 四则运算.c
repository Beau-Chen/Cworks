#include <stdio.h>
int main (void)
{
	double x,y;
	char op;
	int state = -1;
	
	while (state==-1){
		printf("input:\n");
		scanf("%lf",&x);
		while((op = getchar()) !='\n'){
			state =0;
			while (state == 0){
				scanf("%lf",&y);
				switch(op){
					case '+': x+=y;state =1; break;
					case '-': x-=y;state =1; break;
					case '*': x*=y;state =1; break;
					case '/':
						if (y) {
							x/=y;
							state =1;
						}
						else {
							printf("zero!!\n");
							state =0;
						}
						break;
					default:
						printf("illegai operator!!\n");
						state =-1;
				}
			}
		}
	}
	printf("%lf\n",x);
	return 0;
}
