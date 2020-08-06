/*A train leaves station A at 4.00 a.m and travels at 80kmph. 
After every 30 minutes, it reaches a station where it halts for 10 minutes. 
It reaches its final destination B at 1.00 p.m. 
Display a table showing its arrival and departure time at every intermediate station. 
Also calculate the total distance between A and B.*/
#include<stdio.h>
#include<stdlib.h>

//To validate hour
int validate_hour(int hour)
{
	if(!hour || hour<0 ||hour>24)
	{	
		printf("Wrong Value of hour!!");
		return 1;
	}
	return 0;
}

//TO validate minute
int validate_minute(int minute)
{
	if(!minute || minute<0 ||minute>60)
	{	
		printf("Wrong Value of minute!!");
		return 1;
	}
	return 0;
}

//To validate value(positive integer or not)
int validate_value(int value)
{
	if(!value || value<=0 )
	{	
		printf("Wrong Value !!");
		return 1;
	}
	return 0;
}

//TO accept data from user
int accept_data(int *start_hour,int *start_minute,int *end_hour,int *end_minute,int *approx_hault_time,int *approx_time_btwn_station,int *approx_speed)
{
	printf("Enter the starting time of the train(hour part-24 pattern):");
	scanf("%d",start_hour);
	
	printf("Enter the starting time of the train(minute part):");
	scanf("%d",start_minute);
	
	printf("Enter the end/stop time of the train(hour part-24 pattern):");
	scanf("%d",end_hour);
	
	printf("Enter the end/stop time of the train(minute part):");
	scanf("%d",end_minute);

	printf("Enter the approximate hault time of the train(minutes):");
	scanf("%d",approx_hault_time);
	
	printf("Enter the approximate time between each stations of the train(minutes):");
	scanf("%d",approx_time_btwn_station);
	
	printf("Enter the approximate speed of the train(kmph):");
	scanf("%d",approx_speed);
}


int main()
{
	int start_hour,start_minute,end_hour,end_minute,approx_hault_time,approx_time_btwn_station,approx_speed;
	int total_time,station_no=1,arrival_time=0,departure_time;
	char choice;
	do
	{
    	accept_data(&start_hour,&start_minute,&end_hour,&end_minute,&approx_hault_time,&approx_time_btwn_station,&approx_speed);
    	
    	//Calling function to validate values
    	if(validate_hour(start_hour) || validate_minute(start_minute) || validate_hour(end_hour) || validate_minute(end_minute) ||  validate_value(approx_hault_time)|| validate_value(approx_time_btwn_station) ||validate_value(approx_speed))
    	{
    	    
    	    getchar();
        	getchar();
        	printf("Do you want to try again?(y/n):");
        	scanf("%c",&choice);
        	continue;
    	}
    
    	total_time=60*(end_hour-start_hour)+start_minute+end_minute;
    	printf("Total distance covered is %d km\n",(total_time*approx_speed)/60);
    	printf("Stations\tArrival time\tDeparture time\n");
    	departure_time=approx_hault_time;
    	while(total_time>=0)
    	{
    		
    		printf("Station %d\t%d\t\t%d\n",station_no++,arrival_time,departure_time);
    		arrival_time=departure_time+approx_time_btwn_station;
    		departure_time=arrival_time+approx_hault_time;
    		total_time=total_time-(approx_hault_time+approx_time_btwn_station);
    	}
	}while(choice=='y'||choice=='Y');
	return;
}
