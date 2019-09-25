#include <bits/stdc++.h>
#define _ std::ios_base::sync_with_stdio(false);std::cin.tie(NULL);

int main(){
    _
    int c1, p1, c2, p2;
    double v1, v2;
    std::cin >> c1 >> p1 >> v1 >> c2 >> p2 >> v2;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "VALOR A PAGAR: R$ " << p1*v1 + p2*v2 << "\n";
    return 0;
}