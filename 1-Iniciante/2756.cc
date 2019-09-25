#include <bits/stdc++.h>
#define _ std::ios_base::sync_with_stdio(false);std::cin.tie(NULL);

void traco(char c, int spc){
    int i;
    for(i=0;i<7-(spc/2+1);i++)
        std::cout << " ";
    std::cout << c;
    for(i=0;i<spc;i++)
        std::cout << " ";
    if(spc != 0)std::cout << c;
    std::cout << "\n";
}

int main(){
    _
    int n = 1;
    std::cout << " ";
    traco('A', 0);
    traco('B', n);n+=2;
    traco('C', n);n+=2;
    traco('D', n);n+=2;
    traco('E', n);n-=2;
    traco('D', n);n-=2;
    traco('C', n);n-=2;
    traco('B', n);
    std::cout << " ";
    traco('A', 0);
    return 0;
}