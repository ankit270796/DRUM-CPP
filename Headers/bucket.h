template <
  typename KeyType,
  typename ValueType,
  typename AuxDataType
  >
struct BucketElement
{
  KeyType Key;
  ValueType Value;
  AuxDataType AuxData;
};

template <
  typename KeyType,
  typename ValueType,
  typename AuxDataType,
  int ElementsPerBucket
  >
struct Bucket
{
  BucketElement<KeyType,ValueType,AuxDataType> Element[ElementsPerBucket];
};
