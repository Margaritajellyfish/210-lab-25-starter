#include <iostream>
#include <fstream>
#include <chrono>
#include <vector>
#include <list>
#include <set>
using namespace std;
using namespace std::chrono;

void load_data(const string &filename, vector<string> &vec);
void load_data(const string &filename, list<string> &lst);
void load_data(const string &filename, set<string> &st);

template <typename name> long long readData(name &container) {
  ifstream fin;
  fin.open("codes.txt");
  string line;
  auto start = high_resolution_clock::now();
  while (getline(fin, line)) {
    container.insert(container.end(), line);
  }
  auto end = high_resolution_clock::now();
  fin.close();

  return duration_cast<microseconds>(end - start).count();
}
template <typename name> long long deleteData(name &container) {

  auto start = high_resolution_clock::now();
  auto it = container.begin();
  advance(it, container.size() / 2);
  container.erase(it);
  auto end = high_resolution_clock::now();
  return duration_cast<microseconds>(end - start).count();
}

int main() {
    vector<string> vec;
    list<string> lst;
    set<string> st;

    auto start = high_resolution_clock::now();
    load_data("codes.txt", vec);
    auto end = high_resolution_clock::now();
    long long read_vector_time = duration_cast<microseconds>(end - start).count();

    return 0;
}

void load_data(const string &filename, vector<string> &vec) {
    ifstream file(filename);
    string line;
    while (getline(file, line)) {
        vec.push_back(line);
    }
}

void load_data(const string &filename,list<string> &lst) {
    ifstream file(filename);
    string line;
    while (getline(file, line)) {
        lst.push_back(line);
    }
}

void load_data(const string &filename, set<string> &st) {
    ifstream file(filename);
    string line;
    while (getline(file, line)) {
        st.insert(line);
    }
}
/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/