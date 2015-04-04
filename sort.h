#include <vector>
#include <fstream>

using namespace std;

class Sort {
    public:
        Sort():sum(0){};
        void input();
        void sorting();
        void output();
    private:
        vector<int>read_in;
        int number,sum;
};
