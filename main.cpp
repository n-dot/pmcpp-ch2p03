#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
 Declarations Tasks
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 
 
 
 int
 char
 bool
 float
 double
 void
 
 
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end
    for each of those functions declared, write out how the function would look if called with correct arguments
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    
    int numberA = 1;
    int numberB = 2;
    int numberC = 3;
    char charA = 'a';
    char charB = 'b';
    char charC = 'c';
    bool boolA = 0;
    bool boolB = 1;
    bool boolC = 1;
    float floatA = 1.01f;
    float floatB = 2.02f;
    float floatC = 3.03f;
    double doubleA = 1.01;
    double doubleB = 2.02;
    double doubleC = 3.03;

    
    
    ignoreUnused(number,numberA,numberB,numberC); 
    ignoreUnused(charA,charB,charC);
    ignoreUnused(boolA,boolB,boolC);
    ignoreUnused(floatA,floatB,floatC);
    ignoreUnused(doubleA,doubleB,doubleC);
    //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int addTheseInts(int first, int second = 3)
{
  ignoreUnused(first,second);
  return {};
}
/*
 2)
 */
double multiplyByTwoOrN(double num, int twoOrN = 2)
{
  ignoreUnused(num,twoOrN);
  return {};
}

/*
 3)
 */
bool isThisNumberGood(double thenumber)
{
  ignoreUnused(thenumber);
  return {};
}
/*
 4)
 */
void throwTheseAway(double doubleTrash, int integerTrash,bool trashOrNotTrash, float floatingTrash=69.420f)
{
  ignoreUnused(doubleTrash,integerTrash,floatingTrash,trashOrNotTrash);
}
/*
 5)
 */

float quantifyGoodnessOfThese(int questionableNumber,bool likelyAGreatBoolean=1, float probablyTerribleThing=0.0f)
{
  ignoreUnused(probablyTerribleThing,questionableNumber,likelyAGreatBoolean);
  return {};
}
/*
 6)
 */
double doubleOrMultiplyTheDouble(double theDouble,int doublingFactor=2)
{
  ignoreUnused(theDouble,doublingFactor);
  return {};
}
/*
 7)
 */
void enterTheVoid(float meaninglessData, bool theTruth=0)
{
  ignoreUnused(theTruth,meaninglessData);
}
/*
 8)
 */
int howManyTimes(int thisMany=0, int thatMany=0)
{
  ignoreUnused(thisMany,thatMany);
  return {};
}
/*
 9)
 */
bool areTheseNumbersTrue(double lyingValues, int duplicitousNumbers,bool blatantLie)
{
  ignoreUnused(lyingValues,duplicitousNumbers,blatantLie);
  return {};
}

/*
 10)
 */
char returnACharacter(float nonsenseNumber = 69.420f, int senseNumber=3)
{
  ignoreUnused(nonsenseNumber,senseNumber);
  return {};
}


int main()
{
    //example of calling that function
    rentACar(6, 2); 
    
    //1)
    addTheseInts(69,420);

    //2)
    multiplyByTwoOrN(69.420);
    
    //3)
    isThisNumberGood(420.69);
    
    //4)
    throwTheseAway(69.420, 69, 0,0.420f);
    
    //5)
    quantifyGoodnessOfThese(69,{},69.420f);
    
    //6)
    doubleOrMultiplyTheDouble(0.69420,69);

    //7)
    enterTheVoid(69.420f, 1);

    //8)
    howManyTimes({},69420);

    //9)
    areTheseNumbersTrue(0.69420, 69, 0);

    //10)
    returnACharacter();
    
    std::cout << "good to go!" << std::endl;
    return 0;    
}
