#include <unistd.h>
int main ()
{

int n; // to control the user output same as input 

char b;
n=read (0,b,30);
write(1,b,n); // user will type till nount n and n will be printed out 
 
}

