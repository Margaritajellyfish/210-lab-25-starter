#include <iostream>
#include <fstream>
#include <chrono>
#include <vector>
#include <list>
#include <set>
using namespace std;
using namespace std::chrono;

void load_data(const string &filename, vector<string> &vec, list<string> &lst, set<string> &st);
void display_results(const string &operation, long long vector_time, long long list_time, long long set_time);
int main() {
    

    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/