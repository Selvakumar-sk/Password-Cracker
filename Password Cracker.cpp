#include <iostream>
#include <string>
#include <vector>
#include <chrono>

// Function to generate all possible combinations of characters
void generate_combinations(std::string current, int max_length, const std::string& charset, std::vector<std::string>& combinations) {
    if (current.length() == max_length) {
        combinations.push_back(current);
        return;
    }
    for (char c : charset) {
        generate_combinations(current + c, max_length, charset, combinations);
    }
}

// Function to crack the password using brute-force method
std::string crack_password(const std::string& target, const std::string& charset, int max_length) {
    std::vector<std::string> combinations;
    for (int length = 1; length <= max_length; ++length) {
        generate_combinations("", length, charset, combinations);
        for (const std::string& candidate : combinations) {
            if (candidate == target) {
                return candidate;
            }
        }
        combinations.clear();
    }
    return "";
}

int main() {
    std::string target_password;
    std::cout << "Enter the password to crack: ";
    std::cin >> target_password;

    std::string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int max_length = 4;  // Set a reasonable max length for demonstration purposes

    auto start = std::chrono::high_resolution_clock::now();
    std::string cracked_password = crack_password(target_password, charset, max_length);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;

    if (!cracked_password.empty()) {
        std::cout << "Password cracked: " << cracked_password << std::endl;
    } else {
        std::cout << "Password could not be cracked." << std::endl;
    }

    std::cout << "Time taken: " << duration.count() << " seconds" << std::endl;

    return 0;
}
