//Build a structure called InstaProfile with fields: username (string), followers (integer), and a nested structure Bio with fields: description (string) and age (integer). Initialize an InstaProfile variable with your own details and display all fields.

#include <stdio.h>

struct Bio{
    char description[50];
    int age;
};

struct InstaProfile{
    char username[20];
    int followers;
    struct Bio bio;
};

void main(){
    struct InstaProfile profile1 = {"jay_meghani_2608", 882, {"Coding | Music | Travelling", 20}};

    printf("Username: %s\n", profile1.username);
    printf("Followers: %d\n", profile1.followers);
    printf("Description: %s\n", profile1.bio.description);
    printf("Age: %d\n", profile1.bio.age);
}