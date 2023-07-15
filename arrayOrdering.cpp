#include stdio.h
#include conio.h
int main(){
	int arr[10],int i,j,temp,x;
	printf("Enter the numbers");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=4;i++){
		for(j=0;j<=4;j++)
		if(arr[i]>arr[j]){
			temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
		}
	}
	for(i=5;i<=9;i++){
		for(j=5;j<=9;j++)
		if(arr[i]<arr[j]){
			temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
		}
	}
	for(x=0;x<10;x++){
		printf("%d",arr[x]);
	}
}
