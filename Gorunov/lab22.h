#pragma once
#include<string>
#include <msclr/marshal_cppstd.h>

	int kol(std::string instring){
    int count = 0;
    std::string vowels = "aeiouAEIOUАЯУЮОЁЕЭИЫаяуюоёеэиы";  // Строка со всеми гласными буквами
    for (char& ch : instring) {
        if (vowels.find(ch) != std::string::npos) {
            count++;
        }
    }
    double kol=0;
    kol = instring.length();
    kol = count / kol;
    kol = kol * 100;
    return kol;
}