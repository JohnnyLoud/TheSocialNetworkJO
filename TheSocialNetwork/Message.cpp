#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include "Message.hpp"

using namespace std;


    message::message(user& A,user& B)
    {
        cout << "Write a message." << endl;
        cin >> text ;
        
        time_t date;
        date = time(NULL);
        char *tm = ctime(&date);
        
        sender = &A;
        receiver = &B;
        
        likes = 0;
    }


 string message::toString()
    {
        
        //Πρέπει να φτιάξεις το πως θα εκτυπώνεται η μεταβλητή tm
        //Και πως θα βγάζει τα like (φρόντισε ο καθένας να μπορεί να κάνει like μόνο μια φορά
        return sender , "\n", text, "\n","Like number: ",likes,"\n";
		
    }
    


