#include<stdio.h>
int main(){
int i,j,length,Area,maxarea,height[]={1,8,6,2,5,4,8,3,7};
for(i=0;i<9;i++){
    for(j=i+1;j<9;j++){
        if(height[i]==height[j]){
            length=abs(i-j);
            Area=height[i]*length;
        }
        else{
            if(height[i]>height[j]){
                length=abs(i-j);
                Area=height[j]*length;
            }
            else{
                length=abs(i-j);
                Area=height[i]*length;
            }
        }
        if(maxarea<Area){
            maxarea=Area;
        }
    }
}
printf("%d",maxarea);
}
