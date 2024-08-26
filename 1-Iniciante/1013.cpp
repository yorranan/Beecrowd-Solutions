#include <iostream>

using namespace std;

int maior(int a, int b, int c)
{
    double maiorAB;
    maiorAB = (a+b+(abs(a-b)))/2;
    maiorAB=(c+maiorAB+abs(maiorAB-c))/2;
    return maiorAB;
}

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    cout << maior(n1, n2, n3) << " eh o maior" << endl;
    return 0;    
}