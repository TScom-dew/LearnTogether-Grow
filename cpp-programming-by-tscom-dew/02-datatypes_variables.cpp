#include<iostream>
#include<limits>
#include<cstring>
#include<string>
#include<typeinfo>
/* This program explain basic datatype*/
int main(){

    // 1.int
    std::cout << "Interger type number: " << std::endl;
    int number1 = 10;
    long int number2 = 11;
    long long int number3 = 12;

    std::cout << "number1= " << number1 << std::endl;
    std::cout << "number2 = " << number2 << std::endl;
    std::cout << "number3 = " << number3 << std::endl;
    std::cout << "sizeof(number1)= " << sizeof(number1) << std::endl;
    std::cout << "sizeof(number2) = " << sizeof(number2) << std::endl;
    std::cout << "sizeof(number3) = " << sizeof(number3) << std::endl;
    std::cout << "Range of int : " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "Range of long int : " << std::numeric_limits<long int>::min() << " to " << std::numeric_limits<long int>::max() << std::endl;
    std::cout << "Range of long long int : " << std::numeric_limits<long long int>::min() << " to " << std::numeric_limits<long long int>::max() << std::endl;


    // 2.float
    std::cout << "\nFloating point number: " << std::endl;
    float number4 = 10;
    float number5 = 10.11f;
    float number6 = 12.22; 

    std::cout << "number4 = " << number4 << std::endl;
    std::cout << "number5 = " << number5 << std::endl;
    std::cout << "number6=" << number6 << std::endl;

    std::cout << "sizeof(number4) = " << sizeof(number4) << std::endl;
    std::cout << "sizeof(number5) = " << sizeof(number5) << std::endl;
    std::cout << "sizeof(number6)=" << sizeof(number6) << std::endl;

    std::cout << "Range of float : " << std::numeric_limits<float>::min() << " to " << std::numeric_limits<float>::max() << std::endl;


    //3. char
    std::cout << "\nCharacter type: " << std::endl;
    char ch1 = 'a';
    // char ch2 = '\\n'; // it gives  warning: multi-character character constant
    // but it ch2 print : n 
    std::cout << "ch1 = " << ch1 << std::endl;
    // std::cout << "ch2 = " << ch2 << std::endl;
    std::cout << "sizeof(ch1) = " << sizeof(ch1) << std::endl;
    // std::cout << "sizeof(ch2) = " << sizeof(ch2) << std::endl;



    // 4.double 
    std::cout << "\nDouble type number: " << std::endl;
    double number7 = 10;
    double number8 = 10.12;
    long double number9 = 12.32;

    std::cout << "number7= " << number7 << std::endl;
    std::cout << "number8 = " << number8 << std::endl;
    std::cout << "number9 = " << number9 << std::endl;
    std::cout << "sizeof(number7)= " << sizeof(number7) << std::endl;
    std::cout << "sizeof(number8) = " << sizeof(number8) << std::endl;
    std::cout << "sizeof(number9) = " << sizeof(number9) << std::endl;
    std::cout << "Range of double : " << std::numeric_limits<double>::min() << " to " << std::numeric_limits<double>::max() << std::endl;
    std::cout << "Range of long double : " << std::numeric_limits<long double>::min() << " to " << std::numeric_limits<long double>::max() << std::endl;

    //5. boolean
    std::cout << "\nBoolean type: " << std::endl;
    bool trueValue = true;
    bool falseValue = false;

    std::cout << "trueValue : " << trueValue << std::endl;
    std::cout << "falseValue : " << falseValue << std::endl;

    std::cout << "sizeof(trueValue) : " << sizeof(trueValue) << std::endl;
    std::cout << "sizeof(falseValue) : " << sizeof(falseValue) << std::endl;

    std::cout << "Range of boolean type: " << std::numeric_limits<bool>::min() << " to " << std::numeric_limits<bool>::max() << std::endl;

    // std::boolalpha
    std::cout << "\nAfter using std::boolalpha:\n";
    std::cout << std::boolalpha;
    
    std::cout << "trueValue : " << trueValue << std::endl;
    std::cout << "falseValue : " << falseValue << std::endl;

    // std::noboolalpha
    std::cout << "\nAfter using std::noboolalpha:\n";
    std::cout << std::noboolalpha;
    
    std::cout << "trueValue : " << trueValue << std::endl;
    std::cout << "falseValue : " << falseValue << std::endl;


    // 6. c-style string
    std::cout << "\nc-style string: \n";
    char str1[] = "Programming";// it is like static array
    
    std::cout << "str1 = " << str1 << std::endl;
    std::cout << "sizeof(str1) = " << sizeof(str1) << std::endl;
    // size= no. of character + 1 ; 1 for null string terminator "\0";

    // str1 = "University";  // it is not possible

    char *str2 = "Algorithm";

    std::cout << "Original str2 = " << str2 << std::endl;

    // str2 =static_cast<char*>("University"); it work but, it gives  warning: ISO C++ forbids converting a string constant to 'char*'
    str2 =(char*)"University";// it also gives warning
    std::cout << "Modified str2 = " << str2 << std::endl;

    char str3[50];
    strcpy(str3, str1);
    std::cout << "strcpy = " << str3 << std::endl;
    int p = strcmp(str1, str3);
    if(p==0){
        std::cout << "str1 and str3 are same." << std::endl;
    }else{
        std::cout << "str1 and str2 are not same." << std::endl;
    }
    std::cout << "length of str1 = " << strlen(str1) << std::endl;
    std::cout << "lenght of st2 = " << strlen(str2) << std::endl;
    std::cout << "reverse of str1 : " << strrev(str1) << std::endl;
    strrev(str1); // to convert str1 in original form : Programming


    std::cout << "strchr(str1, 'a') = " << strchr(str1, 'a') << std::endl;
    std::cout << "strchr(str1, 'r') = " << strchr(str1, 'r') << std::endl;

    std::cout << "strstr(str1, finding_string) = " << strstr(str1, "mm") << std::endl;

    char str4[6]="c++ ";
    strcat(str4, str1);
    std::cout << "str4 : " << str4 << std::endl;

    int r = strcspn(str4, "+");
    std::cout << "r = " << r << std::endl;

    // strtok()
    #define second_delimeter NULL
    std::cout << "\n";
    char myStr[] = "Learn C++ Programming for save your life!";
    char *first_delimeter = " ";
    char * myPtr = strtok(myStr, first_delimeter);
    while(myPtr != second_delimeter ) {
        std::cout << myPtr << "\n";
        myPtr = strtok(second_delimeter , first_delimeter);
    }

    /*
    some important function :
    strcpy(), strcmp(), strlen(), strstr(), strrev(),
    strcat(),strcspn()
    */

    // std::string 
    std::cout<<"\nstd::string style: "<<std::endl;
    std::string word="myschool";

    std::cout<<"word : "<<word<<std::endl;
    std::cout << "sizeof(word)) = " << sizeof(word)  << std::endl;
    std::cout << "word.size() = " << word.size() << std::endl;

    // it can be easly reinitialise
    word = "myprogram in c++";
    std::cout<<"\nword : "<<word<<std::endl;
    std::cout << "sizeof(word)) = " << sizeof(word)  << std::endl;
    std::cout << "word.size() = " << word.size() << std::endl;

    //
    word = "I am student. Learning c++ and Database. I want connect c++ with database";
    std::cout<<"\nword : "<<word<<std::endl;
    std::cout << "sizeof(word)) = " << sizeof(word)  << std::endl;
    std::cout << "word.size() = " << word.size() << std::endl;

    //;
    std::cout << "\n\n";
    std::string s1 = "myschool";
    std::string s2 = "mycollege";
    std::string s3 = "Hello, ";
    std::cout << "s3.append(s2) = " << s3.append(s2) << std::endl; // here original s3 is changed
    std::cout << "s3[3] = " << s3.at(3) << std::endl;
    std::cout << "s3.back() = " << s3.back() << std::endl;
    std::cout << "s3.front() = " << s3.front() << std::endl;

    std::cout << "\nusing iterator : ";
    for (std::string::iterator ch = s1.begin(); ch != s1.end(); ch++){
        std::cout << *ch << " ";
    }

    std::cout << "\nusing reverse iterator : ";
    for (std::string::reverse_iterator ch = s1.rbegin(); ch != s1.rend(); ch++){
        std::cout << *ch << " ";
    }

    std::cout << "\nusing const iterator : ";
    for (std::string::const_iterator ch = s1.cbegin(); ch != s1.cend(); ch++){
        std::cout << *ch << " ";
    }

    std::cout << "\nusing const reverse iterator : ";
    for (std::string::const_reverse_iterator ch = s1.crbegin(); ch != s1.crend(); ch++){
        std::cout << *ch << " ";
    }

    //;
    std::cout << "\n\ns1.compare(s2) = " << s1.compare(s2) << std::endl;
    //;
    std::cout << "\n";
    char s4[20];
    int texcopy = s1.copy(s4, 5, 0);

    s4[texcopy] = '\0';
    std::cout << "s4 = " << s4 << std::endl;


    //;
    auto *ptr = s1.data();
    std::cout << "*ptr = " << *ptr << " , ptr = " << ptr << std::endl;
    /*some functions:
    append(),  at()	 , back(), begin()	,c_str() , clear(), compare(),
copy(), data(), empty(), end()	,erase(), find(), front(), insert()	,length()
, max_size() , operator[] , pop_back()	, push_back()	, replace()	, rfind()
, resize(), size() , substr()	,swap()
    */

    return 0;
}
