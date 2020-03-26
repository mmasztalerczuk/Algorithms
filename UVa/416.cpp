#include <iostream>
#include <bitset>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bitset<16> zero  (std::string("1111110"));
bitset<16> one   (std::string("0110000"));
bitset<16> two   (std::string("1101101"));
bitset<16> three (std::string("1111001"));
bitset<16> four  (std::string("0110011"));
bitset<16> five  (std::string("1011011"));
bitset<16> six   (std::string("1011111"));
bitset<16> seven   (std::string("1110000"));
bitset<16> eight (std::string("1111111"));
bitset<16> nine (std::string("1111011"));

vector<bitset<16> > values;
vector<int> numbers;
bool validate(bitset<16> a, int i, int broken) {
    return (!(broken&a.to_ulong())) && (a.to_ulong() | numbers[i]) == numbers[i];
}
int main() {
    int n;
    numbers.push_back(zero.to_ulong());
    numbers.push_back(one.to_ulong());
    numbers.push_back(two.to_ulong());
    numbers.push_back(three.to_ulong());
    numbers.push_back(four.to_ulong());
    numbers.push_back(five.to_ulong());
    numbers.push_back(six.to_ulong());
    numbers.push_back(seven.to_ulong());
    numbers.push_back(eight.to_ulong());
    numbers.push_back(nine.to_ulong());                                
    while (cin >> n) {
        if (n == 0)
            break;
        values.clear();
        string tmp;
        for(int i=0;i<n;i++) {
            cin >> tmp;
            std::replace( tmp.begin(), tmp.end(), 'Y', '1');
            std::replace( tmp.begin(), tmp.end(), 'N', '0');
            std::bitset<16> new_number (tmp);

            values.push_back(new_number);
        }
        bool f = false;
        
        for(int i=9;i>=n-1;i--) {
            //cout << "nowy test" << endl;
            int broken = 0;
            bool tmp_f = true;
            for(int j=0;j<values.size();j++) {
               // cout << "broken " << broken << endl;
                tmp_f = validate(values[j], i-j, broken);
                if (!tmp_f) {
                 //  cout << values[j].to_ulong() << " NIE moze byc " << i-j << endl;
                    break;
                }
                broken = broken | (values[j].to_ulong() ^ numbers[(i-j)]);

                //cout << values[j].to_ulong() << " moze byc " << i-j << endl;
            }
            if (tmp_f) {
                f = true;
                break;
            }
            
        }
        if (f) {
            cout << "MATCH" << endl;
        } else {
            cout << "MISMATCH" << endl;
        }

    }
}