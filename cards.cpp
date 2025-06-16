#include <iostream>
#include <vector>

int main() {
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    
    std::vector<int> plus_cards;
    std::vector<int> mult_cards;

    
    for (int i = 1; i <= n; ++i) {
        char op;
        long long value; 
        std::cin >> op >> value;

        if (op == '+') {
            plus_cards.push_back(i);
        } else {
            mult_cards.push_back(i);
        }
    }


    for (int index : plus_cards) {
        std::cout << index << " ";
    }

    
    for (size_t i = 0; i < mult_cards.size(); ++i) {
        std::cout << mult_cards[i];
        
        if (i < mult_cards.size() - 1) {
            std::cout << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
