#include <iostream>

using namespace std;

float arithmaticmean(int x_1 , int x_2) {
    float x ;
    x = (x_2 + x_1) / 2 ;
return  x ; 
}


int main()
{
    int x_1 , x_2 ;
    cout<<"please Enter the two values\n";
    cin >> x_1 ;
    cin >> x_2 ;
    cout << "THE FIRST VALUE IS "<< x_1 <<endl;
    cout << "THE SECOND VALUE IS "<<x_2 <<endl;
    cout << "Arithmaticmean is : "<< arithmaticmean(x_1,x_2)<<endl;

    return 0;
}



// include <iostream>

// using namespace std;

// int main()
// {
//     int x_1 , x_2 ;
//     cout<<"please Enter the two values\n";
//     cin >> x_1 ;
//     cin >> x_2 ;
//     cout << "THE FIRST VALUE IS "<< x_1 <<endl;
//     cout << "THE SECOND VALUE IS "<<x_2 <<endl;

//     return 0;
// }
