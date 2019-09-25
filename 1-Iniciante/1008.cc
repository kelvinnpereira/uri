#include <bits/stdc++.h>
#define _ std::ios_base::sync_with_stdio(false);std::cin.tie(NULL);

int main(){
    _
    int n, h;
    double sh;
    std::cin >> n >> h >> sh;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "NUMBER = " << n << "\n";
    std::cout << "SALARY = U$ " << (double)sh*h << "\n";
    return 0;
}