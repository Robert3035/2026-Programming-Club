// Streets Ahead

#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    int streetNum, driverNum;
    string street, start, stop;
    unordered_map<string, int> streetMap;

    cin >> streetNum >> driverNum;

    for(int i = 0; i < streetNum; i++){
        cin >> street;
        streetMap[street] = i;
    }

    for(int i = 0; i < driverNum; i++){
        cin >> start >> stop;
        cout << abs(streetMap[start] - streetMap[stop]) - 1 << endl;
    }
}