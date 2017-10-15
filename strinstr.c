#include<stdio.h>
#include<string.h>


struct student{
	char name[10];
	int roll_no;
	struct dob{
		int date;
		int month;
		int year;
	}d;

}s;


void main(){
	//struct student s;
	//struct dob d;
	strcpy(s.name,"Shahid");
	s.roll_no=27;
	s.d.date= 20;
	s.d.month=02;
	s.d.year=1998;
	printf("%s having rollno %d was born on %d/%d/%d",s.name,s.roll_no,s.d.date,s.d.month,s.d.year);
}
