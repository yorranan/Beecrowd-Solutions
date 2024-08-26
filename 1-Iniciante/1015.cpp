#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {
 
    double x, y, distancia, x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    x = x2-x1;
    y = y2-y1;
    distancia = sqrt(pow(x, 2)+pow(y, 2));
    cout << fixed << setprecision(4) << distancia << endl;
    return 0;
}