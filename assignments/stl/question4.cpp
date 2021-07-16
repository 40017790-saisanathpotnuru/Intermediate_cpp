#include<iostream>
#include <vector>
#include<string>
#include <bits/stdc++.h>
#include<algorithm>
/**
 * @brief finds the missing word using algorithm
 * 
 * @return std::string 
 */
std::string findMissedWord(std::vector<std::string>arrayOriginal,std::vector<std::string>arrayModified)
{
    std::vector<std::string> combinedArray;
    combinedArray.insert(combinedArray.begin(), arrayOriginal.begin(), arrayOriginal.end());
    combinedArray.insert(combinedArray.end(), arrayModified.begin(), arrayModified.end());
    for(int i=0;i<combinedArray.size();i++)
    {
        if(count(combinedArray.begin(), combinedArray.end(), combinedArray[i])==1) return combinedArray[i];
    }
    return "same";
}
int main()
{
    std::vector<std::string>arrayOriginal={"good","boy","is","sanath"};
    std::vector<std::string>arrayModified={"good","is","sanath"};
    std::string wordMissing=findMissedWord(arrayOriginal,arrayModified);
    std::cout<<wordMissing<<std::endl;
    return 0;
}