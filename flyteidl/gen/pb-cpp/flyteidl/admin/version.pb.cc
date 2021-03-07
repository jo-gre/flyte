// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: flyteidl/admin/version.proto

#include "flyteidl/admin/version.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

namespace flyteidl {
namespace admin {
class VersionDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Version> _instance;
} _Version_default_instance_;
class GetVersionRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<GetVersionRequest> _instance;
} _GetVersionRequest_default_instance_;
}  // namespace admin
}  // namespace flyteidl
static void InitDefaultsVersion_flyteidl_2fadmin_2fversion_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::flyteidl::admin::_Version_default_instance_;
    new (ptr) ::flyteidl::admin::Version();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::flyteidl::admin::Version::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Version_flyteidl_2fadmin_2fversion_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsVersion_flyteidl_2fadmin_2fversion_2eproto}, {}};

static void InitDefaultsGetVersionRequest_flyteidl_2fadmin_2fversion_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::flyteidl::admin::_GetVersionRequest_default_instance_;
    new (ptr) ::flyteidl::admin::GetVersionRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::flyteidl::admin::GetVersionRequest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_GetVersionRequest_flyteidl_2fadmin_2fversion_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsGetVersionRequest_flyteidl_2fadmin_2fversion_2eproto}, {}};

void InitDefaults_flyteidl_2fadmin_2fversion_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_Version_flyteidl_2fadmin_2fversion_2eproto.base);
  ::google::protobuf::internal::InitSCC(&scc_info_GetVersionRequest_flyteidl_2fadmin_2fversion_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_flyteidl_2fadmin_2fversion_2eproto[2];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_flyteidl_2fadmin_2fversion_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_flyteidl_2fadmin_2fversion_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_flyteidl_2fadmin_2fversion_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::flyteidl::admin::Version, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::flyteidl::admin::Version, build_),
  PROTOBUF_FIELD_OFFSET(::flyteidl::admin::Version, version_),
  PROTOBUF_FIELD_OFFSET(::flyteidl::admin::Version, buildtime_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::flyteidl::admin::GetVersionRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::flyteidl::admin::Version)},
  { 8, -1, sizeof(::flyteidl::admin::GetVersionRequest)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::flyteidl::admin::_Version_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::flyteidl::admin::_GetVersionRequest_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_flyteidl_2fadmin_2fversion_2eproto = {
  {}, AddDescriptors_flyteidl_2fadmin_2fversion_2eproto, "flyteidl/admin/version.proto", schemas,
  file_default_instances, TableStruct_flyteidl_2fadmin_2fversion_2eproto::offsets,
  file_level_metadata_flyteidl_2fadmin_2fversion_2eproto, 2, file_level_enum_descriptors_flyteidl_2fadmin_2fversion_2eproto, file_level_service_descriptors_flyteidl_2fadmin_2fversion_2eproto,
};

const char descriptor_table_protodef_flyteidl_2fadmin_2fversion_2eproto[] =
  "\n\034flyteidl/admin/version.proto\022\016flyteidl"
  ".admin\"<\n\007Version\022\r\n\005Build\030\001 \001(\t\022\017\n\007Vers"
  "ion\030\002 \001(\t\022\021\n\tBuildTime\030\003 \001(\t\"\023\n\021GetVersi"
  "onRequestB7Z5github.com/flyteorg/flyteid"
  "l/gen/pb-go/flyteidl/adminb\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_flyteidl_2fadmin_2fversion_2eproto = {
  false, InitDefaults_flyteidl_2fadmin_2fversion_2eproto, 
  descriptor_table_protodef_flyteidl_2fadmin_2fversion_2eproto,
  "flyteidl/admin/version.proto", &assign_descriptors_table_flyteidl_2fadmin_2fversion_2eproto, 194,
};

