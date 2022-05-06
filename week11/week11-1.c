#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(11);
    v.push_back(15);

    for(int i=0; i<3; i++)
    {
        cout << v[i] << endl;
    }
}
