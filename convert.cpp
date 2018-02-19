#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;



double m2i_weight(double x)
{
    double ans = 0;
    ans = x * 0.0022046;
    return ans;
}


int main(int argc, char* argv[])
{
    bool done= false;
    double grams;
    while(!done)
    {
        cout << "Enter weight in grams: ";
        cin >> grams;
        cout<< m2i_weight(grams)<<" lbs.\n";
        cout <<"Do you need more conversions? y/n ";
        char cont;
        cin >> cont;
        if(cont == 'n')
        {
            cout<< "\nGoodbye\n";
            done=true;
        }
    }


    return 0;
}