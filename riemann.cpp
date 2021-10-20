#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>

using namespace std;

int main(int argc, char * argv[])


{
    cout << "Please be aware that due to the value of PI used in C++ programs some values will be slightly odd although should technically be even\n" << endl;
    int number = atoi(argv[1]);
    vector <long double> arr1;
    vector <long double> arr2;
    double theta = M_PI / 3;
    cout << " In doubles" << endl;
    ofstream File("riemann zeros.txt");
    for( int i = 0; i < number ; i++)
    {
        double y_1 = theta * (1 + 6 * i);
        y_1 = sqrt(pow(y_1/theta, 2) - 0.25);
        cout << i << "\n";
        cout << y_1 << "\n";
        arr1.push_back(y_1);
        double y_2 = 5 * theta * (1 + ((6 / 5) * i));
        y_2 = sqrt(pow(y_2/theta, 2) - 0.25); 
        cout << y_2 << "\n";
        arr1.push_back(y_2);
        cout << "\n";
        File << i << " " << y_1 <<  " " << y_2 << "\n";


    }
    cout << "Past loop\n"; 
    int lArr1 = (sizeof(arr1)/sizeof(arr1[0]));
    int lArr2 = (sizeof(arr2)/sizeof(arr2[0]));
    
    // for (int i = 0; i < lArr1; i++){
    //     arr3.push_back(arr1[i]);
    //     arr3.push_back(arr2[i]);
    // }
    
    sort(arr1.begin(), arr1.begin() + lArr1);
    for(int i = 0; i < lArr1; i++)
    {
        cout << arr1[i] << endl;
    }

}