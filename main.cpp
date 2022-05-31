#include <iostream>
#include <cassert>
using namespace std;

float travelTime(float distance, float speed){
    assert(speed <= 0);
    return distance / speed;
}
int main() {
    float distance , speed;
    cout << "Enter the distance and speed" << endl;
    cin >> distance >> speed;
    std::cout << travelTime(distance,speed);
}
