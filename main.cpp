#include <iostream>
#include <string>
using namespace std;

class You
{
private:
    int group;
public:
    You(): group(0){}
    You(int group): group(group){}
    void vivod()
    {cout << "group: " << group<<endl;}
};

int main(int argc, char *argv[])
{
    You i(221);
    i.vivod();
    cout<<"Hello, World\n";
    return 0;
}