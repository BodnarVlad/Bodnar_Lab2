#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    string a, b;
    cout << "vedit a: " <<'\n';
    cin >> a;
    cout << "vedit b: "<< '\n';
    cin >> b;
    int aa = stoi(a);
    int bb = stoi(b);
    for (;;) {
        if (aa!=bb) {

            if (aa > bb) {
                aa = aa - bb;
            }
            else {
                bb = bb - aa;
            }
        }
        else {
            break;
        }
    }
    cout <<"result:"<< aa;
}
