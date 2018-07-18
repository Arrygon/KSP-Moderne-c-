#include <bits/stdc++.h>

using namespace std;

int kty_najmensi(set<int> &mocnina, int k){

    int najmensi = mocnina.begin(),
         c = 0;
    auto it = mocnina.begin();

    while(c != mocnina.size()){

        for(auto prvok: mocnina){

            if(najmensi > prvok)
                najmensi = prvok;

        }//end of for loop

        c++;

    }//end of for loop

    return najmensi;
}//end of int kty_najm...

int main(){

   set<int> mocnina;

   mocnina.insert(8);
   mocnina.insert(54);
   mocnina.insert(2);
   mocnina.insert(9);
   mocnina.insert(3);
   mocnina.insert(48);

    kty_najmensi(a, k);

    return 0;
}//end of main
