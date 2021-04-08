#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string slowoDoZaszyfrowania;
    string klucz;
    getline(cin, slowoDoZaszyfrowania);
    getline(cin, klucz);
    string zaszyfrowaneSlowo;
    string slowoNaNowoOdkodowane;
    replace(klucz.begin(),klucz.end(), ' ', '[');
    int iterator=0;
    for(char& c : slowoDoZaszyfrowania){
        if(iterator>=klucz.length())
            iterator=0;
        zaszyfrowaneSlowo.push_back(c+int(klucz[iterator++])-64);
    }
    cout << zaszyfrowaneSlowo << endl;
    iterator=0;
    for(char& c : zaszyfrowaneSlowo){
        if(iterator>= klucz.length())
            iterator=0;
        slowoNaNowoOdkodowane.push_back(c-int(klucz[iterator++])+64);
    }
    cout << slowoNaNowoOdkodowane << endl;
    return 0;
}
