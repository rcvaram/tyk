// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: coprocess_common.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "coprocess_common.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace coprocess {

namespace {

const ::google::protobuf::Descriptor* StringSlice_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  StringSlice_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* HookType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_coprocess_5fcommon_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_coprocess_5fcommon_2eproto() {
  protobuf_AddDesc_coprocess_5fcommon_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "coprocess_common.proto");
  GOOGLE_CHECK(file != NULL);
  StringSlice_descriptor_ = file->message_type(0);
  static const int StringSlice_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StringSlice, items_),
  };
  StringSlice_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      StringSlice_descriptor_,
      StringSlice::internal_default_instance(),
      StringSlice_offsets_,
      -1,
      -1,
      -1,
      sizeof(StringSlice),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StringSlice, _internal_metadata_));
  HookType_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_coprocess_5fcommon_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      StringSlice_descriptor_, StringSlice::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_coprocess_5fcommon_2eproto() {
  StringSlice_default_instance_.Shutdown();
  delete StringSlice_reflection_;
}

void protobuf_InitDefaults_coprocess_5fcommon_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::GetEmptyString();
  StringSlice_default_instance_.DefaultConstruct();
  StringSlice_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_coprocess_5fcommon_2eproto_once_);
void protobuf_InitDefaults_coprocess_5fcommon_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_coprocess_5fcommon_2eproto_once_,
                 &protobuf_InitDefaults_coprocess_5fcommon_2eproto_impl);
}
void protobuf_AddDesc_coprocess_5fcommon_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_coprocess_5fcommon_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\026coprocess_common.proto\022\tcoprocess\"\034\n\013S"
    "tringSlice\022\r\n\005items\030\001 \003(\t*O\n\010HookType\022\013\n"
    "\007Unknown\020\000\022\007\n\003Pre\020\001\022\010\n\004Post\020\002\022\017\n\013PostKey"
    "Auth\020\003\022\022\n\016CustomKeyCheck\020\004b\006proto3", 154);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "coprocess_common.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_coprocess_5fcommon_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_coprocess_5fcommon_2eproto_once_);
void protobuf_AddDesc_coprocess_5fcommon_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_coprocess_5fcommon_2eproto_once_,
                 &protobuf_AddDesc_coprocess_5fcommon_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_coprocess_5fcommon_2eproto {
  StaticDescriptorInitializer_coprocess_5fcommon_2eproto() {
    protobuf_AddDesc_coprocess_5fcommon_2eproto();
  }
} static_descriptor_initializer_coprocess_5fcommon_2eproto_;
const ::google::protobuf::EnumDescriptor* HookType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return HookType_descriptor_;
}
bool HookType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}


namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int StringSlice::kItemsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

StringSlice::StringSlice()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_coprocess_5fcommon_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:coprocess.StringSlice)
}

void StringSlice::InitAsDefaultInstance() {
}

StringSlice::StringSlice(const StringSlice& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:coprocess.StringSlice)
}

void StringSlice::SharedCtor() {
  _cached_size_ = 0;
}

StringSlice::~StringSlice() {
  // @@protoc_insertion_point(destructor:coprocess.StringSlice)
  SharedDtor();
}

void StringSlice::SharedDtor() {
}

void StringSlice::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* StringSlice::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return StringSlice_descriptor_;
}

const StringSlice& StringSlice::default_instance() {
  protobuf_InitDefaults_coprocess_5fcommon_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<StringSlice> StringSlice_default_instance_;

StringSlice* StringSlice::New(::google::protobuf::Arena* arena) const {
  StringSlice* n = new StringSlice;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void StringSlice::Clear() {
// @@protoc_insertion_point(message_clear_start:coprocess.StringSlice)
  items_.Clear();
}

bool StringSlice::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:coprocess.StringSlice)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated string items = 1;
      case 1: {
        if (tag == 10) {
         parse_items:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_items()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->items(this->items_size() - 1).data(),
            this->items(this->items_size() - 1).length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "coprocess.StringSlice.items"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_items;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:coprocess.StringSlice)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:coprocess.StringSlice)
  return false;
#undef DO_
}

