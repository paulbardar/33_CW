#pragma once
#include <string>
using std::string;

class MobileException {
protected:
	string text;

public:
	MobileException(string text) {
		this->text = text;
	}
	virtual~MobileException() {};
	virtual string showMessage()const = 0;
};

class NameException :public MobileException {
protected:
	string name;
public:
	NameException(string text, string name) : MobileException(text), name(name) {

	}
	virtual string showMessage()const override {
		return "NameException: " + text + " = " + name;
	}
};

class SecondsException :public MobileException {
protected:
	int seconds;
public:
	SecondsException(string text, int seconds) : MobileException(text), seconds(seconds) {

	}
	virtual string showMessage()const override {
		return "SecondsException: " + text + " = " + std::to_string(seconds);
	}
};

class PriceException :public MobileException {
protected:
	float price;
public:
	PriceException(string text, float price) : MobileException(text), price(price) {

	}
	virtual string showMessage()const override {
		return "PriceException: " + text + " = " + std::to_string(price);
	}
};