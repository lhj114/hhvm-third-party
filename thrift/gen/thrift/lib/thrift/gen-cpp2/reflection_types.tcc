/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/lib/thrift/gen-cpp2/reflection_types.h"
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/IOBufQueue.h>
#include <thrift/lib/cpp/transport/THeader.h>
#include <thrift/lib/cpp2/server/Cpp2ConnContext.h>
#include <thrift/lib/cpp2/GeneratedCodeHelper.h>
#include <thrift/lib/cpp2/GeneratedSerializationCodeHelper.h>

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace apache { namespace thrift { namespace reflection { namespace cpp2 {

template <class Protocol_>
uint32_t StructField_read(Protocol_* iprot, StructField* obj) {
  (void)obj;
  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (fname == "isRequired") {
        fid = 1;
        ftype = apache::thrift::protocol::T_BOOL;
      }
      else if (fname == "type") {
        fid = 2;
        ftype = apache::thrift::protocol::T_I64;
      }
      else if (fname == "name") {
        fid = 3;
        ftype = apache::thrift::protocol::T_STRING;
      }
      else if (fname == "annotations") {
        fid = 4;
        ftype = apache::thrift::protocol::T_MAP;
      }
      else if (fname == "order") {
        fid = 5;
        ftype = apache::thrift::protocol::T_I16;
      }
    }
    switch (fid) {
      case 1:
      {
        if (ftype == apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(obj->isRequired);
          obj->__isset.isRequired = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 2:
      {
        if (ftype == apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(obj->type);
          obj->__isset.type = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 3:
      {
        if (ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(obj->name);
          obj->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 4:
      {
        if (ftype == apache::thrift::protocol::T_MAP) {
          obj->annotations = std::unordered_map<std::string, std::string>();
          xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::string>, std::unordered_map<std::string, std::string>>::read(*iprot, obj->annotations);
          obj->__isset.annotations = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 5:
      {
        if (ftype == apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(obj->order);
          obj->__isset.order = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t StructField_serializedSize(Protocol_ const* prot_, const StructField* obj) {
  (void)obj;
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("StructField");
  xfer += prot_->serializedFieldSize("isRequired", apache::thrift::protocol::T_BOOL, 1);
  xfer += prot_->serializedSizeBool(obj->isRequired);
  xfer += prot_->serializedFieldSize("type", apache::thrift::protocol::T_I64, 2);
  xfer += prot_->serializedSizeI64(obj->type);
  xfer += prot_->serializedFieldSize("name", apache::thrift::protocol::T_STRING, 3);
  xfer += prot_->serializedSizeString(obj->name);
  if (obj->__isset.annotations) {
    xfer += prot_->serializedFieldSize("annotations", apache::thrift::protocol::T_MAP, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::string>, std::unordered_map<std::string, std::string>>::serializedSize<false>(*prot_, obj->annotations);
  }
  xfer += prot_->serializedFieldSize("order", apache::thrift::protocol::T_I16, 5);
  xfer += prot_->serializedSizeI16(obj->order);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t StructField_serializedSizeZC(Protocol_ const* prot_, const StructField* obj) {
  (void)obj;
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("StructField");
  xfer += prot_->serializedFieldSize("isRequired", apache::thrift::protocol::T_BOOL, 1);
  xfer += prot_->serializedSizeBool(obj->isRequired);
  xfer += prot_->serializedFieldSize("type", apache::thrift::protocol::T_I64, 2);
  xfer += prot_->serializedSizeI64(obj->type);
  xfer += prot_->serializedFieldSize("name", apache::thrift::protocol::T_STRING, 3);
  xfer += prot_->serializedSizeString(obj->name);
  if (obj->__isset.annotations) {
    xfer += prot_->serializedFieldSize("annotations", apache::thrift::protocol::T_MAP, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::string>, std::unordered_map<std::string, std::string>>::serializedSize<false>(*prot_, obj->annotations);
  }
  xfer += prot_->serializedFieldSize("order", apache::thrift::protocol::T_I16, 5);
  xfer += prot_->serializedSizeI16(obj->order);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t StructField_write(Protocol_* prot_, const StructField* obj) {
  (void)obj;
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("StructField");
  xfer += prot_->writeFieldBegin("isRequired", apache::thrift::protocol::T_BOOL, 1);
  xfer += prot_->writeBool(obj->isRequired);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("type", apache::thrift::protocol::T_I64, 2);
  xfer += prot_->writeI64(obj->type);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("name", apache::thrift::protocol::T_STRING, 3);
  xfer += prot_->writeString(obj->name);
  xfer += prot_->writeFieldEnd();
  if (obj->__isset.annotations) {
    xfer += prot_->writeFieldBegin("annotations", apache::thrift::protocol::T_MAP, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::string>, std::unordered_map<std::string, std::string>>::write(*prot_, obj->annotations);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldBegin("order", apache::thrift::protocol::T_I16, 5);
  xfer += prot_->writeI16(obj->order);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}}}} // apache::thrift::reflection::cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace apache { namespace thrift { namespace reflection { namespace cpp2 {

template <class Protocol_>
uint32_t DataType_read(Protocol_* iprot, DataType* obj) {
  (void)obj;
  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (fname == "name") {
        fid = 1;
        ftype = apache::thrift::protocol::T_STRING;
      }
      else if (fname == "fields") {
        fid = 2;
        ftype = apache::thrift::protocol::T_MAP;
      }
      else if (fname == "mapKeyType") {
        fid = 3;
        ftype = apache::thrift::protocol::T_I64;
      }
      else if (fname == "valueType") {
        fid = 4;
        ftype = apache::thrift::protocol::T_I64;
      }
      else if (fname == "enumValues") {
        fid = 5;
        ftype = apache::thrift::protocol::T_MAP;
      }
    }
    switch (fid) {
      case 1:
      {
        if (ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(obj->name);
          obj->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 2:
      {
        if (ftype == apache::thrift::protocol::T_MAP) {
          obj->fields = std::unordered_map<int16_t,  ::apache::thrift::reflection::cpp2::StructField>();
          xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, std::unordered_map<int16_t,  ::apache::thrift::reflection::cpp2::StructField>>::read(*iprot, obj->fields);
          obj->__isset.fields = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 3:
      {
        if (ftype == apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(obj->mapKeyType);
          obj->__isset.mapKeyType = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 4:
      {
        if (ftype == apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(obj->valueType);
          obj->__isset.valueType = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 5:
      {
        if (ftype == apache::thrift::protocol::T_MAP) {
          obj->enumValues = std::unordered_map<std::string, int32_t>();
          xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::unordered_map<std::string, int32_t>>::read(*iprot, obj->enumValues);
          obj->__isset.enumValues = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t DataType_serializedSize(Protocol_ const* prot_, const DataType* obj) {
  (void)obj;
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("DataType");
  xfer += prot_->serializedFieldSize("name", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(obj->name);
  if (obj->__isset.fields) {
    xfer += prot_->serializedFieldSize("fields", apache::thrift::protocol::T_MAP, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, std::unordered_map<int16_t,  ::apache::thrift::reflection::cpp2::StructField>>::serializedSize<false>(*prot_, obj->fields);
  }
  if (obj->__isset.mapKeyType) {
    xfer += prot_->serializedFieldSize("mapKeyType", apache::thrift::protocol::T_I64, 3);
    xfer += prot_->serializedSizeI64(obj->mapKeyType);
  }
  if (obj->__isset.valueType) {
    xfer += prot_->serializedFieldSize("valueType", apache::thrift::protocol::T_I64, 4);
    xfer += prot_->serializedSizeI64(obj->valueType);
  }
  if (obj->__isset.enumValues) {
    xfer += prot_->serializedFieldSize("enumValues", apache::thrift::protocol::T_MAP, 5);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::unordered_map<std::string, int32_t>>::serializedSize<false>(*prot_, obj->enumValues);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t DataType_serializedSizeZC(Protocol_ const* prot_, const DataType* obj) {
  (void)obj;
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("DataType");
  xfer += prot_->serializedFieldSize("name", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(obj->name);
  if (obj->__isset.fields) {
    xfer += prot_->serializedFieldSize("fields", apache::thrift::protocol::T_MAP, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, std::unordered_map<int16_t,  ::apache::thrift::reflection::cpp2::StructField>>::serializedSize<false>(*prot_, obj->fields);
  }
  if (obj->__isset.mapKeyType) {
    xfer += prot_->serializedFieldSize("mapKeyType", apache::thrift::protocol::T_I64, 3);
    xfer += prot_->serializedSizeI64(obj->mapKeyType);
  }
  if (obj->__isset.valueType) {
    xfer += prot_->serializedFieldSize("valueType", apache::thrift::protocol::T_I64, 4);
    xfer += prot_->serializedSizeI64(obj->valueType);
  }
  if (obj->__isset.enumValues) {
    xfer += prot_->serializedFieldSize("enumValues", apache::thrift::protocol::T_MAP, 5);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::unordered_map<std::string, int32_t>>::serializedSize<false>(*prot_, obj->enumValues);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t DataType_write(Protocol_* prot_, const DataType* obj) {
  (void)obj;
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("DataType");
  xfer += prot_->writeFieldBegin("name", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->writeString(obj->name);
  xfer += prot_->writeFieldEnd();
  if (obj->__isset.fields) {
    xfer += prot_->writeFieldBegin("fields", apache::thrift::protocol::T_MAP, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, std::unordered_map<int16_t,  ::apache::thrift::reflection::cpp2::StructField>>::write(*prot_, obj->fields);
    xfer += prot_->writeFieldEnd();
  }
  if (obj->__isset.mapKeyType) {
    xfer += prot_->writeFieldBegin("mapKeyType", apache::thrift::protocol::T_I64, 3);
    xfer += prot_->writeI64(obj->mapKeyType);
    xfer += prot_->writeFieldEnd();
  }
  if (obj->__isset.valueType) {
    xfer += prot_->writeFieldBegin("valueType", apache::thrift::protocol::T_I64, 4);
    xfer += prot_->writeI64(obj->valueType);
    xfer += prot_->writeFieldEnd();
  }
  if (obj->__isset.enumValues) {
    xfer += prot_->writeFieldBegin("enumValues", apache::thrift::protocol::T_MAP, 5);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::unordered_map<std::string, int32_t>>::write(*prot_, obj->enumValues);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}}}} // apache::thrift::reflection::cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace apache { namespace thrift { namespace reflection { namespace cpp2 {

template <class Protocol_>
uint32_t Schema_read(Protocol_* iprot, Schema* obj) {
  (void)obj;
  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (fname == "dataTypes") {
        fid = 1;
        ftype = apache::thrift::protocol::T_MAP;
      }
      else if (fname == "names") {
        fid = 2;
        ftype = apache::thrift::protocol::T_MAP;
      }
    }
    switch (fid) {
      case 1:
      {
        if (ftype == apache::thrift::protocol::T_MAP) {
          obj->dataTypes = std::unordered_map<int64_t,  ::apache::thrift::reflection::cpp2::DataType>();
          xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, std::unordered_map<int64_t,  ::apache::thrift::reflection::cpp2::DataType>>::read(*iprot, obj->dataTypes);
          obj->__isset.dataTypes = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 2:
      {
        if (ftype == apache::thrift::protocol::T_MAP) {
          obj->names = std::unordered_map<std::string, int64_t>();
          xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::unordered_map<std::string, int64_t>>::read(*iprot, obj->names);
          obj->__isset.names = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t Schema_serializedSize(Protocol_ const* prot_, const Schema* obj) {
  (void)obj;
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Schema");
  xfer += prot_->serializedFieldSize("dataTypes", apache::thrift::protocol::T_MAP, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, std::unordered_map<int64_t,  ::apache::thrift::reflection::cpp2::DataType>>::serializedSize<false>(*prot_, obj->dataTypes);
  xfer += prot_->serializedFieldSize("names", apache::thrift::protocol::T_MAP, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::unordered_map<std::string, int64_t>>::serializedSize<false>(*prot_, obj->names);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Schema_serializedSizeZC(Protocol_ const* prot_, const Schema* obj) {
  (void)obj;
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Schema");
  xfer += prot_->serializedFieldSize("dataTypes", apache::thrift::protocol::T_MAP, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, std::unordered_map<int64_t,  ::apache::thrift::reflection::cpp2::DataType>>::serializedSize<false>(*prot_, obj->dataTypes);
  xfer += prot_->serializedFieldSize("names", apache::thrift::protocol::T_MAP, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::unordered_map<std::string, int64_t>>::serializedSize<false>(*prot_, obj->names);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Schema_write(Protocol_* prot_, const Schema* obj) {
  (void)obj;
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Schema");
  xfer += prot_->writeFieldBegin("dataTypes", apache::thrift::protocol::T_MAP, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, std::unordered_map<int64_t,  ::apache::thrift::reflection::cpp2::DataType>>::write(*prot_, obj->dataTypes);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("names", apache::thrift::protocol::T_MAP, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::unordered_map<std::string, int64_t>>::write(*prot_, obj->names);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}}}} // apache::thrift::reflection::cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace apache { namespace thrift { namespace reflection { namespace cpp2 {

}}}} // apache::thrift::reflection::cpp2
