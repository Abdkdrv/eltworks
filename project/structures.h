#ifndef STRUCTURES_H
#define STRUCTURES_H

typedef struct Person
{
    char first_name[100];
    char last_name[100];
    char surname[100];
}Person;

typedef struct Job
{
    char work_place[100];
    char job_title[100];
}Job;

typedef struct PhoneNumbers
{
    char phone_number1[20];
    char phone_number2[20];
    char phone_number3[20];
    char phone_number4[20];
    char phone_number5[20];
}PhoneNumbers;

typedef struct Emails
{
    char email1[20];
    char email2[20];
    char email3[20];
    char email4[20];
    char email5[20];
}Emails;

typedef struct Links
{
    char link1[100];
    char link2[100];
    char link3[100];

}Links;

typedef struct Contact{
    Person person;
    Job job;
    PhoneNumbers phoneNumbers;
    Emails emails;
    Links links;
}Contact;

#endif /* STRUCTURES_H */