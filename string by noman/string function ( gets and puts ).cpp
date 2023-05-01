#include<stdio.h>
int main()
{
     char str[100];
    /* gets(str); for input dun use it is unsafe lead to hack to system 
     it is use to print any para or full line or full names it also  print space  
     jo lihkan ga wohi print hoga*/
     // we use fgets(str,n,filename)   // b/c gets is not safe
     fgets(str,100,stdin);  // n is max size od string  str is string 
     puts(str); // for output   and it also give new lines dun need to use \n in puts
     return 0;
}