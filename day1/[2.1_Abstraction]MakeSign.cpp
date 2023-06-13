#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int dateCode;
    string name;

    Node(int dateCode, string name) {
        this->dateCode = dateCode;
        this->name = name;
    }
};

class Sign {
public:

    void makeSign(vector<Node>& signVector) {
        arrangePaper(signVector);
        assertValid(signVector);
        sign(signVector);
    }

    void arrangePaper(vector<Node>& signVector) {
        for (int y = 0; y < signVector.size(); y++) {
            for (int x = y + 1; x < signVector.size(); x++) {
                if (signVector[y].dateCode > signVector[x].dateCode) {
                    Node temp(signVector[y].dateCode, signVector[y].name);
                    signVector[y].dateCode = signVector[x].dateCode;
                    signVector[y].name = signVector[x].name;
                    signVector[x].dateCode = temp.dateCode;
                    signVector[x].name = temp.name;
                }
            }
        }
    }

    void assertValid(vector<Node>& signVector) {
        for (Node tar : signVector) {
            if (tar.dateCode > 0 && tar.dateCode < 10) continue;
            throw "Invalid dateCode";
        }
    }


    void sign(vector<Node>& signVector) {
        for (Node tar : signVector) {
            cout << tar.dateCode << " : " << tar.name << endl;
        }
    }
};

int main() {
    Sign sign;
    vector<Node> arr;
    arr.push_back(Node(5, "KFC"));
    arr.push_back(Node(1, "JASON"));
    arr.push_back(Node(2, "LUCKY"));

    try {
        sign.makeSign(arr);
    }
    catch (const char* msg) {
        cerr << msg << endl;
    }

    return 0;
}