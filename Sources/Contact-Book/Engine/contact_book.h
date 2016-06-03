#ifndef CONTACT_BOOK_H
#define CONTACT_BOOK_H

#include "contact.h"

/**
 * @brief Класс Книга контактов, представляющий собой книгу контактов в целом
 */
class ContactBook
{

public:

    int sizeOfBook;

    ContactBook();

    /**
     * @brief Вектор из контактов
     */
    vector <Contact> contactBook;

    /**
     * @brief Проверка количества контактов
     * @return Количество контактов в книге
     */
    int checkSizeOfFile();

    /**
     * @brief Удаление контакта
     * @param Номер удаляемого контакта
     */
    void deleteContact(int num);

    /**
     * @brief Поиск контакта по имени
     * @param Имя
     * @return Найденный контакт
     */
    Contact searchByName(string name);

    /**
     * @brief Поиск контакта по фамилии
     * @param Фамилия
     * @return Найденный контакт
     */
    Contact searchBySurname(string surname);

    /**
     * @brief Создание контакта
     * @param Имя
     * @param Фамилия
     * @param Телефон
     */
    void createContact(string name, string surname, string number);

    /**
     * @brief Заполнение книги
     */
    void fillInTheBook();

    /**
     * @brief Сортировка контактов
     */
    void sortContacts();

    bool compareByName(const Contact& contact1, const Contact& contact2);

    /**
     * @brief Сортировка по имени
     */
    void sortByName();

    /**
     * @brief Проверка количества контактов в книге
     * @return Размер книги
     */
    int checkNumberOfContacts();

    /**
     * @brief Сохранение книги
     */
    void saveBook();
};

#endif // CONTACT_BOOK_H
