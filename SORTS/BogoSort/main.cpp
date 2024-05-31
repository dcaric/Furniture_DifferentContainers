//
//  main.cpp
//  Furnite_DifferentContainers
//
//  Created by Dario Caric on 31.05.2024..
//

#include <stdio.h>
#include <iostream>
#include <vector>


using namespace std;

unsigned long long factorial(int n) {
    if (n <= 1) return 1;
    else return n * factorial(n - 1);
}

int mainBogo() {
    
    vector<int> v({ 5, 3, 1, 2, 4 });
    int n = factorial(v.size());
    for (int i = 0; i < n; i++) {
        std::cout << v[0] << ' ' << v[1] << ' ' << v[2] << ' ' <<                                                v[3] << ' ' << v[4];
        cout << " (" << next_permutation(v.begin(), v.end()) << ")"
                                                             << endl;
    };
    
    
    return 0;
}
