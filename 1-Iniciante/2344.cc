#include <bits/stdc++.h>
#define _ std::ios_base::sync_with_stdio(false);std::cin.tie(NULL);

int main(){
    _
    int n;
    std::cin >> n;
    if(n == 0){
        std::cout << "E\n";
    } else if(n < 36) {
        std::cout << "D\n";
    } else if(n < 61) {
        std::cout << "C\n";
    } else if(n < 86) {
        std::cout << "B\n";
    } else if(n < 101) {
        std::cout << "A\n";
    }
    return 0;
}