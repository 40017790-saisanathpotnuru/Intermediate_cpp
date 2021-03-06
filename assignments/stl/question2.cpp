#include<iostream>
#include <vector>
#include<string>
#include <bits/stdc++.h>
#include<algorithm>
/**
 * @brief finding odd element out with out any inbuilt functionalities
 * 
 * @param arrayWords 
 * @return std::string 
 */

/**
 * @brief This function uses count inbuilt feature
 * 
 * @param arrayWords 
 * @return std::string 
 */

std::string fingOddWord(std::vector<std::string> arrayWords)
{
    for(int i=0;i<arrayWords.size();i++)
    {
        if(count(arrayWords.begin(), arrayWords.end(), arrayWords[i])==1) return arrayWords[i];
    }
    return "no odd";
}

int main()
{
    std::vector<std::string> arrayWords;
    /**
     * @brief initialization user defined way
     * 
     */

    /**
     * predefined definition of array
     * */
    arrayWords.push_back("good");
    arrayWords.push_back("good");
    arrayWords.push_back("good");
    arrayWords.push_back("good");
    arrayWords.push_back("bad");
    
    std::string oddWord=fingOddWord(arrayWords);
    std::cout<<oddWord<<std::endl;
    return 0;
}