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
 float
 bool
 double
 char
 unsigned int
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

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

//2) Declare Primatives
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    
    //int
    int realNumber = 1;
    int wholeNumber = -3;
    int msDosNumber = 9;

    //float
    float divisibleNumber = 1.5f;
    float pitchOffset = -0.01f;
    float faderLevel = 1243.423f;

    //double
    double trackVol = 0.4536243652413f;
    double timeOffset = 0.00000003453f;
    double balance = -324564.23456f;

    //char
    char middleInitial = 'F';
    char foodSafetyRating = 'A';
    char note = 'D';

    //bool
    bool bufferReady = false;
    bool bypass = false;
    bool thresholdPassed = true;

    unsigned int channels = 2;
    unsigned int trackCount = 1;
    unsigned int versionNumber = 4;

    
    ignoreUnused(number, realNumber, wholeNumber, msDosNumber, divisibleNumber, pitchOffset, faderLevel, trackVol, timeOffset, balance, middleInitial, foodSafetyRating, note, bufferReady, bypass, thresholdPassed, channels, trackCount, versionNumber); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
double compress(double input, int ratio = 1, float threshold = 1.0f){ ignoreUnused(input, ratio, threshold); }
/*
 2)
 */
int countCards(int cardsDrawn, int cardsInDeck = 52){ ignoreUnused(cardsDrawn, cardsInDeck); }
/*
 3)
 */
bool areWeThereYet(int distanceToDestination, int minutesDriven = 0, int avgSpeed = 60){ ignoreUnused(distanceToDestination, avgSpeed, minutesDriven); }
/*
 4)
 */
float getProgress(int totalTasks, int tasksCompleted = 0){ ignoreUnused(totalTasks, tasksCompleted); }
/*
 5)
 */
unsigned int countThingsInStuff(bool stuffReady, unsigned int mainThings = 1, unsigned int extraThings = 0, unsigned int missingThings = 0){ ignoreUnused(stuffReady, mainThings, extraThings, missingThings); }
/*
 6)
 */
char rateRestaurant(unsigned int infractions, unsigned int incidents, char smellRating, char cleanlinessRating){ ignoreUnused(infractions, incidents, smellRating, cleanlinessRating); }
/*
 7)
 */
void phaseShift(bool flip, float phaseOffset, double inputOne = 0.0f, double inputTwo = 0.0f){ ignoreUnused(flip, phaseOffset, inputOne, inputTwo); }
/*
 8)
 */
void exportNote(bool includeHeader = false, unsigned int noteIndex = 1);
/*
 9)
 */
bool passQC(float phase, unsigned int clips, float rms = 0.5f, float peak = 0.8f, float lufs = -14.0f){ ignoreUnused(phase, clips, rms, peak, lufs); }
/*
 10)
 */
float getPhase(double leftInput = 0.0f, double rightInput = 0.0f){ ignoreUnused(leftInput, rightInput); }
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
    auto compressedAudio = compress(0.2345f, 4, 0.7f);
    //2)
    auto remainingCards = countCards(14);
    //3)
    auto atDestination = areWeThereYet(231, 143);
    //4)
    auto progress = getProgress(42, 4);
    //5)
    auto numberThingsInStuff = countThingsInStuff(true, 242, 0, 4);
    //6)
    auto restaurantRating = rateRestaurant(0, 1, 'B', 'C');
    //7)
    phaseShift(false, 34.4f, 0.2345353234f, 0.2354234524f);
    //8)
    exportNote(false, 35);
    //9)
    auto qc = passQC(0.0f, 0, 0.6f, 0.9f, -11.0f);
    //10)
    auto phase = getPhase(0.1423f, -0.2354f);
    
    ignoreUnused(carRented, compressedAudio, remainingCards, atDestination, progress, numberThingsInStuff, restaurantRating, qc, phase);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
