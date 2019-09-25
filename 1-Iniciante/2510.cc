#include <bits/stdc++.h>
#define _ std::ios_base::sync_with_stdio(false);std::cin.tie(NULL);

int main(){
    _
    int n;
    std::string s;
    std::cin >> n;
    while(n--){
        std::cin >> s;
        std::cout << ((s != "Batman")? "Y" : "N") << "\n";
    }
    return 0;
}