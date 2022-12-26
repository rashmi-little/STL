# STL
## Array
1. `arry<int,size> name;
name.fill(value);` 

All the index value will be fill by that given value. 

2.To print a value at index

name.at(index);

## ITRATOR
The itrator is just like a pointer which gives the address of a list element.

let it be itrator:

Then ->arrayname.begin()

It gives the address of the first element of the array.

->arrayname.end()

It points to just after the last element.

->arrayname.rbegin()

It points to the last element of the list

->arrayname.rend()

it points to just before the first element.


we can itrate through the command

`for(auto it=list.begin();it!=list.end();it++)
cout<<*it;`

->arr.front();

To get the first index element.
->arr.back();

To get the last index element.

->arr.size();

To get the size of arary.

