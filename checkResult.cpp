#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int bang, eng, math;
    cout << "Enter bangla subject result: ";
    cin >> bang;
    cout << "Enter english subject result: ";
    cin >> eng;
    cout << "Enter math subject result: ";
    cin >> math;
    int totalResult = bang + eng + math;
    cout << "Total Subject Result " << totalResult << endl;

    double averageResult = (double)totalResult / 3.0;
    cout << "Average Result is: " << averageResult << endl;

    return 0;
}
