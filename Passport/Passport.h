#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Passport
{
protected:
	
	string Name;
	string Surname;
	string Patronymic;
	string Gender;
	string DateOfBirth;
	string DateOfExpiry;
	string Nationality;
	string Record;
	string Document;

public:

	Passport();
	Passport(string Surname, string Name, string Patronymic, string Gender, string DateOfBirth, string DateOfExpiry, string Nationality, string Record, string Document);

	void SetSurname(string surname);
	void SetName(string name);	
	void SetPatronymic(string patronymic);
	void SetGender(string gender);
	void SetDateOfBirth(string date_of_birth);
	void SetDateOfExpiry(string DateOfExpiry);
	void SetNationality(string nationality);
	void SetRecord(string record);
	void SetDocument(string document);

	string GetSurname() const;
	string GetName() const;
	string GetPatronymic() const;
	string GetGender() const;
	string GetDateOfBirth() const;
	string GetDateOfExpiry() const;
	string GetNationality() const;
	string GetRecord() const;
	string GetDocument() const;

	void ShowPassport();
};

