#include "DataBase.h"
#include <fstream>
#include <sstream>

vector<string> divideCategories(string str) {
    vector<string> cat;

    stringstream ss(str);
    string temp_str;

    while (getline(ss, temp_str, ' ')) {
        cat.push_back(temp_str);
    }
    return cat;
}

void openFile(string filename, DataBase* DB) {
    string line;
    bool check = true;
    ifstream infile;
    infile.open(filename);

    if (!infile.is_open()) {
        cout << "Failed to open file " << filename << endl;
        exit(1);
    }

    while (check) {
        Place tmp_place;
        for (int i = 0; i < 7; i++) {
            if (!getline(infile, line)) {
                check = false;
                break;
            }
            switch (i)
            {
            case 0:
                break;
            case 1:
                tmp_place.setName(line);
                break;
            case 2:
                tmp_place.setCategories(divideCategories(line));
                break;
            case 3:
                tmp_place.setGuide(line);
                break;
            case 4:
                tmp_place.setDescription(line);
                break;
            case 5:
                tmp_place.setPrice(stoi(line));
                break;
            case 6:
                tmp_place.setTime(stod(line));
                break;
            default:
                break;
            }
        }
        if (check) DB->addPlace(tmp_place);
    }
    infile.close();
}

void writetoFile(string filename, DataBase* DB) {
    ofstream ofile(filename, ios::out);
    if (!ofile.is_open()) {
        cout << "Failed to open file " << filename << endl;
        exit(1);
    }
    for (int i = 0; i < DB->num_of_elements; i++) {
        ofile << "*************************" << endl;
        ofile << DB->data_base.at(i).getName() << endl;
        vector<string> tmp_cat;
        tmp_cat = DB->data_base.at(i).getCategories();
        for (int i = 0; i < tmp_cat.size(); i++) {
            ofile << tmp_cat.at(i) << " ";
        }
        ofile << DB->data_base.at(i).getGuide() << endl;
        ofile << DB->data_base.at(i).getDescripion() << endl;
        ofile << DB->data_base.at(i).getPrice() << endl;
        ofile << DB->data_base.at(i).getTime() << endl;
    }
    ofile.close();
}