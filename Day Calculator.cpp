using namespace std;
#include<iostream>
main()
{
	int yr,leapday,firstday,normaldays,totaldays;
	cout<<"Enter a year:";
	cin>>yr;
	normaldays=(yr-1)*365;
	leapday=(yr-1)/4-(yr-1)/100+(yr-1)/400;
	totaldays=normaldays+leapday;
	firstday=totaldays%7;
	if(firstday==0)
		printf("Monday");
	else if(firstday==1)
		printf("Tuesday");
	else if(firstday==2)
		printf("Wednesday");
	else if(firstday==3)
		printf("Thursday");
	else if(firstday==4)
		printf("Friday");
	else if(firstday==5)
		printf("Saturday");
	else
		printf("Sunday");						
}
