// Generated by gencpp from file service/WordCountRequest.msg
// DO NOT EDIT!


#ifndef SERVICE_MESSAGE_WORDCOUNTREQUEST_H
#define SERVICE_MESSAGE_WORDCOUNTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace service
{
template <class ContainerAllocator>
struct WordCountRequest_
{
  typedef WordCountRequest_<ContainerAllocator> Type;

  WordCountRequest_()
    : words()  {
    }
  WordCountRequest_(const ContainerAllocator& _alloc)
    : words(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _words_type;
  _words_type words;





  typedef boost::shared_ptr< ::service::WordCountRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::service::WordCountRequest_<ContainerAllocator> const> ConstPtr;

}; // struct WordCountRequest_

typedef ::service::WordCountRequest_<std::allocator<void> > WordCountRequest;

typedef boost::shared_ptr< ::service::WordCountRequest > WordCountRequestPtr;
typedef boost::shared_ptr< ::service::WordCountRequest const> WordCountRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::service::WordCountRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::service::WordCountRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::service::WordCountRequest_<ContainerAllocator1> & lhs, const ::service::WordCountRequest_<ContainerAllocator2> & rhs)
{
  return lhs.words == rhs.words;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::service::WordCountRequest_<ContainerAllocator1> & lhs, const ::service::WordCountRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace service

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::service::WordCountRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::service::WordCountRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::service::WordCountRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::service::WordCountRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::service::WordCountRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::service::WordCountRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::service::WordCountRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6f897d3845272d18053a750c1cfb862a";
  }

  static const char* value(const ::service::WordCountRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6f897d3845272d18ULL;
  static const uint64_t static_value2 = 0x053a750c1cfb862aULL;
};

template<class ContainerAllocator>
struct DataType< ::service::WordCountRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "service/WordCountRequest";
  }

  static const char* value(const ::service::WordCountRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::service::WordCountRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string words\n"
;
  }

  static const char* value(const ::service::WordCountRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::service::WordCountRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.words);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WordCountRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::service::WordCountRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::service::WordCountRequest_<ContainerAllocator>& v)
  {
    s << indent << "words: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.words);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SERVICE_MESSAGE_WORDCOUNTREQUEST_H
