#include <iostream>
#include <string>

using namespace std;

class DomesticAnimal
{

protected:
    string name;

public:

    DomesticAnimal(const string& animalName) : name(animalName) {}

    virtual void display() const = 0;
};

class Dog : public DomesticAnimal
{

    string breed;

public:

    Dog(const string& dogName, const string& dogBreed) : DomesticAnimal(dogName), breed(dogBreed) {}

    void display() const
    {
        cout << "Dog: " << name << ", Breed: " << breed << endl;
    }
};

class Cat : public DomesticAnimal
{

    string color;

public:

    Cat(const string& catName, const string& catColor) : DomesticAnimal(catName), color(catColor) {}

    void display() const
    {
        cout << "Cat: " << name << ", Color: " << color << endl;
    }
};

class Parrot : public DomesticAnimal
{

    string language;

public:

    Parrot(const string& parrotName, const string& parrotLanguage) : DomesticAnimal(parrotName), language(parrotLanguage) {}

    void display() const
    {
        cout << "Parrot: " << name << ", Language: " << language << endl;
    }
};

int main()
{
    Dog dog("Genri", "Mops");
    Cat cat("Metie", "Ashera");
    Parrot parrot("Gena", "English");

    dog.display();
    cat.display();
    parrot.display();

    return 0;
}