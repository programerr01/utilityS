#include <stdio.h>
#include <unistd.h>

int main(){
	char cwd[1024];// assuming path length is less than 1024

	if(getcwd(cwd,sizeof(cwd)) != NULL){
		printf("%s",cwd);
	}
	else{
		printf("Couldn't locate the directory");
		return 1;
	}

	return 0;
}
