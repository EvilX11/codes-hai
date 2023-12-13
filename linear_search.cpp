#include<iostream>
using namespace std ;

int search(int arr[] , int n ,int key ){

    for(int i=0 ; i<n ; i++){
        if (arr[i]==key){
        return i ;
        }
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
