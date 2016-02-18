#include <iostream>

using namespace std;

int main(){
    double length, tmp;
    int num;
    while(cin>>length){
        if(length == 0.0){
            break;
        }
        tmp = 0.0;
        num = 1;
        while(tmp < length){
            tmp += (double)1 / (num + 1);
            num++;
        }
        cout<<num - 1<<" card(s)\n";
    }
    return 0;
}
