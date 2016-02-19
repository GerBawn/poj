#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int strLen, total;
    cin>>strLen>>total;
    string strings[total];
    int sort[total], sortness;

    //计算排序度
    for(int i = 0; i < total; i++){
        cin>>strings[i];
        sortness = 0;
        for(int j = 0; j < strLen; j++){
            for(int k = j + 1; k < strLen; k++){
                if(strings[i][j] > strings[i][k]){
                    sortness++;
                }
            }
        }
        sort[i] = sortness;
    }

    //按照排序度将字符串排序
    int tmp;
    string strTmp;
    for(int i = 0; i < total; i++){
        for(int j = i + 1; j < total; j++){
            if(sort[i] > sort[j]){
                tmp = sort[i];
                sort[i] = sort[j];
                sort[j] = tmp;
                strTmp = strings[i];
                strings[i] = strings[j];
                strings[j] = strTmp;
            }
        }
    }

    //输出字符串
    for(int i = 0; i < total; i++){
        cout<<strings[i]<<endl;
    }
    return 0;
}

