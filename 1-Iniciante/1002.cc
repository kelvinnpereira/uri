#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 3.14159

int main(){
    double raio;
    std::cin >> raio;
	std::cout << std::fixed << std::setprecision(4);
    std::cout << "A=" << PI * pow (raio,2) << "\n";
    return 0;
}