#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{

    unordered_map<string,int> m;
    m["蔡育綸"] = 12750300;
    m["張瑋宸"] = 12750794;

    cout << "蔡育綸的學號是:" << m["蔡育綸"]<<endl;
    cout << "張瑋宸的學號是:" << m["張瑋宸"]<<endl;
}
