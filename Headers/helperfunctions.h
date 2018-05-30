#include "config.h"

using namespace std;

template < typename BucketIdType,
typename KeyType>
BucketIdType BucketIdentifier(KeyType Key){
  // function only defined for integer type can be extened
  // KeyType and BucketIDType both are integers in this case
  BucketIdType TotalKeys=pow(10,KeySize);
  float result=(float(Key)/float(TotalKeys));
  result=result*NumBucket;
  return BucketIdType(result);
}


template< typename HashInputType,
typename ReturnType>
ReturnType HashCalculator(HashInputType URL){
  // By default the hash function returns the unsigned long integer
  // created a templated so that it can be modified later
 hash<string> str_hash;
 unsigned long int OriginalHash = str_hash(URL);
 // KeySize is the required number of digits in the hash
 int result = (OriginalHash % ((unsigned long int)pow(10,KeySize)));
 return result;
}




/*
hash<string> str_hash;
hash<int> int_hash;
std::cout<<typeid("22323123").name()<<endl;
*/
