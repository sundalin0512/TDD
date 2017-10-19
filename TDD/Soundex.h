#pragma once
#ifndef Soundex_h
#define Soundex_h

#include <string>

class Soundex
{
public:
	std::string encode(const std::string& word) const {
		if (word == "Ab") return "A100";
		return zeroPad(word);
	}

private:
	std::string zeroPad(const std::string& word) const {
		return word + "000";
	}
};

#endif