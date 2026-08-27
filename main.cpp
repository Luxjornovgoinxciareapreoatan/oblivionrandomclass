#include <vector>
#include <iostream>
#include <string>
#include <random>
#include <algorithm>

using namespace std;

random_device rd;
mt19937 gen(rd());

int GetRandom(int min, int max) {
    uniform_int_distribution<> distrib(min, max);
    return distrib(gen);
}

void PrintSkills() {
    vector<string> availableSkills = {
        "Blade", "Blunt", "Hand to Hand", "Armorer", "Block", "Heavy Armor", "Athletics", "Acrobatics",
        "Light Armor", "Security", "Sneak", "Marksman", "Mercantile", "Speechcraft", "Illusion",
        "Alchemy", "Conjuration", "Mysticism", "Alteration", "Destruction", "Restoration"
    };
    shuffle(availableSkills.begin(), availableSkills.end(), gen);

    for (int i = 0; i < 7; ++i) {
        cout << availableSkills.at(i) << '\n';
    }
}
void PrintArchetype() {
    vector<string> archetypeList = {
        "Warrior", "Mage", "Thief"
    };
    cout << archetypeList.at(GetRandom(0, 2)) << '\n';
}
void PrintRace() {
    vector<string> raceList = {
        "Argonian", "Khajiit", "Dark Elf", "High Elf", "Orc", "Wood Elf", "Breton", "Imperial", "Nord", "Redguard"
    };
    vector<vector<string>> subRaces = {
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
    cout << raceList[mainRace] << " - " << subRaces[mainRace][subRaceType] << '\n';
}
void PrintSign() {
    vector<string> starSigns = {
        "Apprentice", "Atronach", "Lady", "Lord", "Lover", "Mage", "Ritual", "Serpent", "Shadow", "Steed", "Thief", "Tower", "Warrior"
    };
    cout << starSigns.at(GetRandom(0, 12)) << '\n';
}
void PrintGender() {
    vector<string> sex = {
        "Male", "Female"
    };
    cout << sex.at(GetRandom(0, 1)) << '\n';
}
void PrintAttributes() {
    vector<string> attributes = {
        "Strength", "Intelligence", "Willpower", "Agility", "Speed", "Endurance", "Personality", "Luck"
    };
    shuffle(attributes.begin(), attributes.end(), gen);
    for (size_t i = 0; i < 2; ++i) {
        cout << attributes.at(i) << '\n';
    }
}
void RandomClass() {
    cout << "Gender:" << '\n';
    PrintGender();
    cout << "\nRace:" << '\n';
    PrintRace();
    cout << "\nStar Sign:" << '\n';
    PrintSign();
    cout << "\nArchetype:" << '\n';
    PrintArchetype();
    cout << "\nAttributes:" << '\n';
    PrintAttributes();
    cout << "\nMajor Skills:" << '\n';
    PrintSkills();
}

int main() {
    RandomClass();
    return 0;
}
//i love my girlfriend
//TODO tell girlfriend i love her