void AddDescriptors_flyteidl_2fadmin_2fversion_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_flyteidl_2fadmin_2fversion_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_flyteidl_2fadmin_2fversion_2eproto = []() { AddDescriptors_flyteidl_2fadmin_2fversion_2eproto(); return true; }();
namespace flyteidl {
namespace admin {

// ===================================================================

void Version::InitAsDefaultInstance() {
}
class Version::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Version::kBuildFieldNumber;
const int Version::kVersionFieldNumber;
const int Version::kBuildTimeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Version::Version()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:flyteidl.admin.Version)
}
Version::Version(const Version& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  build_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.build().size() > 0) {
    build_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.build_);
  }
  version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.version().size() > 0) {
    version_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.version_);
  }
  buildtime_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.buildtime().size() > 0) {
    buildtime_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.buildtime_);
  }
  // @@protoc_insertion_point(copy_constructor:flyteidl.admin.Version)
}

void Version::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_Version_flyteidl_2fadmin_2fversion_2eproto.base);
  build_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  buildtime_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Version::~Version() {
  // @@protoc_insertion_point(destructor:flyteidl.admin.Version)
  SharedDtor();
}

void Version::SharedDtor() {
  build_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  buildtime_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Version::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Version& Version::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_Version_flyteidl_2fadmin_2fversion_2eproto.base);
  return *internal_default_instance();
}


void Version::Clear() {
// @@protoc_insertion_point(message_clear_start:flyteidl.admin.Version)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  build_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  buildtime_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Version::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<Version*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // string Build = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("flyteidl.admin.Version.Build");
        object = msg->mutable_build();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // string Version = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 18) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("flyteidl.admin.Version.Version");
        object = msg->mutable_version();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // string BuildTime = 3;
      case 3: {
        if (static_cast<::google::protobuf::uint8>(tag) != 26) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("flyteidl.admin.Version.BuildTime");
        object = msg->mutable_buildtime();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool Version::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:flyteidl.admin.Version)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string Build = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_build()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->build().data(), static_cast<int>(this->build().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "flyteidl.admin.Version.Build"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string Version = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (18 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_version()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->version().data(), static_cast<int>(this->version().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "flyteidl.admin.Version.Version"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string BuildTime = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (26 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_buildtime()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->buildtime().data(), static_cast<int>(this->buildtime().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "flyteidl.admin.Version.BuildTime"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:flyteidl.admin.Version)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:flyteidl.admin.Version)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Version::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:flyteidl.admin.Version)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string Build = 1;
  if (this->build().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->build().data(), static_cast<int>(this->build().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "flyteidl.admin.Version.Build");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->build(), output);
  }

  // string Version = 2;
  if (this->version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->version().data(), static_cast<int>(this->version().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "flyteidl.admin.Version.Version");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->version(), output);
  }

  // string BuildTime = 3;
  if (this->buildtime().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->buildtime().data(), static_cast<int>(this->buildtime().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "flyteidl.admin.Version.BuildTime");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->buildtime(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:flyteidl.admin.Version)
}

::google::protobuf::uint8* Version::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:flyteidl.admin.Version)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string Build = 1;
  if (this->build().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->build().data(), static_cast<int>(this->build().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "flyteidl.admin.Version.Build");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->build(), target);
  }

  // string Version = 2;
  if (this->version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->version().data(), static_cast<int>(this->version().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "flyteidl.admin.Version.Version");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->version(), target);
  }

  // string BuildTime = 3;
  if (this->buildtime().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->buildtime().data(), static_cast<int>(this->buildtime().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "flyteidl.admin.Version.BuildTime");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->buildtime(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:flyteidl.admin.Version)
  return target;
}

size_t Version::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:flyteidl.admin.Version)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string Build = 1;
  if (this->build().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->build());
  }

  // string Version = 2;
  if (this->version().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->version());
  }

  // string BuildTime = 3;
  if (this->buildtime().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->buildtime());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Version::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:flyteidl.admin.Version)
  GOOGLE_DCHECK_NE(&from, this);
  const Version* source =
      ::google::protobuf::DynamicCastToGenerated<Version>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:flyteidl.admin.Version)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:flyteidl.admin.Version)
    MergeFrom(*source);
  }
}

