#include <iostream>
using namespace std;

int main() {
    int arr[]{186,4531,34,989873,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    int pcnt=0;
    
    for(int i=0;i<n;i++){
        int count=0;
        while(arr[i]>0){
            count++;
            arr[i]/=10;
            
        }
        if(count%2==0){
            pcnt++;
        
        }
        
    }
    
    cout<<pcnt;
    

    return 0;
}
