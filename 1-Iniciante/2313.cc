#include <bits/stdc++.h>
#define _ std::ios_base::sync_with_stdio(false);std::cin.tie(NULL);

int main(){
    _
    long a, b, c, x, y, z;
    std::cin >> a >> b >> c;
    x = std::max(a, std::max(b, c));
    y = std::min(a, std::min(b, c));
    z = a + b + c - x - y;
    if (x >= y+z) {
        std::cout << "Invalido\n";
    } else {
        std::cout << "Valido";
        if (a == b && b == c) {
            std::cout << "-Equilatero\n";
        } else if (a == b || a == c || b == c) {
            std::cout << "-Isoceles\n";
        } else {
            std::cout << "-Escaleno\n";
        }
        std::cout << "Retangulo: ";
        if(x*x == y*y + z*z){
            std::cout << "S\n";
        } else {
            std::cout << "N\n";
        }
    }
    return 0;
}