#include <iostream>
#include <cmath>
using namespace std;


float arithmaticmean(float x_1 , float x_2) {
    float x = (x_2 + x_1) / 2 ;
return  x ; 
}

float geometricmean(float x_1 , float x_2)
{
    float y = x_2 * x_1 ;
    float GeoMean=sqrt(y);
    return GeoMean;
}


int main()
{
    float x_1 , x_2 ;
    cout<<"please Enter the two values\n";
        cin >> x_1 ;
        cin >> x_2 ;
    while (x_1 && x_2 > 0)
    {
        cout << "THE FIRST VALUE IS "<< x_1 <<endl;
        cout << "THE SECOND VALUE IS "<<x_2 <<endl;
        cout << "Arithmaticmean is : "<< arithmaticmean(x_1,x_2)<<endl;
        cout << "THE geometricmean is : "<<geometricmean(x_2,x_1)<<endl;
        cout<<"please Enter the two values\n";
        cin >> x_1 ;
        cin >> x_2 ;
    }
        return 0;
}



// #include <iostream>
// #include <cmath>
// using namespace std;


// float arithmaticmean(int x_1 , int x_2) {
//     float x = (x_2 + x_1) / 2 ;
// return  x ; 
// }

// float geometricmean(int x_1 , int x_2)
// {
//     float y = x_2 * x_1 ;
//     float GeoMean=sqrt(y);
//     return GeoMean;
// }


// int main()
// {
//     int x_1 , x_2 ;
//     cout<<"please Enter the two values\n";
//     cin >> x_1 ;
//     cin >> x_2 ;
//     cout << "THE FIRST VALUE IS "<< x_1 <<endl;
//     cout << "THE SECOND VALUE IS "<<x_2 <<endl;
//     cout << "Arithmaticmean is : "<< arithmaticmean(x_1,x_2)<<endl;
//     cout << "THE geometricmean is : "<<geometricmean(x_2,x_1)<<endl;
//     return 0;
// }



// #include <iostream>

// using namespace std;

// float arithmaticmean(int x_1 , int x_2) {
//     float x ;
//     x = (x_2 + x_1) / 2 ;
// return  x ; 
// }


// int main()
// {
//     int x_1 , x_2 ;
//     cout<<"please Enter the two values\n";
//     cin >> x_1 ;
//     cin >> x_2 ;
//     cout << "THE FIRST VALUE IS "<< x_1 <<endl;
//     cout << "THE SECOND VALUE IS "<<x_2 <<endl;
//     cout << "Arithmaticmean is : "<< arithmaticmean(x_1,x_2)<<endl;

//     return 0;
// }



// #include <iostream>

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
