#include <bits/stdc++.h>
using namespace std;

int main (){

    /*  0 is equal
     *
     *  -1 or less than 0 is s1 is smaller than s2
     *  +1 or greater than 0 is s1 is greater than s2
     *
     */

    cout << "Set 0" << endl;

    string s1 = "apple";
    string s2 = "apple";



    cout<< s1.compare(s2) << endl;                      // Directly comparing s1 and s2

    // end of set 0

    cout << "Set 1" << endl;

    s1 = "green apple";
    s2 = "red apple";

    //cout<< s1.length() << " " << s1.size() << endl;   // both are same

    cout<< s1.compare(6,5,s2,s2.size()-5,5)<<endl;      // (s1.from_pos, s1.len , compare_to_s2 , s2.from_pos, s2.len ) s2.size() gives the string length

    cout << s1.compare(1,2,s2,0,2)<<endl;               // same        

    cout << s1.compare(6,string::npos,s2,s2.length()-5,-1)<<endl;   // string :: npos represents the end of the string also value of npos is -1 

    // end of set 1


    cout << "Set 2" << endl;

    s1 = "green apple";
    s2 = "apple";

    cout << s1.compare(6,string::npos,s2)<<endl;


    // end of set 2

}
