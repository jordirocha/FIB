#include <vector>
#include <iostream>
#include <algorithm>    // std::sort
using namespace std;

struct Fruit {
    string name;
    int amount;
};

// Cal implementar aquesta funció:
void add_fruit(vector<Fruit> &fruits, const Fruit &fruit) {
    bool found = false;
    int i = 0;
    for (i = 0; i < fruits.size() and !found; i++) {
        if (fruits[i].name == fruit.name) {
            found = true;
            fruits[i].amount += fruit.amount;
        }
    };
    if (!found) fruits.push_back(fruit);
}

bool comp(const Fruit &a, const Fruit &b) {
    return a.name < b.name;
}

int main() {
    vector<Fruit> fruits;
    Fruit f;
    while (cin >> f.name >> f.amount) {
        add_fruit(fruits, f);
    }
    sort(fruits.begin(), fruits.end(), comp);
    for (int i = 0; i < fruits.size(); i++) {
        cout << fruits[i].name << ' ' << fruits[i].amount << endl;
    }
    return 0;
}
