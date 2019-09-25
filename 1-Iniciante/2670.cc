#include <bits/stdc++.h>
#define _ std::ios_base::sync_with_stdio(false);std::cin.tie(NULL);

int main(){
    _
    int a1, a2, a3, menor, tmp;
    std::cin >> a1 >> a2 >> a3;
    menor = 2*a2 + 4*a3;
    tmp = 2*a1 + 2*a3;
    if(tmp < menor) menor = tmp;
    tmp = 4*a1 + 2*a2;
    if(tmp < menor) menor = tmp;
    std::cout << menor << "\n";
    return 0;
}