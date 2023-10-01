#include <iostream>
#include <vector>

void compute(int &mid, int a, int b) 
{
    mid = (a + b) / 2;
}

void swap(int &a, int &b) 
{
    int temp = a;
    a = b;
    b = temp;
}

void F2(std::vector<int> &vec, int a, int b) 
{
    int c;
    while (!(a >= b)) {
        int m, n, mid, p, t;
        compute(mid, a, b);
        p = vec.at(mid);
        m = a;
        n = b;

        while (m < n) {
            if (vec.at(m) < p) {
                m = m + 1;
            } else if (p < vec.at(n)) {
                n = n - 1;
            } else if (m < n) {
                swap(vec.at(m), vec.at(n));
                m = m + 1;
                n = n - 1;
            } else {
                c = n;
            }
        }
        c = n;
        a = c + 1;
    }
}

int main() {
    std::vector<int> vec = {9, 4, 6, 3, 2};
    int n = vec.size();
    F2(vec, 0, n - 1);

    for (int i = 0; i < n; i++) {
        std::cout << vec.at(i) << " ";
    }

    return 0;
}
