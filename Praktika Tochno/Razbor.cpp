#include<iostream>
#include<string>

class Cat {
public:
	Cat(): Cat(" "," "," ") { }
	Cat(std::string name, std::string bride, std::string owner):name_(name),bride_(bride),owner_(owner) { }

	std::string Name()const {

		return name_;
	}
	std::string Bride()const {
		return bride_;
	}
	//возвращает значение поля
	std::string Owner()const {
		return owner_;
	}

	void Name(std::string name) {
		name_ = name;
	}
	//устанавливает значение поля
	void Bride(std::string bride) {
		bride_ = bride;
	}

	void Owner(std::string owner) {
		owner_ = owner;
	}

	bool operator==(const Cat& other) {
		return name_ == other.name_ &&
			bride_ == other.bride_ &&
			owner_ == other.owner_;

	}
private:
	std::string name_;
	std::string bride_;
	std::string owner_; 


};


class Hotel {
public:
	Hotel() :cats_(nullptr), current_(0), capacity_(0){ }

	Hotel(int capacity) {
		current_ = 0;
		capacity_ = capacity;
		cats_ = new Cat[capacity_]{};

	}

	//Добавление кота
	void addCat(const Cat &cat) {
		if (capacity_ > current_) {
			cats_[current_] = cat;
			current_++;
		}
		else {
			throw - 1;
		}
	}
	Cat deleteCat(int num) {
		if (num > current_ || num < 1) {
			throw - 1;
		}
		Cat result{ cats_[num - 1] };
		std::swap(cats_[num - 1], cats_[current_ - 1]);
		//тут может быть очиска данных последнего хранимого элемента
		current_ -= 1;
		return result;
	}

	void newCapacity(int i) {
		if (i < current_) {
			throw - 1;
		}

		Cat* tmp = new Cat[i]{};
		for (size_t j = 0; j < current_; j++)
		{
			tmp[j] = cats_[j];
		}
		std::swap(tmp, cats_);
		capacity_ = i;
		delete[] tmp;
	}

	int findCat(std::string name_cat) {
		int result{ -1 };
		for (size_t i = 0; i < current_; i++)
		{
			if (cats_[i].Name() == name_cat) {
				result = i + 1;
				break;
			}
		}
		return result;
	}
private:
	Cat* cats_;		//коты	
	int capacity_;  //вместимость отеля
	int current_;	//текущее колличество
};





int main() {

	Cat kitty;
	kitty.Owner();



	return 0;
}