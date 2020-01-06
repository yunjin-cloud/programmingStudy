#include<stdio.h>

int main(){
	int temp, length, n=0;
	int arr[100];
	while(1){
		scanf("%d", &arr[n]);
		if(arr[n]==0){
			length=n;
			break;
		}
		n++;
	}
	
	for(int i=0;i<length-1;i++){
		for(int j=0;j<length-1-i;j++){
			if(arr[j]<arr[j+1]){	//내림차순 
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	for(int n=0;n<length;n++)
		printf("%d\t", arr[n]);
}

