//
// Created by abodi on 08/04/2020.
//
#include "FamilyTree.hpp"
int main()
{
    family::Tree shjra("Abodi");
    /* TEST 1: DONE !!!*/
    shjra.addFather("Abodi","Esmat");
    shjra.addMother("Abodi","Salwa");
    shjra.addFather("Esmat","Abedelkareem");
    shjra.addMother("Esmat","Fatmah");
    shjra.addFather("Salwa","Yousef");
    shjra.addMother("Salwa","Samiyeh");
    shjra.addFather("Abedelkareem","Ali");
    shjra.addMother("Ali","UNKNOWN"); /*considered to be great-great-grandmother;*/
    cout<<"name of my mom :"<<shjra.Get_root()->get_mother()->get_name();
    cout<<"\nname of my dad :"<<shjra.Get_root()->get_father()->get_name()<<endl;
    cout<<"relation(abodi);"<<shjra.relation("Abodi")<<endl;
    cout<<"relation(Salwa);"<<shjra.relation("Salwa")<<endl;
    cout<<"relation(Esmat);"<<shjra.relation("Esmat")<<endl;
    cout<<"relation(Samiyeh);"<<shjra.relation("Samiyeh")<<endl;
    cout<<"relation(Fatmah);"<<shjra.relation("Fatmah")<<endl;
    cout<<"relation(Abedelkareem);"<<shjra.relation("Abedelkareem")<<endl;
    cout<<"relation(Yousef);"<<shjra.relation("Yousef")<<endl;
    cout<<"relation(Ali);"<<shjra.relation("Ali")<<endl;/*should output great-grandfather*/
    cout<<"relation(UNKNOWN);"<<shjra.relation("UNKNOWN")<<endl;/*should output great-great-grandmother*/
    /*END OF TEST 1 !*/
    /*TEST 2*/
    cout<<"great-great-grandmother: "<<shjra.find("great-great-grandmother")<<endl;
    cout<<"great-grandfather: "<<shjra.find("great-grandfather")<<endl;
    cout<<"grandfather: "<<shjra.find("grandfather")<<endl;/*should output either Yousef or Abedelkareem*/
    cout<<"grandmother: "<<shjra.find("grandmother")<<endl;
    cout<<"mother: "<<shjra.find("mother")<<endl;
    cout<<"father: "<<shjra.find("father")<<endl;
    cout<<"me: "<<shjra.find("me")<<endl;
    /*TEST 2: DONE !!*/
    /*Display TEST */
    cout<<"//////////////////////////////////////////////////////////////////////";
    cout<<endl<<"Display test"<<endl;
    shjra.display();
    cout<<endl;
    /* DONE */
    /*TEST 3: REMOVE*/
    shjra.remove("Esmat");

/* DONE ! */

    return 0;
}