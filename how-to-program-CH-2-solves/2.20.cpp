#include <stdio.h>

int main()
{
 
  int second;
  printf("Enter the total time in seconds: ");
  scanf("%d", &second);
  int hours = second / 3600;
  int minutes = (second % 3600) / 60;
  int seconds = (second% 3600) % 60;
  printf("Time in second: %d:%d:%d\n", hours, minutes, seconds);

  return 0;
}


/*printf("minutes is %f\n",second/60);
	 printf("hour is %f\n",(second % 3600) / 60);
	 printf("second is %f",(second % 3600) % 60));*/