#include <stdio.h>

int main() {
    int x=0;
    int firstValue;
    int secondValue;
    int thirdValue;
printf("Type first number: \n");
scanf("%d", &firstValue);

printf("Type second number: \n");
scanf("%d", &secondValue);

printf("Type third number: \n");
scanf("%d", &thirdValue);
    
    if(firstValue == secondValue && secondValue == thirdValue){
        x=4; 
    }
   else if(firstValue == secondValue){
        x=1;
    }
    else if(firstValue == thirdValue){
        x=2;
    }
    else if(secondValue == thirdValue){
        x=3;
    }
    else {
      x=0;  
    }
    switch(x){    
case 1:  
 printf("First and Second values are equal");   
 break;   
case 2: 
 printf("First and Third values are equal");        
 break;  
case 3: 
 printf("Second and Third values are equal");        
 break; 
case 4: 
 printf("All the values are equal");        
 break; 
default:     
 printf("No values are equal");    
}    

    return 0;
}  
