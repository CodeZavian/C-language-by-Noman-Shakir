#include<stdio.h> 
#include<conio.h> 
int main () 
{ 
 char grade; 
 printf("Enter a grade in capital letters\n"); 
 scanf("%c",&grade); 
 switch(grade)
 {
 	case 'A':
 	printf("you pass");
	break; 
	case 'B':	
	printf("fail");
	break;
	default:
	printf("unvalid");
	break;
 }
 
getch(); 

}

