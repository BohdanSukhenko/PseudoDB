#include "DataBase.h"

void DataBase::addPlace(Place place) {
	data_base.push_back(place);
	data_base.at(num_of_elements).id = num_of_elements;
	num_of_elements++;
}

void DataBase::deletePlace(int id) {
	data_base.erase(data_base.begin() + id);
	num_of_elements--;
	for (int i = id; i < num_of_elements; i++) {
		data_base.at(num_of_elements - 1).id--;
	}
}

void DataBase::showAll() {
	for (int i = 0; i < num_of_elements; i++) {
		data_base.at(i).show();
	}
}

vector<int> DataBase::findByCategory(string category) {
	vector<int> ids;
	for (int i = 0; i < num_of_elements; i++) {
		vector<string> temp_cat = data_base.at(i).getCategories();
		for (int j = 0; j < temp_cat.size(); j++) {
			if (temp_cat.at(j) == category) {
				ids.push_back(data_base.at(i).id);
			}
		}
	}
	return ids;
}