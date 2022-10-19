#include <iostream>

using namespace std;

int main() {
    double distance_m = 135;
    double height_m = 60;

    double maxDistance_m = 600;
    double maxHeight_m = 200;

    int currX_coordinate = 0;
    int currY_coordinate = 0;

    int maxX_coordinate = 80;
    int maxY_coordinate = 24;

    double xProjectionRatio = maxDistance_m / maxX_coordinate;
    double yProjectionRatio = maxHeight_m / maxY_coordinate;

    cout << "X ratio: " << xProjectionRatio << endl;
    cout << "Y ratio: " << yProjectionRatio << endl;
    
    currX_coordinate = distance_m / xProjectionRatio;
    currY_coordinate = height_m / yProjectionRatio;

    cout << "X coordinate: " << currX_coordinate << endl;
    cout << "Y coordinate: " << currY_coordinate << endl;

    for( int yCount = maxY_coordinate; yCount > currY_coordinate; yCount-- ){
        cout << endl;
    }
    for( int xCount = 0; xCount < currX_coordinate; xCount++ ) {
        cout << " ";
    }
    cout << "@";
    cout << endl;

}