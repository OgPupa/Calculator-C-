#include "voda.h"
ostream& operator<<(ostream& out, const Ocean& ocean) {
    cout << "Name: " << ocean.name << endl;
    cout << "Size: " << ocean.size << endl;
    cout << "Depth: " << ocean.depth << endl;
    return out;
}
istream& operator>>(istream& in, Ocean& ocean) {
    cout << "Enter name: " << endl;
    cin >> ocean.name;
    cout << "Enter size: " << endl;
    cin >> ocean.size;
    cout << "Enter depth: " << endl;
    cin >> ocean.depth;
    return in;
}