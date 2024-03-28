#include <stdio.h>
#include "add_contact.h"
#include "delete_contact.h"
#include "edit_contact.h"
#include "print_contact.h"



int main(void)
{
    Contact people[1000];
    int contact_count = 0;

    for(;;)
    {
        printf("Пожалуйста, выберите пункт меню:\n");
        printf("1. Добавить контакт\n");
        printf("2. Редактировать контакт\n");
        printf("3. Удаление контакта\n");
        printf("4. Показать контакт\n");
        printf("5. Показать все контакты\n");
        int choice;
    
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:{
            printf("Пожалуйста, введите данные контакта:\n");
            if (contact_count < 1000)
            {
                add_contact(&people[contact_count]);
                contact_count++;
            }
            else
            {
                printf("Невозможно добавить больше контактов, достигнут лимит.\n");
            }
            break;}
        case 2:
            printf("Введите номер контакта для редактирования (от 1 до %d): ", contact_count);
            int edit_index;
            scanf("%d", &edit_index);
            if (edit_index >= 1 && edit_index <= contact_count)
            {
                edit_contact(&people[edit_index - 1]);
            }
            else
            {
                printf("Некорректный номер контакта.\n");
            }
            break;
        case 3:
            
            printf("Введите номер контакта для удаления (от 1 до %d): ", contact_count);
            int delete_index;
            scanf("%d", &delete_index);
            delete_contact(people, &contact_count, delete_index - 1);
            break;
            break;
        case 4:
            // Показать контакт
            printf("Введите номер контакта для отображения (от 1 до %d): ", contact_count);
            int show_index;
            scanf("%d", &show_index);
            if (show_index >= 1 && show_index <= contact_count)
            {
                print_contact(people[show_index - 1]);
            }
            else
            {
                printf("Некорректный номер контакта.\n");
            }
            break;
        case 5:
            // Показать список контактов
            print_contacts(people, contact_count);
            break;
        default:
            printf("Ошибка! Неверный выбор.\n");
            break;
        
        }
    }
    
    return 0;
}