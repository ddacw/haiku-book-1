#include <cstring>
#include <cstdio>
char String[1024];
int main() {
	gets(String);
	int Length = strlen(String);
	for(int i = 0; i < Length; i++) 
		printf("%d ", int(String[i]));
	
	printf("\n");
	
	for(int i = 0; i < Length; i++) 
		printf("0x%x ", String[i]);

	printf("\n");

	for(int i = 0; i < Length; i++)
		printf("%o ", String[i]);

	printf("\n");

				
}
