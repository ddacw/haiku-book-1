#include <stdio.h>
#include <malloc.h>

int main(int argc, char **argv) {
	for(int i = 1; i < argc; i++) {
		FILE *Handle = fopen(argv[i], "r");
		if(!Handle || ferror(Handle)) 
			continue;
		char Buffer[2048];
		int ByteRead = fread(Buffer, sizeof(char), 2048, Handle);
		while(ByteRead > 0 && !ferror(Handle)) {
			fwrite(Buffer, sizeof(char), ByteRead, stdout);
			ByteRead = fread(Buffer, sizeof(char), 2048, Handle);
		}
		fclose(Handle);
	}
}

