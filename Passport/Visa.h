#pragma once
#include "Passport.h"

class Visa
{
protected:

	string NameOfCountry;
	string VisaOfIssued;
	string VisaOfExpiry;
public:
	
	Visa() : Visa("Poland","20.12.2019","28.06.2024") {}

	Visa(string c, string dof, string doe)
	{
		SetCountry(c);
		SetDateofIssued(dof);
		SetDateOfExpiry(doe);
	}

	void SetCountry(string country)
	{
		NameOfCountry = country;
	}
	void SetDateofIssued(string date_of_issued)
	{
		VisaOfIssued = date_of_issued;
	}
	void SetDateOfExpiry(string date_of_expiry)
	{
		VisaOfExpiry = date_of_expiry;
	}

	string GetCountry() const
	{
		return NameOfCountry;
	}
	string GetDateOfIssued() const
	{
		return VisaOfIssued;
	}
	string DateOfExpiry() const
	{
		return VisaOfExpiry;
	}

	friend ostream& operator << (ostream & os, const Visa& doc)
	{
		os << "\nName of country - " << doc.NameOfCountry << "\n";
		os << "Date of issued - " << doc.VisaOfIssued << "\n";
		os << "Date of expiry - " << doc.VisaOfExpiry << "\n";
		return os;
	}

};


class ForeignPassport : public Passport
{
protected:

	vector<Visa> Document;

public:

	void AddVisa(Visa& g)
	{
		Document.push_back(g);
	}

	void Print()
	{
		Passport::ShowPassport();
		for (int i = 0; i < Document.size(); i++)
		{
			cout << Document[i];
		}

	}
};
