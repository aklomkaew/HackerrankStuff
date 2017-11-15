// Challenge 4
// Link to the problem: https://www.hackerrank.com/challenges/30-class-vs-instance/problem

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
        if(initialAge < 0)
        {
            cout << "Age is not valid, setting age to 0." << endl;
            age = 0;
        }
        else
            age = initialAge;
    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console 
        string ans = "";
        if(age < 13)
            ans = "You are young.";
        else if((age >= 13) && (age < 18))
            ans = "You are a teenager.";
        else
            ans = "You are old.";
        
        cout << ans << endl;
    }

    void Person::yearPasses(){
        // Increment the age of the person in here
        age++;
    }