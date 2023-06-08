#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <Windows.h>

using namespace std;

class Place
{
private:
	string name;
	string photo_link;
	vector<string> categories;
	string guide;
	string description;
	int price;
	double time;
public:
	int id;
	Place() {
	}
	Place(string new_name, string new_link, vector<string> new_categories, string new_guide, string new_description, int new_price, double new_time);

	void setName(string new_name);
	void setLink(string new_link);
	void setCategories(vector<string> new_categories);
	void setGuide(string new_guide);
	void setDescription(string new_desc);
	void setPrice(int new_price);
	void setTime(double new_time);

	string getName();
	string getLink();
	vector<string> getCategories();
	string getGuide();
	string getDescripion();
	int getPrice();
	double getTime();

	void show();
};

