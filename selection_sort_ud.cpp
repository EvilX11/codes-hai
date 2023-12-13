
#include <iostream>
using namespace std;

void selection(int arr[], int n)
{
	int i, j, min_idx;
	for (i = 0; i < n - 1; i++) {
		min_idx = i;
		for (j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_idx])
				min_idx = j;
		}
		if (min_idx != i)
			swap(arr[min_idx], arr[i]);
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

