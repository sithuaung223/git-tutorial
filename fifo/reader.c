#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

#define MAX_BUF 1024

int main()
{
   int fd;
   char * myfifo = "/home/saung/Projects/fifo/myfifo";
   char buf[MAX_BUF];
   int n;

   /* open, read, and display the message from the FIFO */
   fd = open(myfifo, O_RDONLY);
   read(fd, &n, sizeof(n));
   printf("Received: %d\n", n);
   close(fd);

   return 0;
}
