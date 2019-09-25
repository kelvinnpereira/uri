#include <bits/stdc++.h>
#define _ std::ios_base::sync_with_stdio(false);std::cin.tie(NULL);

void traco(){
    int i;
    for(i=0;i<39;i++)
        std::cout << "-";
    std::cout << "\n";
}

void espaco(){
    int i;
    std::cout << "|";
    for(i=0;i<37;i++)
        std::cout << " ";
    std::cout << "|\n";
}

void espaco(int n, std::string str){
    int i;
    std::cout << "|";
    for(i=0;i<n-2;i++)
        std::cout << " ";
    std::cout << str;
    for(i=0;i<39-n-str.length();i++)
        std::cout << " ";
    std::cout << "|\n";
}

int main(){
    _
    traco();
    espaco(10, "Roberto");
    espaco();
    espaco(10, "5786");
    espaco();
    espaco(10, "UNIFEI");
    traco();
    return 0;
}