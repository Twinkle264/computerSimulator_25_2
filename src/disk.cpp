#include "disk.h"

void save() {
    int *pointer = read();
    ofstream data_save("data.txt", ios::binary);
    if (data_save.is_open()) {
        for (int i = 0; i < 8; ++i) {
            data_save << pointer[i] << ' ';
        }
    }else {
        cout << "File not open." << endl;
    }
    data_save.close();
}

void load() {
        int *pointer = read();
        ifstream data_load("data.txt", ios::binary);
        if (data_load.is_open()) {
            for (int i = 0; i < 8; ++i) {
                data_load >> pointer[i];
            }
        }else {
            cout << "File not open." << endl;
        }
        data_load.close();
    }
