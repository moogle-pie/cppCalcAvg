#include <iostream>
#include <vector>
#include <numeric>

using namespace std;
//Write a function which calculates the average of the numbers in a given list.

double calcAverage(const std::vector<int>& values){

    if (values.empty()) {
        return 0;
    }
    return std::accumulate(values.begin(), values.end(), 0.0) / values.size();
}

int main()
{
    cout << calcAverage({2.0, 5.0});

    return 0;
}




