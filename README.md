# Password Cracker in C++

This project is a simple password cracker that uses a brute-force method to attempt to crack a given password. It generates all possible combinations of characters up to a specified length and checks each one against the target password.

## Project Briefing

This password cracker script is designed to demonstrate the brute-force method for password cracking. It generates all possible combinations of characters from a specified charset and tries each combination to see if it matches the target password. The program will output the cracked password if found, and the time taken to find the password.

### How it Works

1. The script prompts the user to enter the password to crack.
2. It uses a recursive function to generate all possible combinations of characters up to a given length.
3. For each generated combination, it checks if it matches the target password.
4. If a match is found, the cracked password is printed.
5. If all combinations up to the maximum length are exhausted without finding the password, a message is printed indicating the password could not be cracked.
6. The time taken to run the brute-force attack is displayed.

## Requirements

- A C++ compiler (e.g., g++)

## Usage

1. Clone the repository or download the `main.cpp` file.
2. Compile the program using a C++ compiler.
3. Run the executable and enter the target password when prompted.

### Example

1. **Compile the Program:**

```sh
g++ main.cpp -o password_cracker
