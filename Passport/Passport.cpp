#include "Passport.h"

using namespace std;

Passport::Passport() : Passport("Nick", "Name", "Ivanovich", "M", "21.01.2000","23.02.2030", "UKR", "20122565 - 58224", "123456789") {}

Passport::Passport(string Surname, string Name, string Patronymic, string Gender, string DateOfBirth, string DateOfExpiry, string Nationality, string Record, string Document)
{
	SetSurname(Surname);
	SetName(Name);
	SetPatronymic(Patronymic);
	SetGender(Gender);
	SetDateOfBirth(DateOfBirth);
	SetDateOfExpiry(DateOfExpiry);
	SetNationality(Nationality);
	SetRecord(Record);
	SetDocument(Document);
}

void Passport::SetSurname(string surname)
{
	Surname = surname;
}
void Passport::SetName(string name)
{
	Name = name;
}
void Passport::SetPatronymic(string patronymic)
{
	Patronymic = patronymic;
}
void Passport::SetGender(string gender)
{
	Gender = gender;
}
void Passport::SetDateOfBirth(string date_of_birth)
{
	DateOfBirth = date_of_birth;
}
void Passport::SetDateOfExpiry(string date_of_expiry)
{
	DateOfExpiry = date_of_expiry;
}
void Passport::SetNationality(string nationality)
{
	Nationality = nationality;
}
void Passport::SetRecord(string record)
{
	Record = record;
}
void Passport::SetDocument(string document)
{
	Document = document;
}

string Passport::GetSurname() const
{
	return Surname;
}
string Passport::GetName() const
{
	return Name;
}
string Passport::GetPatronymic() const
{
	return Patronymic;
}
string Passport::GetGender() const
{
	return Gender;
}
string Passport::GetDateOfBirth() const
{
	return DateOfBirth;
}
string Passport::GetDateOfExpiry() const
{
	return DateOfExpiry;
}
string Passport::GetNationality() const
{
	return Nationality;
}
string Passport::GetRecord() const
{
	return Record;
}
string Passport::GetDocument() const
{
	return Document;
}

void Passport::ShowPassport()
{
	cout << "Surname - " << Surname << "\n";
	cout << "Name - " << Name << "\n";
	cout << "Patronymic - " << Patronymic << "\n";
	cout << "Gender - " << Gender << "\t" << "Nationality - " << Nationality << "\n";
	cout << "Date of Birth - " << DateOfBirth << "\t" << "Record No - " << Record << "\n";
	cout << "Date of Expiry - " << DateOfExpiry << "\t" << "Document No - " << Document << "\n";
}