void Version::MergeFrom(const Version& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:flyteidl.admin.Version)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.build().size() > 0) {

    build_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.build_);
  }
  if (from.version().size() > 0) {

    version_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.version_);
  }
  if (from.buildtime().size() > 0) {

    buildtime_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.buildtime_);
  }
}

void Version::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:flyteidl.admin.Version)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Version::CopyFrom(const Version& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:flyteidl.admin.Version)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Version::IsInitialized() const {
  return true;
}

void Version::Swap(Version* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Version::InternalSwap(Version* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  build_.Swap(&other->build_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  version_.Swap(&other->version_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  buildtime_.Swap(&other->buildtime_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::google::protobuf::Metadata Version::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_flyteidl_2fadmin_2fversion_2eproto);
  return ::file_level_metadata_flyteidl_2fadmin_2fversion_2eproto[kIndexInFileMessages];
}


// ===================================================================

void GetVersionRequest::InitAsDefaultInstance() {
}
class GetVersionRequest::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GetVersionRequest::GetVersionRequest()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:flyteidl.admin.GetVersionRequest)
}
GetVersionRequest::GetVersionRequest(const GetVersionRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:flyteidl.admin.GetVersionRequest)
}

void GetVersionRequest::SharedCtor() {
}

GetVersionRequest::~GetVersionRequest() {
  // @@protoc_insertion_point(destructor:flyteidl.admin.GetVersionRequest)
  SharedDtor();
}

void GetVersionRequest::SharedDtor() {
}

void GetVersionRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const GetVersionRequest& GetVersionRequest::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_GetVersionRequest_flyteidl_2fadmin_2fversion_2eproto.base);
  return *internal_default_instance();
}


void GetVersionRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:flyteidl.admin.GetVersionRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* GetVersionRequest::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<GetVersionRequest*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      default: {
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool GetVersionRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:flyteidl.admin.GetVersionRequest)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, _internal_metadata_.mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:flyteidl.admin.GetVersionRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:flyteidl.admin.GetVersionRequest)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void GetVersionRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:flyteidl.admin.GetVersionRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:flyteidl.admin.GetVersionRequest)
}

::google::protobuf::uint8* GetVersionRequest::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:flyteidl.admin.GetVersionRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:flyteidl.admin.GetVersionRequest)
  return target;
}

size_t GetVersionRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:flyteidl.admin.GetVersionRequest)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GetVersionRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:flyteidl.admin.GetVersionRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const GetVersionRequest* source =
      ::google::protobuf::DynamicCastToGenerated<GetVersionRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:flyteidl.admin.GetVersionRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:flyteidl.admin.GetVersionRequest)
    MergeFrom(*source);
  }
}

void GetVersionRequest::MergeFrom(const GetVersionRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:flyteidl.admin.GetVersionRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void GetVersionRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:flyteidl.admin.GetVersionRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetVersionRequest::CopyFrom(const GetVersionRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:flyteidl.admin.GetVersionRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetVersionRequest::IsInitialized() const {
  return true;
}

void GetVersionRequest::Swap(GetVersionRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GetVersionRequest::InternalSwap(GetVersionRequest* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata GetVersionRequest::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_flyteidl_2fadmin_2fversion_2eproto);
  return ::file_level_metadata_flyteidl_2fadmin_2fversion_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace admin
}  // namespace flyteidl
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::flyteidl::admin::Version* Arena::CreateMaybeMessage< ::flyteidl::admin::Version >(Arena* arena) {
  return Arena::CreateInternal< ::flyteidl::admin::Version >(arena);
}
template<> PROTOBUF_NOINLINE ::flyteidl::admin::GetVersionRequest* Arena::CreateMaybeMessage< ::flyteidl::admin::GetVersionRequest >(Arena* arena) {
  return Arena::CreateInternal< ::flyteidl::admin::GetVersionRequest >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
