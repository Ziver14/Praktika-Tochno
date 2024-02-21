#include<iostream>
#include<string>
#include<vector>
#include<list>

//class Cat {
//private:
//
//	std::string name_;
//	std::string breed_;
//	std::string owner_;
//public:
//	Cat() : name_("noname"), breed_("nobreed"), owner_("noowner") {};
//
//	Cat(std::string name, std::string breed, std::string owner) {
//		name_ = name;
//		breed_ = breed;
//		owner_ = owner;
//	}
//
//	std::string  GetName() const {
//		return name_;
//	}
//	
//	bool operator == (const Cat& cat) {
//	return
//	name_ == cat.name_&& 
//	breed_ == cat.breed_&&
//	owner_ == cat.owner_;
//	}
//
//		
//		
//	~Cat() {};
//
//
//};
//
//
//class Hotel {
//private:
//	std::list <Cat> cats;
//
//	int maxCat = 5;
//	int NumOfCat_=0;
//public:
//	Hotel() {};
//
//	Hotel(int NumOfCat) {
//		NumOfCat_ = NumOfCat;
//	}
//
//
//
//	int GetNumOfCat () {
//		return NumOfCat_;
//	}
//
//	int SetNumOfCat(int NumOfCat){
//		NumOfCat_ = NumOfCat;
//	}
//
//
//	void addCat(const Cat& cat) {
//		NumOfCat_++;
//		if (NumOfCat_ > maxCat) throw - 1;
//		cats.push_back(cat);
//		std::cout << cat.GetName() <<' ' << " In" << std::endl;
//	}
//	void searchCat(const std::string& catName) {
//		for (const auto& cat : cats) {
//			if (cat.GetName() == catName) {
//				std::cout << "Here";
//				return;
//			}
//		}
//				std::cout << "Is not here";
//	};
//			
//			
//	
//	void deleteCat(const std::string& Cat) {
//		maxCat--;
//		
//		for (auto i = cats.begin(); i != cats.end(); i++) {
//			if (i->GetName() == Cat)
//			{
//				cats.erase(i);
//				i = cats.begin();
//			}
//			
//		}
//		
//	};
//		
//
//
//	~Hotel() {};
//
//};
//
//
//
//
//
//
//int main(){
//
//Hotel obj1;
//
//Cat cat2("Murka", "J", "J");
//
//Cat cat1("Barsic", "M", "M");
//
//obj1.addCat(cat1);
//std::cout << std::endl;
//obj1.addCat(cat2);
//std::cout << std::endl;
//obj1.searchCat("Murka");
//
//	return 0;
//}