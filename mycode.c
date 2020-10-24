
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


void childTask(){

char input_str[50];
printf("Saya anak, nama saya : ");

scanf("%s", input_str);

printf("Saya %s anak NARUTO  \n",input_str);
//printf("Saya anak, nama saya : ");
}

void parentTask(){

wait(NULL);
printf("Waiting for child process to finish.. \n");
printf("OK JOB IS DONE !\n ");

}

int main(void){

		for(int i=1; i<5; i++){
			pid_t pid = fork();

			if(pid == 0){
				childTask();
				exit(0);
				}
			else if(pid>0){

				/*wait(NULL);
				printf("Waiting for child process to finish.. \n");
				*/
				parentTask();

				}

			else{
				printf("Unble to create child process.");
				}

			//return 0;
			}return 0;
}



