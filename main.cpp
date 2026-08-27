#include <vector>
#include <iostream>
#include <string>
#include <random>
#include <algorithm>

//using namespace std;

std::random_device rd;
std::mt19937 gen(rd());

int GetRandom(int min, int max) {
    std::uniform_int_distribution<> distrib(min, max);
    return distrib(gen);
}

void PrintSkills() {
    std::vector<std::string> availableSkills = {
        "Blade", "Blunt", "Hand to Hand", "Armorer", "Block", "Heavy Armor", "Athletics", "Acrobatics",
        "Light Armor", "Security", "Sneak", "Marksman", "Mercantile", "Speechcraft", "Illusion",
        "Alchemy", "Conjuration", "Mysticism", "Alteration", "Destruction", "Restoration"
    };
    shuffle(availableSkills.begin(), availableSkills.end(), gen);

    for (int i = 0; i < 7; ++i) {
        std::cout << availableSkills.at(i) << '\n';
    }
}
void PrintArchetype() {
    std::vector<std::string> archetypeList = {
        "Warrior", "Mage", "Thief"
    };
    std::cout << archetypeList.at(GetRandom(0, 2)) << '\n';
}
void PrintRace() {
    std::vector<std::string> raceList = {
        "Argonian", "Khajiit", "Dark Elf", "High Elf", "Orc", "Wood Elf", "Breton", "Imperial", "Nord", "Redguard"
    };
    std::vector<std::vector<std::string>> subRaces = {
        {"Arnesia", "Thornmarsh"},
        {"Anequina", "Pellitine"},
        {"Vvardenfell", "Mainland"},
        {"Auridon", "Summerset"},
        {"Stronghold", "Orsinium"},
        {"Grahtwood", "Reaper's March"},
        {"Systres", "High Rock"},
        {"Nibenay", "Colovia"},
        {"Western", "Eastern"},
        {"Alik'r Desert", "Dragontail Mountains"}
    };
    int mainRace = GetRandom(0, 9);
    bool subRaceType = GetRandom(0, 1);
    std::cout << raceList[mainRace] << " - " << subRaces[mainRace][subRaceType] << '\n';
}
void PrintSign() {
    std::vector<std::string> starSigns = {
        "Apprentice", "Atronach", "Lady", "Lord", "Lover", "Mage", "Ritual", "Serpent", "Shadow", "Steed", "Thief", "Tower", "Warrior"
    };
    std::cout << starSigns.at(GetRandom(0, 12)) << '\n';
}
void PrintGender() {
    std::vector<std::string> sex = {
        "Male", "Female"
    };
    std::cout << sex.at(GetRandom(0, 1)) << '\n';
}
void PrintAttributes() {
    std::vector<std::string> attributes = {
        "Strength", "Intelligence", "Willpower", "Agility", "Speed", "Endurance", "Personality", "Luck"
    };
    shuffle(attributes.begin(), attributes.end(), gen);
    for (size_t i = 0; i < 2; ++i) {
        std::cout << attributes.at(i) << '\n';
    }
}
void RandomClass() {
    std::cout << "Gender:" << '\n';
    PrintGender();
    std::cout << "\nRace:" << '\n';
    PrintRace();
    std::cout << "\nStar Sign:" << '\n';
    PrintSign();
    std::cout << "\nArchetype:" << '\n';
    PrintArchetype();
    std::cout << "\nAttributes:" << '\n';
    PrintAttributes();
    std::cout << "\nMajor Skills:" << '\n';
    PrintSkills();
}

int main() {
    RandomClass();
    return 0;
}
//i love my girlfriend
//TODO tell girlfriend i love her
