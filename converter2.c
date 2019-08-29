#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	  for (int i = 1; argv[i]!=NULL; ++i){ 
		for (int j=0; argv[i][j]!=0; ++j) {      	
			if(isupper(argv[i][j])){
				argv[i][j]= tolower(argv[i][j]);
				printf("_");
			}
			
			printf("%c", argv[i][j]);
	       	}
		printf("\n");
       	}


return 0;
}
