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

  }

  void BrowserHistory::visitSite(string url, size_t filesize){
    // get url and return it
    currentURL() -> url;
    // get filesize and return it
    currentPageSize() -> filesize;
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
    
  }

  string BrowserHistory::string currentUrl(){

  }

  size_t currentPageSize();
  size_t getHistoryLength();

};
