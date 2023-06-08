#include "Place.h"

Place::Place(string new_name, string new_link, vector<string> new_categories, string new_guide, string new_description, int new_price, double new_time) {
	name = new_name;
	photo_link = new_link;
	categories = new_categories;
	guide = new_guide;
	description = new_description;
	price = new_price;
	time = new_time;
}

void Place::setName(string new_name) {
	name = new_name;
}
void Place::setLink(string new_link) {
	photo_link = new_link;
}
void Place::setCategories(vector<string> new_categories) {
	categories = new_categories;
}
void Place::setGuide(string new_guide) {
	guide = new_guide;
}
void Place::setDescription(string new_desc) {
	description = new_desc;
}
void Place::setPrice(int new_price) {
	price = new_price;
}
void Place::setTime(double new_time) {
	time = new_time;
}

string Place::getName() {
	return name;
}
string Place::getLink() {
	return photo_link;
}
vector<string> Place::getCategories() {
	return categories;
}
string Place::getGuide() {
	return guide;
}
string Place::getDescripion() {
	return description;
}
int Place::getPrice() {
	return price;
}
double Place::getTime() {
	return time;
}

void Place::show() {
	cout << id << endl << name << endl << photo_link << endl;
	for (int i = 0; i < categories.size(); i++) {
		cout << categories.at(i) << " ";
	}
	cout << endl << guide << endl << description << endl << price << endl << time << endl;
}