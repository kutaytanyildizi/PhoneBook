#include "base.cpp"
#include <chrono>
#include <cstdlib>
#include <fstream>
#include <iomanip>

void Insert(VecPhoneBook& vecPhone, int numberOfPeople, string nameArr[]);
void Insert(MapPhoneBook& mapPhone, int numberOfPeople, string nameArr[]);
void Insert(UmapPhoneBook& umapPhone, int numberOfPeople, string nameArr[]);
double Search(VecPhoneBook& vecPhone, string searchName);
double Search(MapPhoneBook& mapPhone, string searchName);
double Search(UmapPhoneBook& umapPhone, string searchName);
void PrintMemoryComplexity(VecPhoneBook vecPhone);
void PrintMemoryComplexity(MapPhoneBook mapPhone);
void PrintMemoryComplexity(UmapPhoneBook umapPhone);

int main()
{
    VecPhoneBook vecPhone;
    MapPhoneBook mapPhone;
    UmapPhoneBook umapPhone;

    cout.precision(15);

    string nameArr[10] = { "Kutay","Ahmet","Mehmet","Berkay","Doğukan","Onur","Bülent","Dilek","Bahadir","Yekta" };

    fstream fout;
    fout.open("data.txt", ios::out);
    fout << ", Vector, Map, Umap" << endl;

    vecPhone.addContact("Deniz", "05074171577");
    mapPhone.addContact("Deniz", "05074171577");
    umapPhone.addContact("Deniz", "05074171577");

    double vecSearchTime{};
    double mapSearchTime{};
    double umapSearchTime{};

    //---------- FOR 10 ----------//

    fout << "10, ";
    cout << "-----FOR 10 PEOPLE-----" << endl;
    Insert(vecPhone, 10, nameArr);
    vecSearchTime = Search(vecPhone, "Deniz");
    PrintMemoryComplexity(vecPhone);
    fout << vecSearchTime << ", ";

    Insert(mapPhone, 10, nameArr);
    mapSearchTime = Search(mapPhone, "Deniz");
    PrintMemoryComplexity(mapPhone);
    fout << mapSearchTime << ", ";

    Insert(umapPhone, 10, nameArr);
    umapSearchTime = Search(umapPhone, "Deniz");
    PrintMemoryComplexity(umapPhone);
    fout << umapSearchTime << endl;

    //---------- FOR 100 ----------//

    fout << "100, ";
    cout << "-----FOR 100 PEOPLE-----" << endl;
    Insert(vecPhone, 90, nameArr);
    vecSearchTime = Search(vecPhone, "Deniz");
    PrintMemoryComplexity(vecPhone);
    fout << vecSearchTime << ", ";

    Insert(mapPhone, 90, nameArr);
    mapSearchTime = Search(mapPhone, "Deniz");
    PrintMemoryComplexity(mapPhone);
    fout << mapSearchTime << ", ";

    Insert(umapPhone, 90, nameArr);
    umapSearchTime = Search(umapPhone, "Deniz");
    PrintMemoryComplexity(umapPhone);
    fout << umapSearchTime << endl;

    //---------- FOR 1000 ----------//

    fout << "1000, ";
    cout << "-----For 1000 People-----" << endl;
    Insert(vecPhone, 900, nameArr);
    vecSearchTime = Search(vecPhone, "Deniz");
    PrintMemoryComplexity(vecPhone);
    fout << vecSearchTime << ", ";

    Insert(mapPhone, 900, nameArr);
    mapSearchTime = Search(mapPhone, "Deniz");
    PrintMemoryComplexity(mapPhone);
    fout << mapSearchTime << ", ";

    Insert(umapPhone, 900, nameArr);
    umapSearchTime = Search(umapPhone, "Deniz");
    PrintMemoryComplexity(umapPhone);
    fout << umapSearchTime << endl;

    //---------- FOR 10000 ----------//

    fout << "10000, ";
    cout << "-----For 10000 People-----" << endl;
    Insert(vecPhone, 9000, nameArr);
    vecSearchTime = Search(vecPhone, "Deniz");
    PrintMemoryComplexity(vecPhone);
    fout << vecSearchTime << ", ";

    Insert(mapPhone, 9000, nameArr);
    mapSearchTime = Search(mapPhone, "Deniz");
    PrintMemoryComplexity(mapPhone);
    fout << mapSearchTime << ", ";

    Insert(umapPhone, 9000, nameArr);
    umapSearchTime = Search(umapPhone, "Deniz");
    PrintMemoryComplexity(umapPhone);
    fout << umapSearchTime << endl;

    //---------- FOR 100000 ----------//

    fout << "100000, ";
    cout << "-----For 100000 People-----" << endl;
    Insert(vecPhone, 90000, nameArr);
    vecSearchTime = Search(vecPhone, "Deniz");
    PrintMemoryComplexity(vecPhone);
    fout << vecSearchTime << ", ";

    Insert(mapPhone, 90000, nameArr);
    mapSearchTime = Search(mapPhone, "Deniz");
    PrintMemoryComplexity(mapPhone);
    fout << mapSearchTime << ", ";

    Insert(umapPhone, 90000, nameArr);
    umapSearchTime = Search(umapPhone, "Deniz");
    PrintMemoryComplexity(umapPhone);
    fout << umapSearchTime << endl;

    //---------- FOR 1000000 ----------//

    fout << "1000000, ";
    cout << "-----For 1000000 People-----" << endl;
    Insert(vecPhone, 900000, nameArr);
    vecSearchTime = Search(vecPhone, "Deniz");
    PrintMemoryComplexity(vecPhone);
    fout << vecSearchTime << ", ";

    Insert(mapPhone, 900000, nameArr);
    mapSearchTime = Search(mapPhone, "Deniz");
    PrintMemoryComplexity(mapPhone);
    fout << mapSearchTime << ", ";

    Insert(umapPhone, 900000, nameArr);
    umapSearchTime = Search(umapPhone, "Deniz");
    PrintMemoryComplexity(umapPhone);
    fout << umapSearchTime << endl;

    //---------- FOR 10000000 ----------//

    fout << "10000000, ";
    cout << "-----For 10000000 People-----" << endl;
    Insert(vecPhone, 9000000, nameArr);
    vecSearchTime = Search(vecPhone, "Deniz");
    PrintMemoryComplexity(vecPhone);
    fout << vecSearchTime << ", ";

    Insert(mapPhone, 9000000, nameArr);
    mapSearchTime = Search(mapPhone, "Deniz");
    PrintMemoryComplexity(mapPhone);
    fout << mapSearchTime << ", ";

    Insert(umapPhone, 9000000, nameArr);
    umapSearchTime = Search(umapPhone, "Deniz");
    PrintMemoryComplexity(umapPhone);
    fout << umapSearchTime << endl;

    return 0;
}

