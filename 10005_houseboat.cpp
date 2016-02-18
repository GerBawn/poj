#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.1415;

int main(){
    double sqaure, x, y;
    int total, year;
    cin>>total;

    for(int i = 0; i < total; i++){
        cin>>x>>y;
        year = (int)(PI / 2 * (x * x + y * y) / 50) + 1;
        cout<<"Property "<<i + 1<<": This property will begin eroding in year "<<year<<".\n";
    }
    cout<<"END OF OUTPUT.\n";
    return 0;
}
