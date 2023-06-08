#pragma once
#include "Place.h"
class DataBase
{
public:
	int num_of_elements = 0;
	vector<Place> data_base;

	void addPlace(Place place);
	void deletePlace(int id);
	vector<int> findByCategory(string category);

	void showAll();
};

