#include<iostream>
using namespace std;

int b[1000] ;

int merge(int arr[],int l , int mid, int r){
    int i = l ;
    int j = mid+1;
    int k = l ;
    while(i<=mid && j<= r){
        if(arr[i]<arr[j]){
            b[k]=arr[i];i++;
        }else{
            b[k]=arr[j];j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=r){
            b[k]=arr[j];
            k++;j++;
        }
    }else{
        while(i<=mid){
            b[k]=arr[i];
            k++;i++;
        }
    }
    for(int k=l;k<=r;k++){
        arr[k]=b[k];
    }

}


void mergesort(int arr[],int l , int r){
    if(l<r){
        int mid =(l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
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
	mergesort(arr,0,n-1);
	cout<<"sorted array :";
	for(int k = 0 ; k<n ; k ++){
		cout<<arr[k]<<"\t" ;
	}
    return 0 ;
}