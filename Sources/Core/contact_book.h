#ifndef CONTACT_BOOK_H
#define CONTACT_BOOK_H

#include "contact_book_global.h"

class CONTACT_BOOKSHARED_EXPORT Contact_book
{

public:
    Contact_book();
    /**
        * @brief считывание данных из файла
        */
       void scan();
       /**
        * @brief вывод данных в консоль или файл
        */
       void show();
       /**
        * @brief сохранение внесенных изменений
        */
       void save();
       /**
        * @brief сортировка контактов по группам
        */
       void sort();
       /**
        * @brief поиск контакта
        */
       void search();
       /**
        * @brief создание нового контакта
        */
       void createContact();
       /**
        * @brief удаление контакта
        */
       void deleteContact();

};

#endif // CONTACT_BOOK_H
