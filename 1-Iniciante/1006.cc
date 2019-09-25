#include <bits/stdc++.h>
#define _ std::ios_base::sync_with_stdio(false);std::cin.tie(NULL);

int main(){
    _
    double a, b, c;
    std::cin >> a >> b >> c;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "MEDIA = " << (a*2 + b*3 + c*5)/10 << "\n";
    return 0;
}