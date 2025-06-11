#include <iostream>
#include <unordered_map>
#include <map>
#include <list>
//using namespace std;
int main() {
   // std::map<std::string, int> umap;

    std::list <int > lsdgsdg;
    lsdgsdg.
   

    std::unordered_map <std::string, int> umap;
    umap["banana"] = 10;
    umap["cherry"] = 3;
    umap["apple"] = 5;

    std::cout << "Fruit counts:\n";
    for (const auto& pair : umap) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }
    return 0;
}