#include <iostream>
#include <vector>

void search_nontrivial_divisors(int num, std::vector<int>& dividers){
    for(int i = 2; i <= num/2; i++){
        if(num % i == 0) {
            dividers.push_back(i);
        }
    }
}

int main(){
    int num;
    std::cin >> num;
    
    std::vector<int> dividers;
    search_nontrivial_divisors(num, dividers);

    if(dividers.size() == 0){
        std::cout << "Нет делителей." << std::endl;
    }else{
        for(int divisor : dividers){
            std::cout << divisor << " ";
        }
        std::cout << std::endl;
    }

}
