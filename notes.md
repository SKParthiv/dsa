# DSA Notes for Imp parts
## I/O in cpp
 - difference betweeen \n and std::endl is that \n is faster and does not flush the output buffer while std::endl will flush the output buffer
 - what is the output buffer and input buffer?
    - The 
 - << is insertion operator and >> is the extraction operator. Can they used somewhere else?
 - cerr is a error stream in cpp where the error messages are displayed. It is an instance of ostream class. cerr is unbeffured while cout is buffered so it slower.
 - what is buffered and unbuffered output streams?
 - there is also a buffered output stream called clog where the error messages are displayed
 - is bufferedand and unbuffered imply that it is stored for the runtime and not stored in runtime respectively?

 - multiple inputs can be taken by cin
 


 __Shortcut: #include<bits/stdc++.h>__
  - adds all libraries and not recommended in production due to compile-time overhead.


## 

## STL Stuff
### This is the first part, Containers in STL

1. Pairs: Part of utitlity lib. defined like this pair<int, int> var_name = {1, 3};
  a. Pairs can be nested and the data type of each element needs to be mentioned.
  b. To display each element we use the properties of the object .first and .second
  c. We can also make a array of pairs. like this pair<int, char> arr[] = {{1,'s'}, {2,'r'}};
2. Vectors: Lets go. We know a lot about this but here is the gen def vector<data_type> var_name = {blah, blah};
  a. Here the size can be modified, and we can also do many more cool stuff here like insertion, and all kinds of data_type can be inside the vector, from other containers like pairs and also primary datatypes.
  b. v.push_back(element);
  c. v.emplace_back(element); What is the difference between them? Idk answer this later
  d. vectors can be defined as such too. vector<int> v(size, element to fill all the elements);
  e. vectors can also be copied as so in declaration, vector<int> v2(v); will be the copy of v.
  f. iterator is a pointer to each element that can be easily iterated in sequence or in reverse. defined as so, vector<int>::iterator it = v.begin();
  g. All the iterators, v.end(), v.begin(), v.rend(), v.rbegin()
  h. v.end() does not point to the last element but rather to a ending of the vector after the element. And rend and rbegin are reverse iterators which go in reverse direction, with v.rbegin() pointing to the last element and ++ will make it go 1 element back. and similarly v.rend()
  i. v.back() is the last element
  j. There exits auto keyword that automatically assigns according to the data, but it is more redundant.
  k. yk what Imma just add image of the loops possible here lol.  [For_loops_for_vector.png]
  l. Now deletion lessgo, we use erase method, with the arg being either the pointer to the element like using iterator, or using a slice, with start pointer and end pointer with v.erase(start_pointer, end_pointer); and v.erase(pointer of 1 element); also the pinter is smth like this v.begin() + 1.
  m. So now we have insert. Ah fork this, jus check he docs dumbass.
2. Lists: basically same as vector with an extra function of push_front and also emplace_front is there. Btw insert operation is pretty costly compared to push front and emplace_front
3. Deque: also has pop_back, pop_front. rest is same as list
4. Stack: LIFO, push, emplace all adds on top. .top() gives the last in. and also .pop() pops the element on top. there is .size() here. .empty() checks if the stack is empty. All are O(1) complexity.
5. Queue: FIFO. Fork this go through the docs when you need to bro. I am not writing this. This is bullshit. I am prolly never gonna see this ever again. Well its just proof I tried studying lol. Anyway I am not studying this anymore. Imma search the library I need when solving problems lol.

### So that is the end of this notes bullshit, just write code you will remember or check docs. This aint docs anyway.
