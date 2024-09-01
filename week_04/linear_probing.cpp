#include "hash.h" 
#include <iostream>
using namespace std;

Hash::Hash(int max) {  
  length = 0;
  max_items = max;
  structure = new student[max_items];
}

Hash::~Hash(){
  delete [] structure;
}

bool Hash::isFull() const {
  return (length == max_items);
}

int Hash::getLength() const {
  return length;
}

void Hash::retrieveItem(StudentClass& student, bool& found) {
  int startLoc = getHash(student);
  bool moreToSearch = true; 
  int location = startLoc;
  do {
    if (structure[location].getRa() == student.getRa() ||
	structure[location].getRa() == -1)
      moreToSearch = false;
    else
      location = (location + 1) % max_items;
  } while (location != startLoc && moreToSearch);
  
  found = (structure[location].getRa() == student.getRa() );   
  if (found) { 
    student = structure[location];
  }
}

void Hash::insertItem(StudentClass student) {
  int location;
  location = getHash(student);
  while (structure[location].getRa() > 0)
    location = (location + 1) % max_items;
  structure[location] = student;
  length++;
}

void Hash::deleteItem(StudentClass student) {
  int startLoc = getHash(student);
  bool moreToSearch = true; 
  int location = startLoc;
  do {
    if (structure[location].getRa() == student.getRa() ||
	structure[location].getRa() == -1)
      moreToSearch = false;
    else
      location = (location + 1) % max_items;
  } while (location != startLoc && moreToSearch);

  if (structure[location].getRa() == student.getRa()) {       
    structure[location] = student(-2,"");
    length--;
  }
}

void Hash::print() {
  for (int i = 0; i < max_items; i++) {
    cout << i <<":"<< structure[i].getRa()<<", "<<structure[i].getNome()<<endl;
  }
}

int Hash::getHash(StudentClass student){
  return student.getRa() % max_items;
}

