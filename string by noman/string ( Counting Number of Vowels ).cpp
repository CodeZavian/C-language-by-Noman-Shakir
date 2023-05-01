#include<stdio.h>

int CountVowel(char str[]);
int main()
{
       char str[100];
       fgets(str,100,stdin); // we aslo usee this insread of scanf b/c it count from vowel from para grapg
     //  scanf("%s",str); // it does not count after space
       int counting_vowel =  CountVowel(str);  // callin our function
      printf("number of vowels are %d",counting_vowel);
      return 0;

}
int  CountVowel(char str[])
{
       int count = 0;
      for(int i=0;str[i]!='\0';i++)  // jab tak \0 na a jae loop chalta rahe ga
      {
           if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
           {
              count++;
           }
      }
      return count;    // isko uper return kr dein ga

}