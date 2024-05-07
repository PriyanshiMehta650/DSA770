#include <iostream>
#include <functional>
#include <vector>

using namespace std;

int main() {
    hash<vector<int>> hasher;

    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                            11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    size_t hashCode = hasher(vec);

    cout << "Hash code for the vector: " << hashCode << endl;

    return 0;
}
