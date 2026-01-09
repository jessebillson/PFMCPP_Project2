#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 int
 bool
 float
 long int
 double
 char
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    int red = 1; 
    int blue = 2;
    int green = 3;
    bool yes = true;
    bool no = false;
    bool maybe = false;
    float water = 62.424f;
    float pi = 3.14159f;
    float speed = 26.2f;
    long int distance = 1000000000;
    long int big = 2147483648;
    long int small = 1073741824;
    double indoorTemp = 71.5;
    double outdoorTemp = 63.5;
    double outdoorHumidity = 77.0;
    char h = 98;
    char c = 40;
    char f = 35;
    
    ignoreUnused (red, blue, green, yes, no, maybe, water, pi, speed, distance, big, small, indoorTemp, outdoorTemp, outdoorHumidity, h, c,                     f); //passing each variable declared to the ignoreUnused() function
}
    /*
     10 functions
     example:
     note: this example shows the result after completing steps 3-8
     */
    
// 1
int dailyTransactions(int wednesday, int thursday, int friday, int totalDailyTransactions)
{
    ignoreUnused(wednesday, thursday, friday, totalDailyTransactions); 
    return {};
}
// 2
int weeklyTransactions(int week1 = 141, int week2 = 170, int week3 = 111, int week4 = 87, int totalWeeklyTransactions = 0)
{ 
    ignoreUnused(week1, week2, week3, week4, totalWeeklyTransactions);
    return{};
}    
// 3
int quarterlyEarnings(int q1 = 3900, int q2 = 1800, int q3 = 1970, int q4 = 2900, int totalQuarterlyEarnings = 0)
{
    ignoreUnused(q1, q2, q3, q4, totalQuarterlyEarnings); 
    return {};
}   
// 4
bool hoursOfOperation(int storeOpenTime, int storeCloseTime, bool storeIsOpen)
{
    ignoreUnused(storeOpenTime, storeCloseTime, storeIsOpen); 
    return {};
}
// 5
bool hasAFever(float bodyTemp, bool hasAFever)
{
    ignoreUnused(bodyTemp, hasAFever); 
    return {};
}  
// 6
float priceOfGoldDaily(float goldPrice, float dailyFluctuationInPercentage, int priceOfGoldToday)
{
    ignoreUnused(goldPrice, dailyFluctuationInPercentage, priceOfGoldToday); 
    return {};
} 
// 7
int mailReceivedToday(int packagesReceived, int lettersReceived, int totalMailReceived)  
{
    ignoreUnused(packagesReceived, lettersReceived, totalMailReceived); 
    return{};
} 
// 8
int yourAge(int age)
{
    ignoreUnused(age);
    return {};
}
// 9
double differenceInTemperature(double indoorTemp, double outdoorTemp)
{
    ignoreUnused(indoorTemp, outdoorTemp);
    return {};
} 
// 10
int numStairsClimbedToTopFloor(int frontDoorStairs, int stairsToSecondFloor,int stairsToGarageFromFirstFloor, bool garageEntry, bool frontDoorEntry)
{
    ignoreUnused(frontDoorStairs, stairsToSecondFloor, stairsToGarageFromFirstFloor, garageEntry, frontDoorEntry); 
    return {};
}
    
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    //1)
    auto numSalesForTheDay = dailyTransactions(20, 19, 37, 0);
    //2)
    auto numSalesForTheWeek = weeklyTransactions(141, 170, 111, 87, 0); 
    //3)
    auto earnings = quarterlyEarnings(3900, 1800, 1970, 2900, 0);
    //4)
    bool storeOpen = hoursOfOperation(900, 1700, false);
    //5)
    auto feverCheck = hasAFever(101.5f, false);
    //6)
    auto todaysGoldPrice = priceOfGoldDaily(4484.9f, 0.5f, 0);
    //7)
    auto dailyMail = mailReceivedToday(3, 5, 0);  
    //8)
    auto userNum = yourAge(43);
    //9)
    auto differenceBetweenIndoorAndOutdoorTemp = differenceInTemperature(71.5, 63.5);
    //10)
    auto numStairsClimbed = numStairsClimbedToTopFloor(2, 7, 5, false, true);
    
    ignoreUnused(carRented, numSalesForTheDay, numSalesForTheWeek, earnings, storeOpen, feverCheck, todaysGoldPrice, dailyMail,                                userNum,differenceBetweenIndoorAndOutdoorTemp, numStairsClimbed);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
