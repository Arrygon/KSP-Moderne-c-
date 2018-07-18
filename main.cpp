#include <bits/stdc++.h>

using namespace std;

void spocitaj_pocet(vector<int> &cislo){

    map<int, int> pocty;

    for(auto prvok: cislo){
        pocty[prvok]++;

    }//end of for loop

    for(auto prvok: pocty){

        cout << prvok.first << " " << prvok.second << endl;

    }//end of for loop

}//end of void spocitaj-pocet

int main(){

    int n = 0;

    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++){

        cin >> a[i];

    }//end of for loop

    spocitaj_pocet(a);

    return 0;
}
