//
// Created by jakub on 18.11.2024.
//

#ifndef DZIEM_JAKUB_5_3_LAB2_ZAD3_KSIAZKA_H
#define DZIEM_JAKUB_5_3_LAB2_ZAD3_KSIAZKA_H
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <boost/multi_index_container.hpp>
#include <boost/multi_index/hashed_index.hpp>
#include <boost/multi_index/ordered_index.hpp>
#include <boost/multi_index/member.hpp>
#include <iostream>
#include "Contact.h"
#include "Person.h"
using namespace boost::multi_index;
using namespace std;
typedef multi_index_container
        <Contact,
                indexed_by<
                        hashed_non_unique<member<Contact, string, &Contact::imie>>,
                        hashed_non_unique<member<Contact, string, &Contact::nazwisko>>,
                        hashed_non_unique<member<Contact, int, &Contact::wiek>>,
                        ordered_unique<member<Contact, string, &Contact::numerTelefonu>>,
                        hashed_non_unique<member<Contact, string, &Contact::ulica>>>> contact_multi;

class Ksiazka {
public:
    contact_multi ksiazkaTele;
};

#endif //DZIEM_JAKUB_5_3_LAB2_ZAD3_KSIAZKA_H
