#include <bits/stdc++.h>
#define _ std::ios_base::sync_with_stdio(false);std::cin.tie(NULL);

int main(){
    _
    char cpf[20];
    std::cin >> cpf;
    for(int i=0;cpf[i];i++){
        if (cpf[i] == '.' || cpf[i] == '-') {
            std::cout << "\n";
        } else {
            std::cout << cpf[i];
        } 
    }
    std::cout << "\n";
    return 0;
}