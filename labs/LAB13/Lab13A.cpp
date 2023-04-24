/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Lab#: 13A: The Architect
*/

#include <iostream>
using namespace std;

class BuildingBlueprint {
private:
	int m_stories {};
	int m_apartments {};
	float m_occupancy {};
	bool m_full {};

public: 
	BuildingBlueprint() {
		m_stories = 10;
		m_apartments = 20;
		m_occupancy = 1.0;
		m_full = true;
	}

	BuildingBlueprint(int stories, int apartments, float occupancy) {
		m_stories = stories;
		m_apartments = apartments;
		m_occupancy = occupancy;
		if (occupancy == 1.0) {
			m_full = true;
		} else {
			m_full = false;
		}
	}

	void setOccupancy(float occupancy) {
		if ((occupancy*100) >= 0 && (occupancy*100) <= 100) {
			m_occupancy = occupancy;
		}
	}	

	int getStories() { return m_stories;}
	float getOccupancy() { return m_occupancy;}
	int getApartments() { return m_apartments;}
	bool getFull() { return m_full;}
};

int main(int argc, char ** argv) {
	BuildingBlueprint buildingOne;
	BuildingBlueprint buildingTwo{30, 30, 0.75};
	
	cout << "Year 2020:\n";
	cout << "Building 1 has " << buildingOne.getStories() << " floors, " 
		<< buildingOne.getApartments() << " apartments, and is " 
		<< buildingOne.getOccupancy() * 100 << "\% occupied. Full? ";
	buildingOne.getFull() ? cout << " true\n" : cout << " false\n";
	cout << "Building 2 has " << buildingTwo.getStories() << " floors, " 
		<< buildingTwo.getApartments() << " apartments, and is " 
		<< buildingTwo.getOccupancy() * 100 << "\% occupied. Full? ";
	buildingTwo.getFull() ? cout << " true\n" : cout << " false\n";

	cout << "\nMany years pass.\n";
	buildingOne.setOccupancy(0);
	buildingTwo.setOccupancy(1.0);

	cout << "\nYear 2043:\n";
	cout << "Building 1 has " << buildingOne.getStories() << " floors, " 
		<< buildingOne.getApartments() << " apartments, and is " 
		<< buildingOne.getOccupancy() * 100 << "\% occupied. Full? ";
	buildingTwo.getFull() ? cout << " true\n" : cout << " false\n";
	cout << "Building 2 has " << buildingTwo.getStories() << " floors, " 
		<< buildingTwo.getApartments() << " apartments, and is " 
		<< buildingTwo.getOccupancy() * 100 << "\% occupied. Full? ";
	buildingOne.getFull() ? cout << " true\n" : cout << " false\n";

	cout << "\nLooks like people prefer taller buildings.\n";
	return 0;
}
