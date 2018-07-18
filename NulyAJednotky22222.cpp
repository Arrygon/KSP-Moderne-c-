#include <algorithm>
#include <iostream>
#include <numeric>
#include <utility>
#include <vector>

using namespace std;

int main(){

    vector<int> OI {0, 1, 1, 1, 0, 0, 1, 1 ,1, 1, 0, 0};

    int O = accumulate(OI.begin(), OI.end(), 0, [](auto pocet, auto prvok){

        if(prvok == 0)
            return pocet += 1;


    });

    cout << O << endl;

    pair<int, int> pocitanieUseku = accumulate(OI.begin(), OI.end(), make_pair(0, 0), [](auto najdlhsiAUsek, auto prvok){
        int najdlchsi = najdlhsiAUsek.first;
        int usek = najdlhsiAUsek.second;

        if(prvok != 1)
            usek = 0;
        else
            usek++;

        najdlchsi = max(najdlchsi, usek);

        return make_pair(najdlchsi, usek);

    });

    cout << pocitanieUseku.first << endl;

    return 0;
}
