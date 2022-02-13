#include<iostream>
using namespace std;


class add {

public:
    int addition(int a, int b) {
        return a + b;
    }
};

int main() {

    int a, b, s;

    cout << "Enter";
    cin >> a >> b;

    Add obj;
    s = obj.addition(a, b);

    cout << "Sum" << s;

    return 0;
}