void StringSlice::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:coprocess.StringSlice)
  // repeated string items = 1;
  for (int i = 0; i < this->items_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->items(i).data(), this->items(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "coprocess.StringSlice.items");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->items(i), output);
  }

  // @@protoc_insertion_point(serialize_end:coprocess.StringSlice)
}

::google::protobuf::uint8* StringSlice::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:coprocess.StringSlice)
  // repeated string items = 1;
  for (int i = 0; i < this->items_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->items(i).data(), this->items(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "coprocess.StringSlice.items");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(1, this->items(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:coprocess.StringSlice)
  return target;
}

size_t StringSlice::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:coprocess.StringSlice)
  size_t total_size = 0;

  // repeated string items = 1;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->items_size());
  for (int i = 0; i < this->items_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->items(i));
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void StringSlice::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:coprocess.StringSlice)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const StringSlice* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const StringSlice>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:coprocess.StringSlice)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:coprocess.StringSlice)
    UnsafeMergeFrom(*source);
  }
}

void StringSlice::MergeFrom(const StringSlice& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:coprocess.StringSlice)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void StringSlice::UnsafeMergeFrom(const StringSlice& from) {
  GOOGLE_DCHECK(&from != this);
  items_.UnsafeMergeFrom(from.items_);
}

void StringSlice::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:coprocess.StringSlice)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StringSlice::CopyFrom(const StringSlice& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:coprocess.StringSlice)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool StringSlice::IsInitialized() const {

  return true;
}

void StringSlice::Swap(StringSlice* other) {
  if (other == this) return;
  InternalSwap(other);
}
void StringSlice::InternalSwap(StringSlice* other) {
  items_.UnsafeArenaSwap(&other->items_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata StringSlice::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = StringSlice_descriptor_;
  metadata.reflection = StringSlice_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// StringSlice

// repeated string items = 1;
int StringSlice::items_size() const {
  return items_.size();
}
void StringSlice::clear_items() {
  items_.Clear();
}
const ::std::string& StringSlice::items(int index) const {
  // @@protoc_insertion_point(field_get:coprocess.StringSlice.items)
  return items_.Get(index);
}
::std::string* StringSlice::mutable_items(int index) {
  // @@protoc_insertion_point(field_mutable:coprocess.StringSlice.items)
  return items_.Mutable(index);
}
void StringSlice::set_items(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:coprocess.StringSlice.items)
  items_.Mutable(index)->assign(value);
}
void StringSlice::set_items(int index, const char* value) {
  items_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:coprocess.StringSlice.items)
}
void StringSlice::set_items(int index, const char* value, size_t size) {
  items_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:coprocess.StringSlice.items)
}
::std::string* StringSlice::add_items() {
  // @@protoc_insertion_point(field_add_mutable:coprocess.StringSlice.items)
  return items_.Add();
}
void StringSlice::add_items(const ::std::string& value) {
  items_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:coprocess.StringSlice.items)
}
void StringSlice::add_items(const char* value) {
  items_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:coprocess.StringSlice.items)
}
void StringSlice::add_items(const char* value, size_t size) {
  items_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:coprocess.StringSlice.items)
}
const ::google::protobuf::RepeatedPtrField< ::std::string>&
StringSlice::items() const {
  // @@protoc_insertion_point(field_list:coprocess.StringSlice.items)
  return items_;
}
::google::protobuf::RepeatedPtrField< ::std::string>*
StringSlice::mutable_items() {
  // @@protoc_insertion_point(field_mutable_list:coprocess.StringSlice.items)
  return &items_;
}

inline const StringSlice* StringSlice::internal_default_instance() {
  return &StringSlice_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace coprocess

// @@protoc_insertion_point(global_scope)
