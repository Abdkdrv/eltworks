

void print_contact(Contact contact)
{
    printf("Имя: %s\n", contact.person.first_name);
    printf("Фамилия: %s\n", contact.person.last_name);
    printf("Отчество: %s\n", contact.person.surname);
    printf("Место работы: %s\n", contact.job.work_place);
    printf("Должность: %s\n", contact.job.job_title);
    printf("Первый номер телефона: %s\n", contact.phoneNumbers.phone_number1);
    printf("Второй номер телефона: %s\n", contact.phoneNumbers.phone_number2);
    printf("Третий номер телефона: %s\n", contact.phoneNumbers.phone_number3);
    printf("link1: %s\n", contact.links.link1);
    printf("link2: %s\n", contact.links.link2);
    printf("link3: %s\n", contact.links.link3);


}

void print_contacts(Contact people[], int contact_count)
{
    printf("Список контактов:\n");
    for (int i = 0; i < contact_count; i++)
    {
        printf("Контакт #%d:\n", i + 1);
        print_contact(people[i]);
        printf("\n");
    }
}