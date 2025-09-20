
#include <iostream>
using namespace std;

int main() {
        int n =9;  

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
               
                if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                    cout<<n<<" ";
                } else if(i==1 || i==n-2 || j==1 || j==n-2 ){
                    cout<<n-1<<" ";
                }
                else if(i==2||i==n-3||j==2||j==n-3){
                    cout<<n-2<<" ";
                }
                else if(i==3||i==n-4||j==3||j==n-4){
                    cout<<n-3<<" ";
                }
                else {
                    cout<<n-4<<" ";
                }
            }
           
            cout<<endl;
        }

  

    return 0;
}
