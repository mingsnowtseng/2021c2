#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(11);
    v.push_back(15);

    vector<int>::iterator it;
    for(it=v.begin() ; it!=v.end(); it++)
    {
        cout << *it << endl;
    }
}
