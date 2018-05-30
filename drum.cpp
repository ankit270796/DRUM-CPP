#include<iostream>
#include<typeinfo>
#include<string.h>
#include<iostream>
#include<math.h>

#include"Headers/config.h"
#include"Headers/bucket.h"
#include"Headers/helperfunctions.h"
#include"Data/urlseed.cpp"

using namespace std;

int main(){
  // Building buckets with specified number of elements in each
  struct Bucket<int,string,string,NumElementsPerBucket> DrumBucket[NumBucket];
  //
  int ank=123232412123%100000000;
  cout<<ank<<"\n";
  int Result=HashCalculator<string, int>("www.google.com");
  int Bucket=BucketIdentifier<int,int>(Result);
  cout<<Bucket<<endl;
  //cout<<ank<<"\n";
  DrumBucket[0].Element[0]={1212,"asasd"," "};
  DrumBucket[1].Element[0]={12121,"sadhasdj"," "};
  return 0;
}
