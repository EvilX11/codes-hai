#include<iostream>
using namespace std;

void swap(int *a , int *b ){
    int temp = *a ;
    *a = *b;
    *b = temp ;
}

int partition(int arr[], int l , int h){
    int pivot = arr[l];
    int i =l ;
    int j = h;
    while (i<j)
    {
       while(arr[i]<=pivot)i++;
       while(arr[j]>=pivot)j--;
       if(i<j){
        swap(&arr[i],&arr[j]);
       }
    }
    swap(&arr[j],&arr[l]);   
    return j ;
}

void quick(int arr[],int l , int h ){
    if(l<h){
        int pivot = partition(arr,l,h);
        quick(arr,l,pivot-1);
        quick(arr,pivot+1,h);
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
	quick(arr,0,n-1);
	cout<<"sorted array :";
	for(int k = 0 ; k<n ; k ++){
		cout<<arr[k]<<"\t" ;
	}
    return 0 ;
}

