#include "base.cpp"
#include <chrono>
#include <cstdlib>
#include <fstream>
#include <iomanip>

int main()
{
    VecPhoneBook vecPhone;
    MapPhoneBook mapPhone;
    UmapPhoneBook umapPhone;

    cout.precision(15);

    string nameArr[10] = {"Kutay","Ahmet","Mehmet","Berkay","Doğukan","Onur","Bülent","Dilek","Bahadir","Yekta"};

    fstream fout;
    fout.open("data.txt" , ios::out);
    fout << ", Vector, Map, Umap" << endl;

    vecPhone.addContact("Deniz", "05074171577");
    mapPhone.addContact("Deniz", "05074171577");
    umapPhone.addContact("Deniz", "05074171577");

    //---------- FOR 10 ----------//

    fout << "10, ";
    auto startVecInsert = chrono::high_resolution_clock::now();
    for(int i=0; i<10; i++)
    {
        int num = rand() % 10;
        string name = nameArr[num];
        vecPhone.addContact(name, "05056550511");
    }
    auto endVecInsert = chrono::high_resolution_clock::now();
    chrono::duration<double> vecInsertTimeTen = endVecInsert - startVecInsert;

    auto startMapInsert = chrono::high_resolution_clock::now();
    for(int i=0; i<10; i++)
    {
        int num = rand() % 10;
        string name = nameArr[num];
        mapPhone.addContact(name, "05056550511"); 
    }
    auto endMapInsert = chrono::high_resolution_clock::now();
    chrono::duration<double> mapInsertTimeTen = endMapInsert - startMapInsert;

    auto startUmapInsert = chrono::high_resolution_clock::now();
    for(int i=0; i<10; i++)
    {
        int num = rand() % 10;
        string name = nameArr[num];
        umapPhone.addContact(name, "05056550511");
    }
    auto endUmapInsert = chrono::high_resolution_clock::now();
    chrono::duration<double> umapInsertTimeTen = endUmapInsert - startUmapInsert;

    cout << "-----FOR 10 PEOPLE-----" << endl;
    
    auto startVec = chrono::high_resolution_clock::now();
    cout << vecPhone.getPhoneNumber("Deniz") << endl;
    auto endVec = chrono::high_resolution_clock::now();
    chrono::duration<double> vecTimeTen = endVec - startVec;
    cout << "Vector Insert time complexity: " << vecInsertTimeTen.count() << " seconds" << endl;
    cout << "Vector Search time complexity: " << vecTimeTen.count() << " seconds" << endl;
    cout << "Vector memory complexity: " << sizeof(vecPhone) << endl;
    fout << vecTimeTen.count() << ", ";

    auto startMap = chrono::high_resolution_clock::now();
    cout << mapPhone.getPhoneNumber("Deniz") << endl;
    auto endMap = chrono::high_resolution_clock::now();
    chrono::duration<double> mapTimeTen = endMap - startMap;
    cout << "Map Insert time complexity: " << mapInsertTimeTen.count() << " seconds" << endl;
    cout << "Map Search time complexity: " << mapTimeTen.count() << " seconds" << endl;
    cout << "Map memory compexity: " << sizeof(mapPhone) << endl;
    fout << mapTimeTen.count() << ", ";

    auto startUmap = chrono::high_resolution_clock::now();
    cout << umapPhone.getPhoneNumber("Deniz") << endl;
    auto endUmap = chrono::high_resolution_clock::now();
    chrono::duration<double> umapTimeTen = endUmap - startUmap;
    cout << "Unordered Map Insert time complexity: " << umapInsertTimeTen.count() << " seconds" << endl;
    cout << "Unordered Map Search time complexity: " << umapTimeTen.count() << " seconds" << endl;
    cout << "Unordered Map memory complexity: " << sizeof(umapPhone) << endl;
    fout << mapTimeTen.count() << endl;

    //---------- FOR 100 ----------//

    fout << "100, ";
    startVecInsert = chrono::high_resolution_clock::now();
    for(int i=0; i<90; i++)
    {
        int num = rand() % 10;
        string name = nameArr[num];
        vecPhone.addContact(name, "05056550511");
    }
    endVecInsert = chrono::high_resolution_clock::now();
    chrono::duration<double> vectorInsertTimeHundred = endVecInsert - startVecInsert;

    startMapInsert = chrono::high_resolution_clock::now();
    for(int i=0; i<90; i++)
    {
        int num = rand() % 10;
        string name = nameArr[num];
        mapPhone.addContact(name, "05056550511"); 
    }
    endMapInsert = chrono::high_resolution_clock::now();
    chrono::duration<double> mapInsertTimeHundred = endMapInsert - startMapInsert;

    startUmapInsert = chrono::high_resolution_clock::now();
    for(int i=0; i<90; i++)
    {
        int num = rand() % 10;
        string name = nameArr[num];
        umapPhone.addContact(name, "05056550511");
    }
    endUmapInsert = chrono::high_resolution_clock::now();
    chrono::duration<double> umapInsertTimeHundred = endUmapInsert - startUmapInsert;

    cout << "-----FOR 100 PEOPLE-----" << endl;

    startVec = chrono::high_resolution_clock::now();
    cout << vecPhone.getPhoneNumber("Deniz") << endl;
    endVec = chrono::high_resolution_clock::now();
    chrono::duration<double> vecTimeHundred = endVec - startVec;
    cout << "Vector Insert time complexity: " << vectorInsertTimeHundred.count() << " seconds" << endl;
    cout << "Vector Search time complexity: " << vecTimeHundred.count() << " seconds" << endl;
    cout << "Vector memory complexity: " << sizeof(vecPhone) << endl;
    fout << vecTimeHundred.count() << ", ";

    startMap = chrono::high_resolution_clock::now();
    cout << mapPhone.getPhoneNumber("Deniz") << endl;
    endMap = chrono::high_resolution_clock::now();
    chrono::duration<double> mapTimeHundred = endMap - startMap;
    cout << "Map Insert time complexity: " << mapInsertTimeHundred.count() << " seconds" << endl;
    cout << "Map Search time complexity: " << mapTimeHundred.count() << " seconds" << endl;
    cout << "Map memory compexity: " << sizeof(mapPhone) << endl;
    fout << mapTimeHundred.count() << ", ";

    startUmap = chrono::high_resolution_clock::now();
    cout << umapPhone.getPhoneNumber("Deniz") << endl;
    endUmap = chrono::high_resolution_clock::now();
    chrono::duration<double> umapTimeHundred = endUmap - startUmap;
    cout << "Unordered Map Insert time complexity: " << umapInsertTimeHundred.count() << " seconds" << endl;
    cout << "Unordered Map Search time complexity: " << umapTimeHundred.count() << " seconds" << endl;
    cout << "Unordered Map memory complexity: " << sizeof(umapPhone) << endl;
    fout << umapTimeHundred.count() << endl;

    //---------- FOR 1000 ----------//

    fout << "1000, ";
    startVecInsert = chrono::high_resolution_clock::now();
    for(int i=0; i<900; i++)
    {
        int num = rand() % 10;
        string name = nameArr[num];
        vecPhone.addContact(name, "05056550511");
    }
    endVecInsert = chrono::high_resolution_clock::now();
    chrono::duration<double> vecInsertTimeThousand = endVecInsert - startVecInsert;

    startMapInsert = chrono::high_resolution_clock::now();
    for(int i=0; i<900; i++)
    {
        int num = rand() % 10;
        string name = nameArr[num];
        mapPhone.addContact(name, "05056550511"); 
    }
    endMapInsert = chrono::high_resolution_clock::now();
    chrono::duration<double> mapInsertTimeThousand = endMapInsert - startMapInsert;

    startUmapInsert = chrono::high_resolution_clock::now();
    for(int i=0; i<900; i++)
    {
        int num = rand() % 10;
        string name = nameArr[num];
        umapPhone.addContact(name, "05056550511");
    }
    endUmapInsert = chrono::high_resolution_clock::now();
    chrono::duration<double> umapInsertTimeThousand = endUmapInsert - startUmapInsert;

    cout << "-----For 1000 People-----" << endl;

    startVec = chrono::high_resolution_clock::now();
    cout << vecPhone.getPhoneNumber("Deniz") << endl;
    endVec = chrono::high_resolution_clock::now();
    chrono::duration<double> vecTimeThousand = endVec - startVec;
    cout << "Vector Insert time complexity: " << vecInsertTimeThousand.count() << " seconds" << endl;
    cout << "Vector Search time complexity: " << vecTimeThousand.count() << " seconds" << endl;
    cout << "Vector memory complexity: " << sizeof(vecPhone) << endl;
    fout << vecTimeThousand.count() << ", ";

    startMap = chrono::high_resolution_clock::now();
    cout << mapPhone.getPhoneNumber("Deniz") << endl;
    endMap = chrono::high_resolution_clock::now();
    chrono::duration<double> mapTimeThousand = endMap - startMap;
    cout << "Map Insert time complexity: " << mapInsertTimeThousand.count() << " seconds" << endl;
    cout << "Map Search time complexity: " << mapTimeThousand.count() << " seconds" << endl;
    cout << "Map memory compexity: " << sizeof(mapPhone) << endl;
    fout << mapTimeThousand.count() << ", ";

    startUmap = chrono::high_resolution_clock::now();
    cout << umapPhone.getPhoneNumber("Deniz") << endl;
    endUmap = chrono::high_resolution_clock::now();
    chrono::duration<double> umapTimeThousand = endUmap - startUmap;
    cout << "Unordered Map Insert time complexity: " << umapInsertTimeThousand.count() << " seconds" << endl;
    cout << "Unordered Map Search time complexity: " << umapTimeThousand.count() << " seconds" << endl;
    cout << "Unordered Map memory complexity: " << sizeof(umapPhone) << endl;
    fout << umapTimeThousand.count() << endl;

    //---------- FOR 10000 ----------//

    fout << "10000, ";
    startVecInsert = chrono::high_resolution_clock::now();
    for(int i=0; i<9000; i++)
    {
        int num = rand() % 10;
        string name = nameArr[num];
        
        vecPhone.addContact(name, "05056550511");
    }
    endVecInsert = chrono::high_resolution_clock::now();
    chrono::duration<double> vecInsertTimeTenThousand = endVecInsert - startVecInsert;

    startMapInsert = chrono::high_resolution_clock::now();
    for(int i=0; i<9000; i++)
    {
        int num = rand() % 10;
        string name = nameArr[num];
        mapPhone.addContact(name, "05056550511"); 
    }
    endMapInsert = chrono::high_resolution_clock::now();
    chrono::duration<double> mapInsertTimeTenThousand = endMapInsert - startMapInsert;

    startUmapInsert = chrono::high_resolution_clock::now();
    for(int i=0; i<9000; i++)
    {
        int num = rand() % 10;
        string name = nameArr[num];
        umapPhone.addContact(name, "05056550511");
    }
    endUmapInsert = chrono::high_resolution_clock::now();
    chrono::duration<double> umapInsertTimeTenThousand = endUmapInsert - startUmapInsert;

    cout << "-----For 10000 People-----" << endl;

    startVec = chrono::high_resolution_clock::now();
    cout << vecPhone.getPhoneNumber("Deniz") << endl;
    endVec = chrono::high_resolution_clock::now();
    chrono::duration<double> vecTimeTenThousand = endVec - startVec;
    cout << "Vector Insert time complexity: " << vecInsertTimeTenThousand.count() << " seconds" << endl; 
    cout << "Vector Search time complexity: " << vecTimeTenThousand.count() << " seconds" << endl;
    cout << "Vector memory complexity: " << sizeof(vecPhone) << endl;
    fout << vecTimeTenThousand.count() << ", ";

    startMap = chrono::high_resolution_clock::now();
    cout << mapPhone.getPhoneNumber("Deniz") << endl;
    endMap = chrono::high_resolution_clock::now();
    chrono::duration<double> mapTimeTenThousand = endMap - startMap;
    cout << "Map Insert time complexity: " << mapInsertTimeTenThousand.count() << " seconds" << endl;
    cout << "Map Search time complexity: " << mapTimeTenThousand.count() << " seconds" << endl;
    cout << "Map memory compexity: " << sizeof(mapPhone) << endl;
    fout << mapTimeTenThousand.count() << ", ";

    startUmap = chrono::high_resolution_clock::now();
    cout << umapPhone.getPhoneNumber("Deniz") << endl;
    endUmap = chrono::high_resolution_clock::now();
    chrono::duration<double> umapTimeTenThousand = endUmap - startUmap;
    cout << "Unordered Map Insert time complexity " << umapInsertTimeTenThousand.count() << " seconds" << endl;
    cout << "Unordered Map Search time complexity: " << umapTimeTenThousand.count() << " seconds" << endl;
    cout << "Unordered Map memory complexity: " << sizeof(umapPhone) << endl;
    fout << umapTimeTenThousand.count() << endl;

    //---------- FOR 100000 ----------//

    fout << "100000, ";
    startVecInsert = chrono::high_resolution_clock::now();
    for(int i=0; i<90000; i++)
    {
        int num = rand() % 10;
        string name = nameArr[num];
        vecPhone.addContact(name, "05056550511");
    }
    endVecInsert = chrono::high_resolution_clock::now();
    chrono::duration<double> vecInsertTimeHundredThousand = endVecInsert - startVecInsert;

    startMapInsert = chrono::high_resolution_clock::now();
    for(int i=0; i<90000; i++)
    {
        int num = rand() % 10;
        string name = nameArr[num];
        mapPhone.addContact(name, "05056550511"); 
    }
    endMapInsert = chrono::high_resolution_clock::now();
    chrono::duration<double> mapInsertTimeHundredThousand = endVecInsert - startVecInsert;

    startUmapInsert = chrono::high_resolution_clock::now();
    for(int i=0; i<90000; i++)
    {
        int num = rand() % 10;
        string name = nameArr[num];
        umapPhone.addContact(name, "05056550511");
    }
    endUmapInsert = chrono::high_resolution_clock::now();
    chrono::duration<double> umapInsertTimeHundredThousand = endUmapInsert - startUmapInsert;

    cout << "-----For 100000 People-----" << endl;

    startVec = chrono::high_resolution_clock::now();
    cout << vecPhone.getPhoneNumber("Deniz") << endl;
    endVec = chrono::high_resolution_clock::now();
    chrono::duration<double> vecTimeHundredThousand = endVec - startVec;
    cout << "Vector Insert time complexity: " << vecInsertTimeHundredThousand.count() << " seconds" << endl;
    cout << "Vector Search time complexity: " << vecTimeHundredThousand.count() << " seconds" << endl;
    cout << "Vector memory complexity: " << sizeof(vecPhone) << endl;
    fout << vecTimeHundredThousand.count() << ", ";

    startMap = chrono::high_resolution_clock::now();
    cout << mapPhone.getPhoneNumber("Deniz") << endl;
    endMap = chrono::high_resolution_clock::now();
    chrono::duration<double> mapTimeHundredThousand = endMap - startMap;
    cout << "Map Insert time complexity: " << mapInsertTimeHundredThousand.count() << " seconds" << endl;
    cout << "Map Search time complexity: " << mapTimeHundredThousand.count() << " seconds" << endl;
    cout << "Map memory compexity: " << sizeof(mapPhone) << endl;
    fout << mapTimeHundredThousand.count() << ", ";

    startUmap = chrono::high_resolution_clock::now();
    cout << umapPhone.getPhoneNumber("Deniz") << endl;
    endUmap = chrono::high_resolution_clock::now();
    chrono::duration<double> umapTimeHundredThousand = endUmap - startUmap;
    cout << "Unordered Map Insert time complexity: " << umapInsertTimeHundredThousand.count() << " seconds" << endl;
    cout << "Unordered Map Search time complexity: " << umapTimeHundredThousand.count() << " seconds" << endl;
    cout << "Unordered Map memory complexity: " << sizeof(umapPhone) << endl;
    fout << umapTimeHundredThousand.count() << endl;

    //---------- FOR 1000000 ----------//

    fout << "1000000, ";
    startVecInsert = chrono::high_resolution_clock::now();
    for(int i=0; i<900000; i++)
    {
        int num = rand() % 10;
        string name = nameArr[num];
        vecPhone.addContact(name, "05056550511");
    }
    endVecInsert = chrono::high_resolution_clock::now();
    chrono::duration<double> vecInsertTimeMillion = endVecInsert - startVecInsert;

    startMapInsert = chrono::high_resolution_clock::now();
    for(int i=0; i<900000; i++)
    {
        int num = rand() % 10;
        string name = nameArr[num];
        mapPhone.addContact(name, "05056550511"); 
    }
    endMapInsert = chrono::high_resolution_clock::now();
    chrono::duration<double> mapInsertTimeMillion = endMapInsert - startMapInsert;

    startUmapInsert = chrono::high_resolution_clock::now();
    for(int i=0; i<900000; i++)
    {
        int num = rand() % 10;
        string name = nameArr[num];
        umapPhone.addContact(name, "05056550511");
    }
    endUmapInsert = chrono::high_resolution_clock::now();
    chrono::duration<double> umapInsertTimeMillion = endUmapInsert - startUmapInsert;

    cout << "-----For 1000000 People-----" << endl;

    startVec = chrono::high_resolution_clock::now();
    cout << vecPhone.getPhoneNumber("Deniz") << endl;
    endVec = chrono::high_resolution_clock::now();
    chrono::duration<double> vecTimeMillion = endVec - startVec;
    cout << "Vector Insert time complexity: " << vecInsertTimeMillion.count() << " seconds" << endl;
    cout << "Vector Search time complexity: " << vecTimeMillion.count() << " seconds" << endl;
    cout << "Vector memory complexity: " << sizeof(vecPhone) << endl;
    fout << vecTimeMillion.count() << ", ";

    startMap = chrono::high_resolution_clock::now();
    cout << mapPhone.getPhoneNumber("Deniz") << endl;
    endMap = chrono::high_resolution_clock::now();
    chrono::duration<double> mapTimeMillion = endMap - startMap;
    cout << "Map Insert time complexity: " << mapInsertTimeMillion.count() << " seconds" << endl;
    cout << "Map Search time complexity: " << mapTimeMillion.count() << " seconds" << endl;
    cout << "Map memory compexity: " << sizeof(mapPhone) << endl;
    fout << mapTimeMillion.count() << ", ";

    startUmap = chrono::high_resolution_clock::now();
    cout << umapPhone.getPhoneNumber("Deniz") << endl;
    endUmap = chrono::high_resolution_clock::now();
    chrono::duration<double> umapTimeMillion = endUmap - startUmap;
    cout << "Unordered Map Insert time complexity: " << umapInsertTimeMillion.count() << " seconds" << endl;
    cout << "Unordered Map Search time complexity: " << umapTimeMillion.count() << " seconds" << endl;
    cout << "Unordered Map memory complexity: " << sizeof(umapPhone) << endl;
    fout << umapTimeMillion.count() << endl;

    //---------- FOR 100000000 ----------//

    fout << "10000000, ";
    startVecInsert = chrono::high_resolution_clock::now();
    for(int i=0; i<9000000; i++)
    {
        int num = rand() % 10;
        string name = nameArr[num];
        vecPhone.addContact(name, "05056550511");
    }
    endVecInsert = chrono::high_resolution_clock::now();
    chrono::duration<double> vecInsertTimeTenMillion = endVecInsert - startVecInsert;

    startMapInsert = chrono::high_resolution_clock::now();
    for(int i=0; i<9000000; i++)
    {
        int num = rand() % 10;
        string name = nameArr[num];
        mapPhone.addContact(name, "05056550511"); 
    }
    endMapInsert = chrono::high_resolution_clock::now();
    chrono::duration<double> mapInsertTimeTenMillion = endVecInsert - startVecInsert;

    startUmapInsert = chrono::high_resolution_clock::now();
    for(int i=0; i<9000000; i++)
    {
        int num = rand() % 10;
        string name = nameArr[num];
        umapPhone.addContact(name, "05056550511");
    }
    endUmapInsert = chrono::high_resolution_clock::now();
    chrono::duration<double> umapInsertTimeTenMillion = endUmapInsert - startUmapInsert;

    cout << "-----For 10000000 People-----" << endl;

    startVec = chrono::high_resolution_clock::now();
    cout << vecPhone.getPhoneNumber("Deniz") << endl;
    endVec = chrono::high_resolution_clock::now();
    chrono::duration<double> vecTimeTenMillion = endVec - startVec;
    cout << "Vector Insert time complexity: " << vecInsertTimeTenMillion.count() << " seconds" << endl;
    cout << "Vector Search time complexity: " << vecTimeTenMillion.count() << " seconds" << endl;
    cout << "Vector memory complexity: " << sizeof(vecPhone) << endl;
    fout << vecTimeTenMillion.count() << ", ";

    startMap = chrono::high_resolution_clock::now();
    cout << mapPhone.getPhoneNumber("Deniz") << endl;
    endMap = chrono::high_resolution_clock::now();
    chrono::duration<double> mapTimeTenMillion = endMap - startMap;
    cout << "Map Insert time complexity: " << mapInsertTimeTenMillion.count() << " seconds" << endl;
    cout << "Map Search time complexity: " << mapTimeTenMillion.count() << " seconds" << endl;
    cout << "Map memory compexity: " << sizeof(mapPhone) << endl;
    fout << mapTimeTenMillion.count() << ", ";

    startUmap = chrono::high_resolution_clock::now();
    cout << umapPhone.getPhoneNumber("Deniz") << endl;
    endUmap = chrono::high_resolution_clock::now();
    chrono::duration<double> umapTimeTenMillion = endUmap - startUmap;
    cout << "Unordered Map Insert time complexity: " << umapInsertTimeTenMillion.count() << " seconds" << endl;
    cout << "Unordered Map Search time complexity: " << umapTimeTenMillion.count() << " seconds" << endl;
    cout << "Unordered Map memory complexity: " << sizeof(umapPhone) << endl;
    fout << umapTimeTenMillion.count() << endl;

    return 0;
}