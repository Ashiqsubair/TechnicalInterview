#include<stdio.h>
#include<conio.h>
void main(){
	int dd,mm,yyyy,date=0;
	int daysInMonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d%d",&dd,&mm,&yyyy);
	if(mm<2){
		printf("%d",dd);
	}
	else{
	            int i=0;
	            int totalday=0;
	            for(i=0;i<mm-1;i++){
	                totalday=totalday+daysInMonth[i];
	            }
	           //check leap year
	           if(yyyy%4==0&&yyyy%100!=0 || yyyy%400==0){
	               totalday=totalday+1;
	               totalday=totalday+dd;
	           }else{
	           		totalday=totalday+dd;
	           }
	           printf("%d",totalday);
	    }
	}
