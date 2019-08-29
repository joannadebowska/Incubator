#include <stdio.h>
#include <ctype.h>

int main(int counter, char *words[])
{
	  for (int i = 1; words[i]!=NULL; ++i){ 
		for (int j=0; words[i][j]!=0; ++j) {      	
			if(isupper(words[i][j])){
				words[i][j]= tolower(words[i][j]);
				printf("_");
			}
			
			printf("%c", words[i][j]);
	       	}
		printf("\n");
       	}


return 0;
}
