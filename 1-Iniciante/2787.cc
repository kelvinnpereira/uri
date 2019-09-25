#include <bits/stdc++.h>
#define _ std::ios_base::sync_with_stdio(false);std::cin.tie(NULL);

bool par(int n){
    return n%2 == 0; 
}

bool impar(int n){
    return n%2 != 0; 
}

int main(){
    _
    int i, j;
    std::cin >> i >> j;
    if ( (par(i) && par(j)) || (impar(i) && impar(j)) ) {
        std::cout << "1\n";
    } else {
        std::cout << "0\n";
    }
    return 0;
}