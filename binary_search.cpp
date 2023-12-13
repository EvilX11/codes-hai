#include<iostream>
using namespace std ;

int search(int arr[] , int n ,int key ){

    int s = 0 ;
    int e = n-1;
    int mid = (s+e)/2 ;
    while(s<=e){
        if(arr[mid]==key){
            return mid ;
        }
        if (key>arr[mid]){
            s = mid+1 ;
        }
        else{
            e=mid-1 ;
        }
        mid =(s+e)/2;

    }
    return -1 ;

    
}

int main(){
    int n ;
    cout<<"Enter array size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements :";
    for (int i=0 ; i<n; i++){
        cin>>arr[i];
    }
    int key ;
    cout<<"Enter searching Element : ";
    cin>>key;

    int result = search(arr , n , key);
    
    if(result ==-1 ){
        cout<<"Element Not found \n" ;
        }else{
            cout<<"Element Found at  index : "<<result<<endl;
        }
    return 0 ;
}
