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

int main(){
    _
    traco();
    for(int i=0;i<5;i++)
        espaco();
    traco();
    return 0;
}