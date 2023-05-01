#include<stdio.h>

void printString(char arr[]);// size ki need nai string main
int main()
{
      char istValue[] = "NOMAN";  // declare two string
      char SecondValue[] = "AMMAR";
      printString(istValue);  // calling 1st value in function
      printString(SecondValue); // calling 2nd function 
      return 0;

}
void printString(char arr[])
{
     for(int i=0;arr[i]!='\0';i++)    // coditon yeh hogoi i tab tak chale ga jab yak arr[i] \O ka equal nahin hoga
     // yeh normal array main nahin pata hota humhain
       {
          printf("%c",arr[i]);    // bari bari jo store value ha ak ak kae print hogi
       }

       printf("\n");     // it print new line 
}

       