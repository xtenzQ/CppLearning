#include <iostream>

using namespace std;

int main() {
	int begginingHour = 0;
	int begginingMin = 0;

	cin >> begginingHour;
	cin >> begginingMin;

	if (begginingHour == 0) {
        begginingHour = 12;
    }
	
	if (begginingMin == 0) {
		begginingMin = 60;
	}
	
	int endHour = 12 - begginingHour;
	int endMin = 60 - begginingMin;
    
	cout << endHour << " " << endMin;
}
