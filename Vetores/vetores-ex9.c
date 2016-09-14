#include <stdio.h>

//Exercícios de recurssão

/******** FATORIAL ********
***************************/


int fatorial(int n){
	if(n == 0) return 1;
	if(n > 0) return(n * fatorial(n-1));
}

int main(){
 	int n = 3;
 	printf("%d\n", fatorial(n));
}



/******** POTENCIA ********
***************************

int poten(int x, int y){
	int *z = &x;
	int *w = y;
	if (z == 0) return w;
	if (w == 0) return z;
	else return w+= (poten)
	if(x == 0 || y == 1) return 1;
	else return y*=(poten(x-1, y));

}

int main(){
 	int x = 2;
 	int y = 10;

 	printf("%d\n", poten(x,y));
} */

/******** BUSCA ********
************************

int search(int a[], int n, int k, int i, int j){
	if(j >= n-1){
		i = i + 1;
		j = i + 1;
	}
	if (i == n-1) return 0;
	if (a[i] + a[j] >= k) return (1 + search(a,n,k,i,j+1));
	else return (search(a,n,k,i,j+1));
}
int main(){
 	int k = 5;
 	int a[]={1,3,4,5,6};
 	int n = 5;
 	int i = 0;
 	int j = 1;

	printf("%d\n", search(a,n,k,i,j));

}*/