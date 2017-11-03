#include<stdio.h>
#include<dir.h>
int  main()
{
        struct dirent *d;
        DIR *dir;
        char buf[256];
        dir = opendir("mydir");
        while(d=readdir(dir))
        {               
                sprintf(buf, "%s/%s", "mydir", d->d_name);
                remove(buf);
        }
        return 0;

}