#include <iostream>
#include "nlohmann/json.hpp"
#include <string>
#include <unordered_map>

using json = nlohmann::json;
using namespace std;


int main() {
    cout << "Welcome to my Hash Map and JSON project!\n" << endl;
    //create a JSON object
    json friends = {
        "Aidan Ray",
        "David Red",
        "Rosa Yapper"
    };

   // friends["name"] = "Aidan";
   // friends["name"] = "David";

//output to double chcek
    cout << "My firends are " << friends << endl;
   // cout << "My friend NickName is " << friends["Aidan"] << endl;
// create a c++ has map that uses three student names as keys and int vlaues for their test scores
    unordered_map<string, int> theScores;

    theScores["Aidan"] = 100;
    theScores["David"] = 80;
    theScores["Rosa"] = 50;

for (unordered_map<string, int>::iterator it = theScores.begin(); it != theScores.end(); it++) {
    cout << "\nMy Firends Tests Scores Are\n" << it->first << ": " << it->second << endl;
}

    //cout << "My friend Aidans test score was: " << theScores["Aidan"] << endl;
    //cout << "My frind David  test score was: " << theScores["David"] << endl;

    //creat an a orderd map

    map<string, int> orderedScores;
    orderedScores["Aidan"] = 100;
    orderedScores["David"] = 80;
    orderedScores["Rosa"] = 50;
    // output


    cout << orderedScores << endl;

    return 0;
}