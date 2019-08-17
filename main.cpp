#include <iostream>

using namespace std;

int main()
{
    int x,y,z,mx;
    cin >> x >> y >>z;
    if ((x > y) && (x > z)){
        mx = x;
    }

     else if ((z > y) && (x < z)){
        mx = z;
    }
    else if ((y > x) && (y > z)){
        mx = y;
    }
    cout << mx << " eh o maior" << endl;
    return 0;
}
