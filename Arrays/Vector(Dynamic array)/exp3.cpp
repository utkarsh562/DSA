#include <iostream>
#include <vector>
using namespace std;
int equalStacks(vector<int>& h1, vector<int>& h2, vector<int>& h3) {
    int sum1 = 0, sum2 = 0, sum3 = 0;

    for (int height : h1) {
        sum1 += height;
    }
    for (int height : h2) {
        sum2 += height;
    }
    for (int height : h3) {
        sum3 += height;
    }

    int top1 = 0, top2 = 0, top3 = 0;
    int maxHeight = 0;

    while (true) {
       
        if (top1 == h1.size() || top2 == h2.size() || top3 == h3.size()) {
            return 0;
        }

        if (sum1 == sum2 && sum2 == sum3) {
            maxHeight = sum1;
            break;
        }
        if (sum1 >= sum2 && sum1 >= sum3) {
            sum1 -= h1[top1++];
        } else if (sum2 >= sum1 && sum2 >= sum3) {
            sum2 -= h2[top2++];
        } else if (sum3 >= sum1 && sum3 >= sum2) {
            sum3 -= h3[top3++];
        }
    }

    return maxHeight;
}

int main() {
    
    vector<int> h1 = {1,2,1,1};
    vector<int> h2 = {1,1,2};
    vector<int> h3 = {1, 1};

    int maxEqualHeight = equalStacks(h1, h2, h3);
    cout << "Maximum equal height: " << maxEqualHeight << endl;

    return 0;
}
