#include"iostream"
const char* RecomendFood(char firstLetter) {
	if (firstLetter == 'A' || firstLetter == 'a') {
		return "Apple";
	}
	if (firstLetter == 'B' || firstLetter == 'b') {
		return "Banana";
	}
	if (firstLetter == 'C' || firstLetter == 'c') {
		return "Chocolate";
	}
	else return "Pizza";
}
void PizzaRecipe() {
	std::cout << "Follow recipe to make piza...." << std::endl;
}