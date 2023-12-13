#include<iostream>
using namespace std ;

int swap(int *a, int *b ){
	int temp = *a ;
	*a = *b;
	*b = temp;
}

int selection(int arr[], int n){
	for(int min=0;min<n-1;min++){
		for(int j=min+1;j<n;j++){
			if(arr[j] < arr[min]){
			    swap(&arr[min],&arr[j]);
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
	selection(arr,n);
	cout<<"sorted array :";
	for(int k = 0 ; k<n ; k ++){
		cout<<arr[k]<<"\t" ;
	}
}