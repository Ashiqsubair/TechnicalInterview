#include<stdio.h>
#include<conio.h>
void main(){
	int dd,mm,yyyy,i,code,odddays;
	int monthcode[]={6,2,2,5,0,3,5,1,4,6,2,4};
	scanf("%d%d%d",&dd,&mm,&yyyy);
	int yearsplitlast=yyyy%400;
	int yearsplitfirst=yyyy-yearsplitlast;
	code=monthcode[mm-1];
	if(yearsplitlast==100){
		odddays=5;
	}
	if(yearsplitlast==200){
		odddays=3;
	}
	if(yearsplitlast==300){
		odddays=1;
	}
	if(yearsplitlast==400){
		odddays=0;
	}
	
	date=yyyy%100;
	
}
