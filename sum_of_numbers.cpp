#include <iostream>
using namespace std ;

int add(int n){
    int f =0 ;
    for(int i = 0; i <=n; i++){
        f+=i ;
    }
    return f ;
    
}
    

int main()
{
    int n;
    cout << "Enter a positive integer : ";
    cin >> n;
    cout << "Sum = " << add(n);
    return 0;
}
