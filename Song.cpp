//
// Created by Hubert ECE on 10/29/2018.
//
#include <iostream>
#include <string>
#include "Song.h"

using namespace std;

Song::Song(){
    title = "";
    artist = "";
    size = 0;
}

Song::Song(string const name){
    title = name;
}

Song::Song(string const art, string const name){
    artist = art;
    title = name;
}

Song::Song(string const art, string const name, int const mem){
    title = name;
    artist = art;
    size = mem;
}


bool Song::operator >(Song const &rhs)
{
    return (title > rhs.title || artist > rhs.artist);
}

bool Song::operator ==(Song const &rhs)
{
    return (title == rhs.title && artist == rhs.artist && size == rhs.size);
}

Song::~Song()
{
    //cout<< "You're in the deconstructor" << endl;
}