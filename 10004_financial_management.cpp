#include <iostream>

using namespace std;

const int TOTAL_MONTH = 12;

int main(){
    double fee, total = 0.0;
    for(int i = 0; i < TOTAL_MONTH; i++){
        cin>>fee;
        total += fee;
    }
    cout<<"$"<<total / TOTAL_MONTH<<endl;
    return 0;
}