#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    // resultChecker
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
    
    // Add greade

   if (averageResult>=80)
   {
       cout<<"A+"<<endl;
   }
   else if(averageResult>=70)
   {
       cout<<"A"<<endl;
   }
   else if(averageResult>=60)
   {
       cout<<"A-"<<endl;
   }
   else if(averageResult>=50)
   {
       cout<<"B"<<endl;
   }
   else if(averageResult>=40)
   {
       cout<<"C"<<endl;
   }
   else if(averageResult>=33)
   {
       cout<<"D"<<endl;
   }
   else
   {
       cout<<"Fail"<<endl;
   }
   


    return 0;
}
