#include<stdio.h>
#include<sys/types.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/stat.h>
int main(int argc,char *argv[])
{
int fd,n;
char buff[512];
if(argc!=2)
printf("error...");
if((fd=open(argv[1],4))<0)
{
printf("ERROR");
return 0;
}
while(n=read(fd,buff,sizeof(buff))>0)
write(1,buff,n);
return 0;
}
