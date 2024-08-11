#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <cmath>

int main() {
    std::string filename = "facebook_combined.txt";
    std::ifstream file(filename);
    
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return 1;
    }

    std::unordered_map<int, int> degree_map;
    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        int node1, node2;
        if (!(iss >> node1 >> node2)) {
            continue;
        }
        degree_map[node1]++;
        degree_map[node2]++;
    }
    file.close();

    // Calculate average degree and average of the square of degrees
    double avg_k = 0.0, avg_k2 = 0.0;
    int node_count = degree_map.size();

    for (const auto& entry : degree_map) {
        int degree = entry.second;
        avg_k += degree;
        avg_k2 += degree * degree;
    }
    avg_k /= node_count;
    avg_k2 /= node_count;

    // Calculate critical transmissibility T*
    double T_star = avg_k / (avg_k2 - avg_k);
    
    std::cout << "Average Degree <k>: " << avg_k << std::endl;
    std::cout << "Average of Square of Degrees <k^2>: " << avg_k2 << std::endl;
    std::cout << "Critical Transmissibility (T*): " << T_star << std::endl;

    return 0;
}