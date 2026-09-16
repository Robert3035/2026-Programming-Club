// Solar eclipse calculator

#include <iostream>

using namespace std;

int main(){
    int sunSince, sunCycle, moonSince, moonCycle;
    cin >> sunSince >> sunCycle >> moonSince >> moonCycle;
    
    // Set loop to begin on the next year that the sun is in position
    // Iterate by number of years until sun is in position
    for (int i = (sunCycle - sunSince); i <= 5000; i += sunCycle){
        // Check if the moon is in position this year
            if((i % moonCycle) - moonSince == 0){
                // Print current year
                cout << i;
                break;
        }
    }
}