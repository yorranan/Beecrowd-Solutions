#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    float tempo_gasto, velocidade_media; 
    cin >> tempo_gasto >> velocidade_media;
    cout << fixed << setprecision(3) << (tempo_gasto*velocidade_media)/12 << endl;
    return 0;
}