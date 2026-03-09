#include <iostream>
#include <vector>

int main(){
    std::vector<int>arr = {1, 0, 1, 1, 0, 1};
    for (int i : arr) {
        if (i == 1 || i == 0){
            std::cout << "["<< i << "]" <<"\n";
        }
    }
    return 0;
}