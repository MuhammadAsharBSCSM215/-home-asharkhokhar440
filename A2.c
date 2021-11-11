#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void){

  int parentid, status;
  parentid = fork();
  if(parentid==0){
  int num = 1; // Child Process
   for(int i=1; i<=10; i++){
     printf("%d x %d = %d\n",num, i, num*i);
  }
 }
 else{ // Parent Process
   wait(&status);
   printf("In the parent Process :/nName is Muhammad Ashar and CNIC is 36502-1234567-1\n");
 }

 return 0;
}