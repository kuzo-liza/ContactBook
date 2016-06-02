#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <stdlib.h>

using namespace std;
/**
 * @brief Класс Контакт, включающий в себя имя, фамилию и телефон контакта
 */
class Contact
{

public:
    /**
     * @brief Присвоение имени контакта
     * @param Имя
     */
    void setName(string name);

    /**
     * @brief Присвоение фамилии контакта
     * @param Фамилия
     */
    void setSurname(string surname);

    /**
     * @brief Присвоение телефона контакта
     * @param Телефон
     */
    void setNumber(string number);

    /**
     * @brief Получение имени контакта
     * @return Имя
     */
    string getName();

    /**
     * @brief Получение фамилии контакта
     * @return Фамилия
     */
    string getSurname();

    /**
     * @brief Получение телефона контакта
     * @return Телефон
     */
    string getNumber();

    string name;
    string surname;
    string number;

    int group;

    Contact();
    Contact(const Contact &value);
    //const &operator =(const Contact &value);
};

#endif // CONTACT_H