void Insert(VecPhoneBook& vecPhone, int numberOfPeople, string nameArr[])
{
    auto startVecInsert = chrono::high_resolution_clock::now();
    for (int i = 0; i < numberOfPeople; i++)
    {
        int num = rand() % 10;
        string name = nameArr[num];
        vecPhone.addContact(name, "05056550511");
    }
    auto endVecInsert = chrono::high_resolution_clock::now();
    chrono::duration<double> vecInsertTime = endVecInsert - startVecInsert;
    cout << "Vector Insert time complexity: " << vecInsertTime.count() << " seconds" << endl;
}

void Insert(MapPhoneBook& mapPhone, int numberOfPeople, string nameArr[])
{
    auto startMapInsert = chrono::high_resolution_clock::now();
    for (int i = 0; i < numberOfPeople; i++)
    {
        int num = rand() % 10;
        string name = nameArr[num];
        mapPhone.addContact(name, "05056550511");
    }
    auto endMapInsert = chrono::high_resolution_clock::now();
    chrono::duration<double> mapInsertTime = endMapInsert - startMapInsert;
    cout << "Map Insert time complexity: " << mapInsertTime.count() << " seconds" << endl;
}

void Insert(UmapPhoneBook& umapPhone, int numberOfPeople, string nameArr[])
{
    auto startUmapInsert = chrono::high_resolution_clock::now();
    for (int i = 0; i < numberOfPeople; i++)
    {
        int num = rand() % 10;
        string name = nameArr[num];
        umapPhone.addContact(name, "05056550511");
    }
    auto endUmapInsert = chrono::high_resolution_clock::now();
    chrono::duration<double> umapInsertTime = endUmapInsert - startUmapInsert;
    cout << "Unordered Map Insert time complexity: " << umapInsertTime.count() << " seconds" << endl;
}

double Search(VecPhoneBook& vecPhone, string searchName)
{
    auto startVec = chrono::high_resolution_clock::now();
    vecPhone.getPhoneNumber(searchName);
    auto endVec = chrono::high_resolution_clock::now();
    chrono::duration<double> vecTime = endVec - startVec;
    cout << "Vector Search time complexity: " << vecTime.count() << " seconds" << endl;
    return vecTime.count();
}

double Search(MapPhoneBook& mapPhone, string searchName)
{
    auto startMap = chrono::high_resolution_clock::now();
    mapPhone.getPhoneNumber(searchName);
    auto endMap = chrono::high_resolution_clock::now();
    chrono::duration<double> mapTime = endMap - startMap;
    cout << "Map Insert time complexity: " << mapTime.count() << " seconds" << endl;
    return mapTime.count();
}

double Search(UmapPhoneBook& umapPhone, string searchName)
{
    auto startUmap = chrono::high_resolution_clock::now();
    umapPhone.getPhoneNumber(searchName);
    auto endUmap = chrono::high_resolution_clock::now();
    chrono::duration<double> umapTime = endUmap - startUmap;
    cout << "Unordered Map Search time complexity: " << umapTime.count() << " seconds" << endl;
    return umapTime.count();
}

void PrintMemoryComplexity(VecPhoneBook vecPhone)
{
    cout << "Vector memory complexity: " << sizeof(vecPhone) << endl;
}

void PrintMemoryComplexity(MapPhoneBook mapPhone)
{
    cout << "Map memory complexity: " << sizeof(mapPhone) << endl;
}

void PrintMemoryComplexity(UmapPhoneBook umapPhone)
{
    cout << "Unordered Map memory complexity: " << sizeof(umapPhone) << endl;
}
