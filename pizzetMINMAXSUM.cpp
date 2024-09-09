#include <iostream>
#include <vector>

using namespace std;

void mixmaxsum (vector<int>& array, long long& sumMIN, long long& sumMAX) {
    long long sum = 0;
    int minVal = array[0];
    int maxVal = array[0];

    // sumamos todos los elementos
    for (int i = 0; i < array.size(); i++) {
        sum += array[i];

        // encontrar el mayor elemento
        if(array[i] > maxVal) {
            maxVal = array[i];
            }
        //encontrar el menor
        if(array[i] < minVal) {
            minVal = array[i];
            }
    }

    // calcular los minimos y maximos
    sumMIN = sum - maxVal;
    sumMAX = sum - minVal;


}
    

int main() {
    vector<int> array(5);

    for (int i = 0; i < 5; i++) {
        cin >> array[i];
    }

    long long sumMIN, sumMAX;
    mixmaxsum(array, sumMIN, sumMAX);
    cout << sumMIN << " " << sumMAX << endl;

    return 0;
}