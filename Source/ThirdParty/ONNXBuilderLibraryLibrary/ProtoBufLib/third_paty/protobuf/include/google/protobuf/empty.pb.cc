// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: empty.proto

#include "empty.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace google {
namespace protobuf {
PROTOBUF_CONSTEXPR Empty::Empty(
    ::_pbi::ConstantInitialized) {}
struct EmptyDefaultTypeInternal {
  PROTOBUF_CONSTEXPR EmptyDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~EmptyDefaultTypeInternal() {}
  union {
    Empty _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 EmptyDefaultTypeInternal _Empty_default_instance_;
}  // namespace protobuf
}  // namespace google
static ::_pb::Metadata file_level_metadata_empty_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_empty_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_empty_2eproto = nullptr;

const uint32_t TableStruct_empty_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::protobuf::Empty, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::google::protobuf::Empty)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::google::protobuf::_Empty_default_instance_._instance,
};

const char descriptor_table_protodef_empty_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\013empty.proto\022\017google.protobuf\"\007\n\005EmptyB"
  "}\n\023com.google.protobufB\nEmptyProtoP\001Z.go"
  "ogle.golang.org/protobuf/types/known/emp"
  "typb\370\001\001\242\002\003GPB\252\002\036Google.Protobuf.WellKnow"
  "nTypesb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_empty_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_empty_2eproto = {
    false, false, 174, descriptor_table_protodef_empty_2eproto,
    "empty.proto",
    &descriptor_table_empty_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_empty_2eproto::offsets,
    file_level_metadata_empty_2eproto, file_level_enum_descriptors_empty_2eproto,
    file_level_service_descriptors_empty_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_empty_2eproto_getter() {
  return &descriptor_table_empty_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_empty_2eproto(&descriptor_table_empty_2eproto);
namespace google {
namespace protobuf {

// ===================================================================

class Empty::_Internal {
 public:
};

Empty::Empty(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase(arena, is_message_owned) {
  // @@protoc_insertion_point(arena_constructor:google.protobuf.Empty)
}
Empty::Empty(const Empty& from)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase() {
  Empty* const _this = this; (void)_this;
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.Empty)
}





const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Empty::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl,
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl,
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Empty::GetClassData() const { return &_class_data_; }







::PROTOBUF_NAMESPACE_ID::Metadata Empty::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_empty_2eproto_getter, &descriptor_table_empty_2eproto_once,
      file_level_metadata_empty_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace protobuf
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::google::protobuf::Empty*
Arena::CreateMaybeMessage< ::google::protobuf::Empty >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::protobuf::Empty >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>