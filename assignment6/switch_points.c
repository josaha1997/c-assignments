/*Accept x and y coordinates of two points and write a menu driven
 program to perform the following operations till the user selects 
 Exit. i. Distance between points. ii. Slope of line between the points. 
 iii. Check whether they lie in the same quadrant. iv. EXIT*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int x1,x2,y1,y2,choice;
	while(1)
	{
		printf("\n1.Distance between two points\n 2.Slope\n 3.Quadrant\n 4.Exit\nEnter your choice:");
		scanf("%d",&choice);
		if(choice==4)
			exit(0);
		if(choice==1 || choice==2)
		{
			printf("Enter co-ordinates of first point:");
			scanf("%d %d",&x1,&y1);
			printf("Enter co-ordinates of second point:");
			scanf("%d %d",&x2,&y2);
		}
		switch(choice)
		{
			case 1:
					printf("Dictance between the points is:%f ",sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));
					break;
			case 2:			
					printf("SLope is:%f ",(y2-y1)/(x2-x1));
					break;
			case 3:
					printf("Enter co-oridinates of the point");
					scanf("%d %d",&x1,&y1);
					if(x1>0 && y1>0)
						printf(" %d %d lies in first quadrant ",x1,y1);
					else if(x1<0 && y1>0)
						printf(" %d %d lies in second quadrant",x1,y1);
					else if(x1<0 && y1<0)
						printf("%d %d lies in third quadrant",x1,y1);
					else if(x1>0 && y1<0)
						printf("%d %d lies in fourth quadrant",x1,y1);
					else if(x1==0 && y1==0)
						printf("%d %d lies in origin",x,y);
					break;	
			default:
					printf("Invalid Input");
		}
	}
	return 0;
}

		
