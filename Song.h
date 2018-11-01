//
// Created by Hubert ECE on 10/29/2018.
//



#ifndef UTPODRIGHT_SONG_H
#define UTPODRIGHT_SONG_H

#endif //UTPODRIGHT_SONG_H

#include <iostream>
#include <string>

using namespace std;

//Song class declaration
class Song {
private:
    string artist;
    string title;
    int size;
public:

    //Default constructor

    Song();
    //Constructor with name parameter(string)
    //The user of the class will pass in a string called name and set title to that name
    Song(string name);

    //Constructor with name and art parameter(both string)
    //The user of the class will pass in a string called name and set title to that name, as well as an string called art and set artist to that
    Song(string art, string name);

    //Constructor with name parameter (string) and art parameter (string) and mem paramter (int)
    //The user of the class will pass in a title and set title to that name
    Song(string art, string name, int mem);


    /* FUNCTION - string getTitle
     * attempts to return a title of the song
         o returns a string called title if successful


     precondition: s is a valid Song

     input parms -

     output parms -
    */
    string getTitle() const
    {
        return title;
    }

    /* FUNCTION - string getArtist
     * attempts to return a artist of the song
         o returns a string called artist if successful


     precondition: s is a valid Song

     input parms -

     output parms -
    */
    string getArtist() const
    {
        return artist;
    }

    /* FUNCTION - int getSize
     * attempts to return the size of the song
         o returns an int called size (size of song) if successful


     precondition: s is a valid Song

     input parms -

     output parms -
    */
    int getSize() const
    {
        return size;
    }

    /* FUNCTION - void setTitle
     * attempts to set a title of the song


     precondition: s is a valid Song

     input parms - a string called name

     output parms -
    */
    void setTitle(string const name)
    {
        title = name;
    }
    /* FUNCTION - void setArtist
        * attempts to set a artist of the song


        precondition: s is a valid Song

        input parms - a string called name2

        output parms -
       */
    void setArtist(string const name2)
    {
      artist = name2;
    }

    /* FUNCTION - void setSize
    * attempts to set the size of the song


    precondition: s is a valid Song

    input parms - an int called mem1

    output parms -
   */
    void setSize(int const mem1)
    {
        size = mem1;
    }

    /*operator - bool operator >(Song const &rhs)
     *overloads the > operation to be able to compare two songs to see which one is greater (comes first)
     */
    bool operator >(Song const &rhs);
    /*operator - bool operator ==(Song const &rhs)
   *overloads the == operation to be able to check if two songs are equal
   */
    bool operator ==(Song const &rhs);

    ~Song();
};

