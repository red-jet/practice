#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
    vector <string> v;
    //vector <string> :: iterator  i;


    string s="this_is_ready_to_send";
    int pos;

    while ((pos = s.find_last_of('_')) != -1) {
        v.push_back(s.substr(pos + 1, (s.length() - pos)));

        s.erase(pos, (s.length() - pos));

    }
    v.push_back(s);
    s.erase(0,-1);

    for (auto i : v)
    cout << i << endl;

    cout<< endl <<"sort" << endl;

    sort(v.begin(),v.end());

    for (auto i:v)
        cout<< i << endl;

    return 0;
}
