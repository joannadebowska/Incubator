#include <stdio.h>


int main(int argc, char *argv[])
{
	for (char **arg = argv; *arg; ++arg) { 
		for (char *p = *arg; *p; ++p) {      	
			if (*p>='A' && *p<='Z'){
				*p=*p+32;
				printf("_");
				printf("%c", *p);
			}
			else
				printf("%c", *p);
		
						        }
			printf("\n");
				        }
	        return 0;
}
