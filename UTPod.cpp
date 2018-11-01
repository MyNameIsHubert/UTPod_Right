//
// Created by Hubert ECE on 10/29/2018.
//
#include <iostream>
#include "UTPod.h"
#include "stdlib.h"
#include <time.h>

using namespace std;

//Default constructor
//set the memory size to MAX_MEMORY
UtPod::UtPod()
{
    songs= NULL;
    memSize = MAX_MEMORY;
}

//Constructor with size parameter
//The user of the class will pass in a size.
//If the size is greater than MAX_MEMORY or less than or equal to 0,
//set the size to MAX_MEMORY.
UtPod::UtPod(int size)
{
    songs= NULL;
    if(size > MAX_MEMORY || size <= 0)
        memSize = MAX_MEMORY;
    else
        memSize = size;
}

/* FUNCTION - int addSong
 * attempts to add a new song to the UtPod
     o returns a 0 if successful
     o returns -1 if not enough memory to add the song

 precondition: s is a valid Song

 input parms -

 output parms -
*/

int UtPod::addSong(Song const &s)
{

        if(s.getSize() >= this->getRemainingMemory())
            return NO_MEMORY;
        else
        {
            SongNode *temp = new SongNode;
            temp->s = s;
            temp->next = songs;
            songs = temp;
        }
        return SUCCESS;
}


/* FUNCTION - int removeSong
 * attempts to remove a song from the UtPod
 * removes the first instance of a song that is in the the UtPod multiple times
     o returns 0 if successful
     o returns -1 if nothing is removed


   input parms -

   output parms -
*/

int UtPod::removeSong(Song const &s)
{
    SongNode *temp = songs;
    SongNode *previous = songs;
    while(temp != NULL){
        if(temp->s == s && temp == songs){
            delete(previous);
            songs = temp->next;
            return SUCCESS;
        }
        else if(temp->s == s && temp != songs)
        {
            delete(temp);
            previous->next = previous->next->next;
            return SUCCESS;
        }
            previous = temp;
            temp = temp->next;
    }

    return NO_MEMORY;

}


/* FUNCTION - void shuffle
 *  shuffles the songs into random order
    o will do nothing if there are less than two songs in the current list

   input parms -

   output parms -
*/

void UtPod::shuffle()
{
    srand(time(NULL));
    int x =0;
    int count = 0;
    SongNode *temphead = songs;
    SongNode *temp2 = songs;
    SongNode holder;
    while(temphead != NULL){
        temphead = temphead->next;
        count++;
    }
    temphead = songs;

    for(int i=0; i<(count*2); i++)
    {
        x = rand()%count;

        temp2 = songs;
        for(int j = 0; j<x;j++)
        {
            temp2 = temp2->next;
        }
        holder.s= temphead->s;

        temphead->s = temp2->s;

        temp2->s = holder.s;

    }
}


/* FUNCTION - void showSongList
 * prints the current list of songs in order from first to last to standard output
 * format - Title, Artist, size in MB (one song per line)

   input parms -

   output parms -
*/

void UtPod::showSongList()
{
    SongNode *temp = songs;

    while(temp != NULL){
        cout << temp->s.getTitle()<< ", "<< temp->s.getArtist() << ", " << temp->s.getSize() << "MB" << endl;
        temp = temp->next;
    }
}


/* FUNCTION - void sortSongList
 *  sorts the songs in ascending order
    o will do nothing if there are less than two songs in the current list

   input parms -

   output parms -
*/

void UtPod::sortSongList()
{
    SongNode *temp = songs;
    SongNode swapholder;
    SongNode *p1;
    SongNode *p2;

    while(temp != NULL){
        p1 = temp;
        p2 = temp->next;

        while(p2 != NULL) {
            if (p1->s.getArtist() > p2->s.getArtist()) //overload this later
            {
                swapholder.s = p1->s;
                p1->s = p2->s;
                p2->s = swapholder.s;
            } else if (p1->s.getArtist() == p2->s.getArtist() && p1->s.getTitle() > p2->s.getTitle()) {
                swapholder.s = p1->s;
                p1->s = p2->s;
                p2->s = swapholder.s;
            } else if (p1->s.getArtist() == p2->s.getArtist() && p1->s.getTitle() == p2->s.getTitle() &&
                       p1->s.getSize() < p2->s.getSize()) {
                swapholder.s = p1->s;
                p1->s= p2->s;
                p2->s = swapholder.s;
            }
            p2 = p2->next;
        }
       temp = temp->next;
    }

}

/* FUNCTION - void clearMemory
 * clears all the songs from memory

   input parms -

   output parms -
*/
void UtPod::clearMemory()
{
    SongNode *temp = songs;
    SongNode *holder = temp;
    while(temp != NULL){
        holder = temp->next;
        delete(temp);
        temp = holder;
    }
}


/* FUNCTION - int getTotalMemory
 *  returns the total amount of memory in the UtPod
    o will do nothing if there are less than two songs in the current list

   input parms -

   output parms -
*/


/* FUNCTION - int getRemainingMemory
 *  returns the amount of memory available for adding new songs

   input parms -

   output parms -
*/

int UtPod::getRemainingMemory()
{
    int sum =0;
    SongNode *temp = songs;
    while(temp != NULL){
        sum += temp->s.getSize();
        temp = temp->next;
    }

    return memSize - sum;
}


UtPod::~UtPod()
{
    SongNode *temp = songs;
    SongNode *holder = temp;
    while(temp != NULL){
        holder = temp->next;
        delete(temp);
        temp = holder;
    }

}
