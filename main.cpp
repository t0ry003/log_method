// Simple Log Method by tory#3784

// Active libs
#include <iostream>
#include <fstream>
#include <string>
#include <windows>

using namespace std;

ofstream results("results.txt");

string log_FolderName;

void log_folder(){
    log_FolderName = "logs";
    system(("mkdir " + log_FolderName).c_str());
    cout << '"' << log_FolderName << '"' << " Created!";
}

void error_Log(int er_code, string er_text){
//    error_Log method accepts only an int and a string text exception!
        ofstream log("logs/error.log");
        log << er_code << " " << er_text << '\n';
}

int main() {
    log_folder();
    error_Log(420, "!Error Text!");
}
