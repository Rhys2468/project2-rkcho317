#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <iterator>     // std::next, std::prev

using std::string;

class BrowserHistory {
public:
    BrowserHistory();

    void visitSite(string url, size_t filesize);
    void backButton();
    void forwardButton();

    void readFile(string fileName);

    string currentUrl();
    size_t currentPageSize();
    size_t getHistoryLength();

private:
  // TO BE COMPLETED
  BrowserHistory::BrowserHistory{
    //create website struct/object which stores url and filesize
    struct webSite = webSite(url, filesize);

    //Create a linked list of a history of websites

  }

  void BrowserHistory::visitSite(string url, size_t filesize){
  }

  void BrowserHistory::backButton(){
    //go back one page
    //if previous page=0, return error message
  }

  void BrowserHistory::forwardButton(){
    //go forwardB
    //if next page=0, return error message
  }

  void BrowserHistory::readFile(string fileName){
    //use while loop to read file.txt
    while(myFilee >> fileString){
      if(mystring=="visit"){
        myFileName>>myUrl;
        myFileSize>>mySize;
      }
      else{
        //error
      }
    }
  }

  string BrowserHistory::string currentUrl(){

  }

  size_t currentPageSize();
  size_t getHistoryLength();

};
