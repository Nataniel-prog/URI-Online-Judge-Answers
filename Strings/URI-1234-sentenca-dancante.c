#include <stdio.h>
#include <string.h>
 
int main()
{
	char string[50];
	strcpy(string, " ");
   	int j;
   	int i, k;

   	while(gets(string) != NULL){

   		k = strlen(string);

   		j=0;

	   	for(i = 0; i<k; i++){

	   		if (string[i] != ' '){

	   		j++;	

		   		if(j % 2 != 0){
					if(string[i] >= 97 && string[i] <= 122)
						string[i] -= 32;
					else
						string[i] = string[i];
					

				}else{
					if(string[i] >= 65 && string[i] <= 90)
						string[i] += 32;
					else
						string[i] = string[i];
					}
				}
		

	   	}
	   	printf("%s\n", string);
	 	}
   return 0;
}
