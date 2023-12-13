#include<iostream>
using namespace std;

int bubble(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(arr[j] > arr[j+1]){
				int temp  = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp ;
			}			
		}		
	} 
}

int main (){
    int n ;
    cout<<"Enter array size : " ;
    cin>>n;
    int arr[n] ;
    cout<<"Enter elements : " ;
    for(int i=0;n>i;i++){
    	cin>>arr[i];
	}
	bubble(arr,n);
	cout<<"sorted array :";
	for(int k = 0 ; k<n ; k ++){
		cout<<arr[k]<<"\t" ;
	}
}

