#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdexcept>

class RecordManager {
public:
    RecordManager(const std::string& filename) : filename(filename) {}

    // Read records from a file
    void read() {
        std::ifstream file(filename);
        if (!file) {
            throw std::runtime_error("Could not open file: " + filename);
        }

        try {
            std::string line;
            while (std::getline(file, line)) {
                records.push_back(stoi(line));  // Convert each line to an integer
            }
        } catch (const std::invalid_argument& e) {
            file.close();  // Ensure the file is closed
            throw std::invalid_argument("Invalid argument when reading the file: " + filename + " - " + e.what());
        } catch (const std::out_of_range& e) {
            file.close();  // Ensure the file is closed
            throw std::out_of_range("Out of range when reading the file: " + filename + " - " + e.what());
        }
        file.close();
    }

    // Return the sum of the records
    int sum() const {
        int total = 0;
        for (int record : records) {
            total += record;
        }
        return total;
    }

private:
    std::string filename;
    std::vector<int> records;
};

int main() {
    try {
        RecordManager manager("test_corrupt1.txt");
        manager.read();
        std::cout << "Sum of records: " << manager.sum() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}