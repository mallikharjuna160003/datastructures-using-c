#include<stdio.h>
void get_miss(int arr[]){
	int i=0;
	int n=4;
	int sum=0;
	int sum_1=0;
	for(i=1;i<n;i++){
		sum^=arr[i];
	}
	for(i=1;i<n;i++){
		sum_1^=i;
	}
	printf("%d",sum_1^sum);
}
void get_miss_sum(int arr[]){
	int i=0;
	int n=4;
	int sum=0;
	int sum_1=0;
	for(i=0;i<n;i++){
		sum+=arr[i];
	}
	for(i=1;i<n;i++){
		sum_1+=i;
	}
	printf("%d",sum_1-sum);

}
int main(){
	 
	int arr[4]={1,3,4};
	get_miss(arr);
	get_miss_sum(arr);
	return 0;
}
