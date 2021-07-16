## Insights
1. Placement new operators
   a. Create an array of 3 integers, fill some values. 
      Construct a Box object with length, breadth, height on this array.
   b. Create an 2D array of N rows, 3 columns, fill some values. 
      Construct an array of N Box objects in this area.
   c. Create an array of N empty Box objects, implement a function
      construct, which takes index as parameter and construct
      objects at given index and return pointer to that object
      
2. Implement following operator overloading on Box class.
   ```
   MyString s1("abcd");
   MyString s2("xyz");
   s3 = s1 + s2;  // 
   s4 = s1 * 3;   // s4 will be "abcdabcdabcd", like in python
   s3 += "hello"; // s3 should be "abcdxyzhello"
   s2 *= 5;       // s2 should be "xyzxyzxyzxyzxyz"
   s5 = s1 * 2 + "hello"  // s5 should be "abcdabcdhello"

3. Write a function tcompute, which takes Shape pointer/reference, 
   but should able to call Traingle specific functionality like TypeOfTriangle, 
   isRightAngled along with common functions area, circumference. Hint:- dynamic_cast 

4. In Currency class, ensure constructors are only meant for initialization, Hint:- explicit
   Implement following user defined type conversions
   - Given total no.of paise, distribute as ruppees and paise, Hint:- operator=
   - Convert currency object as total no.of paise, Hint:- operator int

5. Consider a file, where each line holds necessary values for Customer
   "1001,Scott,9845012345,5000.0"
   Read the file in CSV format and construct Customer object. 
   Create a temporary object for each line and display the state
   (No need to store objects as collection for now)
    
6. Count no.of lines, words, characters in given file. Use istream class functionality
 
## STL
1. Write a function that takes collection of numbers and a target number. 
   It should  find two different elements in the array that, when added together will be equal to target
   value.Consider std::vector or std::list for input elements, 
   Return the indices of two elements as std::pair object.
   If no such pair, whose sum is not equal to target number , return the pair {-1,-1}
    
2. In a given collection of words, all elements are equal except the one.
   Write a code to find the odd man out (Stray word)
    
3. Given the total distance travelled by a Vehicle at regular intervals 
   and value of interval, calculate average speed of the vehicle.
   e.g. [0, 0.1, 0.25, 0.45, 0.55, 0.7, 0.9, 1.0]

4. From a collection of words, one word is missing. Find the missing value 
   given original  list/vector of words and modified one.
    
5. In a given string, calculate frequency of each character and return the
   result as a map - char vs count
    
6. In a given collection(list/vector) of elements, 
   count no.of elements smaller than their mean
    
7. In a given collection(list/vector) of elements, 
   count no.of elements smaller than their mean
   count no.of elements larger than their mean
   and return the absolute difference between both the counts

8. Write a function to evaluate a post expression given in string form, assume 
   single digits for simplicity. E.g. 235*+ evaluates as 17
   Hint:- push_back, pop_back functions of std::vector/std::list
   
9. A MAC address will be in the form of 6 pair of hex digits (octets) separated 
   by colon. Given MAC address in string form, return vector/list with 6 
   integer values representing each pair/octet.
   
10. Given a sentence in string form, return a map of pairs , 
    where in each pair - word as key and length of the word as value.
    Double the length if word already present in the map (duplicate)
