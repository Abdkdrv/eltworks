#ifndef ADD_CONTACT_H
#define ADD_CONTACT_H

#include "structures.h"

void add_contact(Contact *contact)
{
    printf("Введите имя: ");
    scanf("%s", contact->person.first_name);

    printf("Введите фамилию: ");
    scanf("%s", contact->person.last_name);

    printf("Введите отчество: ");
    scanf("%s", contact->person.surname);

    printf("Введите место работы: ");
    scanf("%s", contact->job.work_place);

    printf("Введите должность: ");
    scanf("%s", contact->job.job_title);

   printf("Введите новый первый номер телефона: ");
    scanf("%s", contact->phoneNumbers.phone_number1);

    printf("Введите новый второй номер телефона: ");
    scanf("%s", contact->phoneNumbers.phone_number2);

    printf("Введите новый третий номер телефона: ");
    scanf("%s", contact->phoneNumbers.phone_number3);

    printf("Введите ссылку link1: ");
    scanf("%s", contact->links.link1);

    printf("Введите ссылку link2: ");
    scanf("%s", contact->links.link2);

    printf("Введите ссылку link3: ");
    scanf("%s", contact->links.link3);

    printf("Контакт успешно добавлен!\n");
}

#endif /* ADD_CONTACT_H */