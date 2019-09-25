#include <bits/stdc++.h>
#define _ std::ios_base::sync_with_stdio(false);std::cin.tie(NULL);

#define N 50

int main(){
    _
    char nome[N];
    double s, t;
    std::cin >> nome >> s >> t;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "TOTAL = R$ " <<  s + t * 0.15 << "\n";
    return 0;
}