#include <iostream>
using namespace std;

void partition(int arr[], int n){
    int a[n];
    int p1=0,p2=n-1, i=0;
    for(i=0;i<n;i++){
        if(arr[i]<=0){
            a[p1]=arr[i];
            p1++;
        }
        else{
            a[p2]=arr[i];
            p2--;
        }
    }
    for(i=0;i<n;i++){
        arr[i]=a[i];
    }

}
void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main() {
	int arr[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
	int n=sizeof(arr)/sizeof(arr[0]);
	int a[n];
	partition(arr,n);
	print(arr,n);
	return 0;
}