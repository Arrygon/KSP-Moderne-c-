/*#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int najdlchsiUsek = 0,
    usek = 0,
    nuly = 0;

int main(){

    vector<int> OI {0, 1, 1, 1, 0, 0, 1, 1 ,1, 1, 0, 0};

    int O = accumulate(OI.begin(), OI.end(), 0, [](auto pocet, auto prvok){

        if(prvok == 0)
            return pocet += 1;


    });

    cout << O << endl;

    int pocitanieUseku = accumulate(OI.begin(), OI.end(), 0, [](auto usek, auto prvok){
        if(prvok == 1){
            usek += 1;
        }
        else if(prvok == 0){
            usek = 0;

        }
        najdlchsiUsek = max(najdlchsiUsek, usek);
        //cout << usek << " " << najdlchsiUsek << endl;


        return usek;

    });

    cout << najdlchsiUsek << endl;

    return 0;
}
*/
