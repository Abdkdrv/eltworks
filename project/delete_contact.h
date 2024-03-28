

void delete_contact(Contact people[], int *contact_count, int index)
{
    if (index < 0 || index >= *contact_count)
    {
        printf("Некорректный номер контакта.\n");
        return;
    }

    for (int i = index; i < *contact_count - 1; i++)
    {
        people[i] = people[i + 1];
    }

    (*contact_count)--;
    printf("Контакт успешно удалён!\n");
}