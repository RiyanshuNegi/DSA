#include <iostream>
using namespace std;
int main(){
    int i = 0, j=0;
    for (i= 0; i<5; i++){
        for( j=0; j<i+1; j++ ){
            cout<<j+1;
        }
        cout<<"\n";
    }
    return 0;
}
