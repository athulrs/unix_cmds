#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
char buff[512];
int f1,f2,n;
if((f1=open(argv[1],O_RDONLY))<0)
 printf("error...");
if((f2=creat(argv[2],0644))<0)
 printf("error...");
while((n=read(f1,buff,sizeof(buff)))>0)
if((write(f2,buff,n))<n)
 printf("error...");
close(f2);
remove(argv[1]);
}