// Simple Log Method by tory#3784

// Active libs
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Global foldername for easy use
string log_FolderName = "log";

// Log Folder initialisation
void log_folder(){
    system(("mkdir " + log_FolderName).c_str());
    cout << "folder: " << '"' << log_FolderName << '"' << " Created!";
}

// Error push to log file
void error_Log(int er_code, string er_text){
//    error_Log method accepts only an int and a string text exception!
        ofstream log("logs/error.log");
        log << er_code << " " << er_text << '\n';
        cout << "Exception: Check " << '"' << log_FolderName << '"';
}

int main() {
//    init the log folder by "log_folder()"
    log_folder();
//    example of error push to log file
    error_Log(420, "!Error Text!");
}
