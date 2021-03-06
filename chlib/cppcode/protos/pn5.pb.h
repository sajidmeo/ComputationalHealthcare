// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pn5.proto

#ifndef PROTOBUF_pn5_2eproto__INCLUDED
#define PROTOBUF_pn5_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_pn5_2eproto();
void protobuf_AssignDesc_pn5_2eproto();
void protobuf_ShutdownFile_pn5_2eproto();

class PIndex;
class VIndex;
class IMeta;
class IndexFile;

// ===================================================================

class PIndex : public ::google::protobuf::Message {
 public:
  PIndex();
  virtual ~PIndex();

  PIndex(const PIndex& from);

  inline PIndex& operator=(const PIndex& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PIndex& default_instance();

  void Swap(PIndex* other);

  // implements Message ----------------------------------------------

  PIndex* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PIndex& from);
  void MergeFrom(const PIndex& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string patient_key = 1;
  inline bool has_patient_key() const;
  inline void clear_patient_key();
  static const int kPatientKeyFieldNumber = 1;
  inline const ::std::string& patient_key() const;
  inline void set_patient_key(const ::std::string& value);
  inline void set_patient_key(const char* value);
  inline void set_patient_key(const char* value, size_t size);
  inline ::std::string* mutable_patient_key();
  inline ::std::string* release_patient_key();
  inline void set_allocated_patient_key(::std::string* patient_key);

  // required int64 position = 2;
  inline bool has_position() const;
  inline void clear_position();
  static const int kPositionFieldNumber = 2;
  inline ::google::protobuf::int64 position() const;
  inline void set_position(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:PIndex)
 private:
  inline void set_has_patient_key();
  inline void clear_has_patient_key();
  inline void set_has_position();
  inline void clear_has_position();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* patient_key_;
  ::google::protobuf::int64 position_;
  friend void  protobuf_AddDesc_pn5_2eproto();
  friend void protobuf_AssignDesc_pn5_2eproto();
  friend void protobuf_ShutdownFile_pn5_2eproto();

  void InitAsDefaultInstance();
  static PIndex* default_instance_;
};
// -------------------------------------------------------------------

class VIndex : public ::google::protobuf::Message {
 public:
  VIndex();
  virtual ~VIndex();

  VIndex(const VIndex& from);

  inline VIndex& operator=(const VIndex& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const VIndex& default_instance();

  void Swap(VIndex* other);

  // implements Message ----------------------------------------------

  VIndex* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const VIndex& from);
  void MergeFrom(const VIndex& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string key = 1;
  inline bool has_key() const;
  inline void clear_key();
  static const int kKeyFieldNumber = 1;
  inline const ::std::string& key() const;
  inline void set_key(const ::std::string& value);
  inline void set_key(const char* value);
  inline void set_key(const char* value, size_t size);
  inline ::std::string* mutable_key();
  inline ::std::string* release_key();
  inline void set_allocated_key(::std::string* key);

  // required int64 position = 2;
  inline bool has_position() const;
  inline void clear_position();
  static const int kPositionFieldNumber = 2;
  inline ::google::protobuf::int64 position() const;
  inline void set_position(::google::protobuf::int64 value);

  // optional int32 meta = 3;
  inline bool has_meta() const;
  inline void clear_meta();
  static const int kMetaFieldNumber = 3;
  inline ::google::protobuf::int32 meta() const;
  inline void set_meta(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:VIndex)
 private:
  inline void set_has_key();
  inline void clear_has_key();
  inline void set_has_position();
  inline void clear_has_position();
  inline void set_has_meta();
  inline void clear_has_meta();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* key_;
  ::google::protobuf::int64 position_;
  ::google::protobuf::int32 meta_;
  friend void  protobuf_AddDesc_pn5_2eproto();
  friend void protobuf_AssignDesc_pn5_2eproto();
  friend void protobuf_ShutdownFile_pn5_2eproto();

  void InitAsDefaultInstance();
  static VIndex* default_instance_;
};
// -------------------------------------------------------------------

class IMeta : public ::google::protobuf::Message {
 public:
  IMeta();
  virtual ~IMeta();

  IMeta(const IMeta& from);

  inline IMeta& operator=(const IMeta& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const IMeta& default_instance();

  void Swap(IMeta* other);

  // implements Message ----------------------------------------------

  IMeta* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const IMeta& from);
  void MergeFrom(const IMeta& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 index = 1;
  inline bool has_index() const;
  inline void clear_index();
  static const int kIndexFieldNumber = 1;
  inline ::google::protobuf::int32 index() const;
  inline void set_index(::google::protobuf::int32 value);

  // optional string ftype = 5;
  inline bool has_ftype() const;
  inline void clear_ftype();
  static const int kFtypeFieldNumber = 5;
  inline const ::std::string& ftype() const;
  inline void set_ftype(const ::std::string& value);
  inline void set_ftype(const char* value);
  inline void set_ftype(const char* value, size_t size);
  inline ::std::string* mutable_ftype();
  inline ::std::string* release_ftype();
  inline void set_allocated_ftype(::std::string* ftype);

  // optional int32 year = 2;
  inline bool has_year() const;
  inline void clear_year();
  static const int kYearFieldNumber = 2;
  inline ::google::protobuf::int32 year() const;
  inline void set_year(::google::protobuf::int32 value);

  // optional string dtype = 3;
  inline bool has_dtype() const;
  inline void clear_dtype();
  static const int kDtypeFieldNumber = 3;
  inline const ::std::string& dtype() const;
  inline void set_dtype(const ::std::string& value);
  inline void set_dtype(const char* value);
  inline void set_dtype(const char* value, size_t size);
  inline ::std::string* mutable_dtype();
  inline ::std::string* release_dtype();
  inline void set_allocated_dtype(::std::string* dtype);

  // optional string state = 4;
  inline bool has_state() const;
  inline void clear_state();
  static const int kStateFieldNumber = 4;
  inline const ::std::string& state() const;
  inline void set_state(const ::std::string& value);
  inline void set_state(const char* value);
  inline void set_state(const char* value, size_t size);
  inline ::std::string* mutable_state();
  inline ::std::string* release_state();
  inline void set_allocated_state(::std::string* state);

  // @@protoc_insertion_point(class_scope:IMeta)
 private:
  inline void set_has_index();
  inline void clear_has_index();
  inline void set_has_ftype();
  inline void clear_has_ftype();
  inline void set_has_year();
  inline void clear_has_year();
  inline void set_has_dtype();
  inline void clear_has_dtype();
  inline void set_has_state();
  inline void clear_has_state();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* ftype_;
  ::google::protobuf::int32 index_;
  ::google::protobuf::int32 year_;
  ::std::string* dtype_;
  ::std::string* state_;
  friend void  protobuf_AddDesc_pn5_2eproto();
  friend void protobuf_AssignDesc_pn5_2eproto();
  friend void protobuf_ShutdownFile_pn5_2eproto();

  void InitAsDefaultInstance();
  static IMeta* default_instance_;
};
// -------------------------------------------------------------------

class IndexFile : public ::google::protobuf::Message {
 public:
  IndexFile();
  virtual ~IndexFile();

  IndexFile(const IndexFile& from);

  inline IndexFile& operator=(const IndexFile& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const IndexFile& default_instance();

  void Swap(IndexFile* other);

  // implements Message ----------------------------------------------

  IndexFile* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const IndexFile& from);
  void MergeFrom(const IndexFile& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .PIndex patients = 1;
  inline int patients_size() const;
  inline void clear_patients();
  static const int kPatientsFieldNumber = 1;
  inline const ::PIndex& patients(int index) const;
  inline ::PIndex* mutable_patients(int index);
  inline ::PIndex* add_patients();
  inline const ::google::protobuf::RepeatedPtrField< ::PIndex >&
      patients() const;
  inline ::google::protobuf::RepeatedPtrField< ::PIndex >*
      mutable_patients();

  // repeated .VIndex visits = 2;
  inline int visits_size() const;
  inline void clear_visits();
  static const int kVisitsFieldNumber = 2;
  inline const ::VIndex& visits(int index) const;
  inline ::VIndex* mutable_visits(int index);
  inline ::VIndex* add_visits();
  inline const ::google::protobuf::RepeatedPtrField< ::VIndex >&
      visits() const;
  inline ::google::protobuf::RepeatedPtrField< ::VIndex >*
      mutable_visits();

  // repeated .IMeta metadata = 3;
  inline int metadata_size() const;
  inline void clear_metadata();
  static const int kMetadataFieldNumber = 3;
  inline const ::IMeta& metadata(int index) const;
  inline ::IMeta* mutable_metadata(int index);
  inline ::IMeta* add_metadata();
  inline const ::google::protobuf::RepeatedPtrField< ::IMeta >&
      metadata() const;
  inline ::google::protobuf::RepeatedPtrField< ::IMeta >*
      mutable_metadata();

  // required string filename = 4;
  inline bool has_filename() const;
  inline void clear_filename();
  static const int kFilenameFieldNumber = 4;
  inline const ::std::string& filename() const;
  inline void set_filename(const ::std::string& value);
  inline void set_filename(const char* value);
  inline void set_filename(const char* value, size_t size);
  inline ::std::string* mutable_filename();
  inline ::std::string* release_filename();
  inline void set_allocated_filename(::std::string* filename);

  // @@protoc_insertion_point(class_scope:IndexFile)
 private:
  inline void set_has_filename();
  inline void clear_has_filename();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::PIndex > patients_;
  ::google::protobuf::RepeatedPtrField< ::VIndex > visits_;
  ::google::protobuf::RepeatedPtrField< ::IMeta > metadata_;
  ::std::string* filename_;
  friend void  protobuf_AddDesc_pn5_2eproto();
  friend void protobuf_AssignDesc_pn5_2eproto();
  friend void protobuf_ShutdownFile_pn5_2eproto();

  void InitAsDefaultInstance();
  static IndexFile* default_instance_;
};
// ===================================================================


// ===================================================================

// PIndex

// required string patient_key = 1;
inline bool PIndex::has_patient_key() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PIndex::set_has_patient_key() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PIndex::clear_has_patient_key() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PIndex::clear_patient_key() {
  if (patient_key_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    patient_key_->clear();
  }
  clear_has_patient_key();
}
inline const ::std::string& PIndex::patient_key() const {
  // @@protoc_insertion_point(field_get:PIndex.patient_key)
  return *patient_key_;
}
inline void PIndex::set_patient_key(const ::std::string& value) {
  set_has_patient_key();
  if (patient_key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    patient_key_ = new ::std::string;
  }
  patient_key_->assign(value);
  // @@protoc_insertion_point(field_set:PIndex.patient_key)
}
inline void PIndex::set_patient_key(const char* value) {
  set_has_patient_key();
  if (patient_key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    patient_key_ = new ::std::string;
  }
  patient_key_->assign(value);
  // @@protoc_insertion_point(field_set_char:PIndex.patient_key)
}
inline void PIndex::set_patient_key(const char* value, size_t size) {
  set_has_patient_key();
  if (patient_key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    patient_key_ = new ::std::string;
  }
  patient_key_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:PIndex.patient_key)
}
inline ::std::string* PIndex::mutable_patient_key() {
  set_has_patient_key();
  if (patient_key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    patient_key_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:PIndex.patient_key)
  return patient_key_;
}
inline ::std::string* PIndex::release_patient_key() {
  clear_has_patient_key();
  if (patient_key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = patient_key_;
    patient_key_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void PIndex::set_allocated_patient_key(::std::string* patient_key) {
  if (patient_key_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete patient_key_;
  }
  if (patient_key) {
    set_has_patient_key();
    patient_key_ = patient_key;
  } else {
    clear_has_patient_key();
    patient_key_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:PIndex.patient_key)
}

// required int64 position = 2;
inline bool PIndex::has_position() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PIndex::set_has_position() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PIndex::clear_has_position() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PIndex::clear_position() {
  position_ = GOOGLE_LONGLONG(0);
  clear_has_position();
}
inline ::google::protobuf::int64 PIndex::position() const {
  // @@protoc_insertion_point(field_get:PIndex.position)
  return position_;
}
inline void PIndex::set_position(::google::protobuf::int64 value) {
  set_has_position();
  position_ = value;
  // @@protoc_insertion_point(field_set:PIndex.position)
}

// -------------------------------------------------------------------

// VIndex

// required string key = 1;
inline bool VIndex::has_key() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void VIndex::set_has_key() {
  _has_bits_[0] |= 0x00000001u;
}
inline void VIndex::clear_has_key() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void VIndex::clear_key() {
  if (key_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    key_->clear();
  }
  clear_has_key();
}
inline const ::std::string& VIndex::key() const {
  // @@protoc_insertion_point(field_get:VIndex.key)
  return *key_;
}
inline void VIndex::set_key(const ::std::string& value) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    key_ = new ::std::string;
  }
  key_->assign(value);
  // @@protoc_insertion_point(field_set:VIndex.key)
}
inline void VIndex::set_key(const char* value) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    key_ = new ::std::string;
  }
  key_->assign(value);
  // @@protoc_insertion_point(field_set_char:VIndex.key)
}
inline void VIndex::set_key(const char* value, size_t size) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    key_ = new ::std::string;
  }
  key_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:VIndex.key)
}
inline ::std::string* VIndex::mutable_key() {
  set_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    key_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:VIndex.key)
  return key_;
}
inline ::std::string* VIndex::release_key() {
  clear_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = key_;
    key_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void VIndex::set_allocated_key(::std::string* key) {
  if (key_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete key_;
  }
  if (key) {
    set_has_key();
    key_ = key;
  } else {
    clear_has_key();
    key_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:VIndex.key)
}

// required int64 position = 2;
inline bool VIndex::has_position() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void VIndex::set_has_position() {
  _has_bits_[0] |= 0x00000002u;
}
inline void VIndex::clear_has_position() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void VIndex::clear_position() {
  position_ = GOOGLE_LONGLONG(0);
  clear_has_position();
}
inline ::google::protobuf::int64 VIndex::position() const {
  // @@protoc_insertion_point(field_get:VIndex.position)
  return position_;
}
inline void VIndex::set_position(::google::protobuf::int64 value) {
  set_has_position();
  position_ = value;
  // @@protoc_insertion_point(field_set:VIndex.position)
}

// optional int32 meta = 3;
inline bool VIndex::has_meta() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void VIndex::set_has_meta() {
  _has_bits_[0] |= 0x00000004u;
}
inline void VIndex::clear_has_meta() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void VIndex::clear_meta() {
  meta_ = 0;
  clear_has_meta();
}
inline ::google::protobuf::int32 VIndex::meta() const {
  // @@protoc_insertion_point(field_get:VIndex.meta)
  return meta_;
}
inline void VIndex::set_meta(::google::protobuf::int32 value) {
  set_has_meta();
  meta_ = value;
  // @@protoc_insertion_point(field_set:VIndex.meta)
}

// -------------------------------------------------------------------

// IMeta

// required int32 index = 1;
inline bool IMeta::has_index() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void IMeta::set_has_index() {
  _has_bits_[0] |= 0x00000001u;
}
inline void IMeta::clear_has_index() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void IMeta::clear_index() {
  index_ = 0;
  clear_has_index();
}
inline ::google::protobuf::int32 IMeta::index() const {
  // @@protoc_insertion_point(field_get:IMeta.index)
  return index_;
}
inline void IMeta::set_index(::google::protobuf::int32 value) {
  set_has_index();
  index_ = value;
  // @@protoc_insertion_point(field_set:IMeta.index)
}

// optional string ftype = 5;
inline bool IMeta::has_ftype() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void IMeta::set_has_ftype() {
  _has_bits_[0] |= 0x00000002u;
}
inline void IMeta::clear_has_ftype() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void IMeta::clear_ftype() {
  if (ftype_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    ftype_->clear();
  }
  clear_has_ftype();
}
inline const ::std::string& IMeta::ftype() const {
  // @@protoc_insertion_point(field_get:IMeta.ftype)
  return *ftype_;
}
inline void IMeta::set_ftype(const ::std::string& value) {
  set_has_ftype();
  if (ftype_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    ftype_ = new ::std::string;
  }
  ftype_->assign(value);
  // @@protoc_insertion_point(field_set:IMeta.ftype)
}
inline void IMeta::set_ftype(const char* value) {
  set_has_ftype();
  if (ftype_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    ftype_ = new ::std::string;
  }
  ftype_->assign(value);
  // @@protoc_insertion_point(field_set_char:IMeta.ftype)
}
inline void IMeta::set_ftype(const char* value, size_t size) {
  set_has_ftype();
  if (ftype_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    ftype_ = new ::std::string;
  }
  ftype_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:IMeta.ftype)
}
inline ::std::string* IMeta::mutable_ftype() {
  set_has_ftype();
  if (ftype_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    ftype_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:IMeta.ftype)
  return ftype_;
}
inline ::std::string* IMeta::release_ftype() {
  clear_has_ftype();
  if (ftype_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = ftype_;
    ftype_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void IMeta::set_allocated_ftype(::std::string* ftype) {
  if (ftype_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete ftype_;
  }
  if (ftype) {
    set_has_ftype();
    ftype_ = ftype;
  } else {
    clear_has_ftype();
    ftype_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:IMeta.ftype)
}

// optional int32 year = 2;
inline bool IMeta::has_year() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void IMeta::set_has_year() {
  _has_bits_[0] |= 0x00000004u;
}
inline void IMeta::clear_has_year() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void IMeta::clear_year() {
  year_ = 0;
  clear_has_year();
}
inline ::google::protobuf::int32 IMeta::year() const {
  // @@protoc_insertion_point(field_get:IMeta.year)
  return year_;
}
inline void IMeta::set_year(::google::protobuf::int32 value) {
  set_has_year();
  year_ = value;
  // @@protoc_insertion_point(field_set:IMeta.year)
}

// optional string dtype = 3;
inline bool IMeta::has_dtype() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void IMeta::set_has_dtype() {
  _has_bits_[0] |= 0x00000008u;
}
inline void IMeta::clear_has_dtype() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void IMeta::clear_dtype() {
  if (dtype_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    dtype_->clear();
  }
  clear_has_dtype();
}
inline const ::std::string& IMeta::dtype() const {
  // @@protoc_insertion_point(field_get:IMeta.dtype)
  return *dtype_;
}
inline void IMeta::set_dtype(const ::std::string& value) {
  set_has_dtype();
  if (dtype_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    dtype_ = new ::std::string;
  }
  dtype_->assign(value);
  // @@protoc_insertion_point(field_set:IMeta.dtype)
}
inline void IMeta::set_dtype(const char* value) {
  set_has_dtype();
  if (dtype_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    dtype_ = new ::std::string;
  }
  dtype_->assign(value);
  // @@protoc_insertion_point(field_set_char:IMeta.dtype)
}
inline void IMeta::set_dtype(const char* value, size_t size) {
  set_has_dtype();
  if (dtype_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    dtype_ = new ::std::string;
  }
  dtype_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:IMeta.dtype)
}
inline ::std::string* IMeta::mutable_dtype() {
  set_has_dtype();
  if (dtype_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    dtype_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:IMeta.dtype)
  return dtype_;
}
inline ::std::string* IMeta::release_dtype() {
  clear_has_dtype();
  if (dtype_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = dtype_;
    dtype_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void IMeta::set_allocated_dtype(::std::string* dtype) {
  if (dtype_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete dtype_;
  }
  if (dtype) {
    set_has_dtype();
    dtype_ = dtype;
  } else {
    clear_has_dtype();
    dtype_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:IMeta.dtype)
}

// optional string state = 4;
inline bool IMeta::has_state() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void IMeta::set_has_state() {
  _has_bits_[0] |= 0x00000010u;
}
inline void IMeta::clear_has_state() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void IMeta::clear_state() {
  if (state_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    state_->clear();
  }
  clear_has_state();
}
inline const ::std::string& IMeta::state() const {
  // @@protoc_insertion_point(field_get:IMeta.state)
  return *state_;
}
inline void IMeta::set_state(const ::std::string& value) {
  set_has_state();
  if (state_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    state_ = new ::std::string;
  }
  state_->assign(value);
  // @@protoc_insertion_point(field_set:IMeta.state)
}
inline void IMeta::set_state(const char* value) {
  set_has_state();
  if (state_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    state_ = new ::std::string;
  }
  state_->assign(value);
  // @@protoc_insertion_point(field_set_char:IMeta.state)
}
inline void IMeta::set_state(const char* value, size_t size) {
  set_has_state();
  if (state_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    state_ = new ::std::string;
  }
  state_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:IMeta.state)
}
inline ::std::string* IMeta::mutable_state() {
  set_has_state();
  if (state_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    state_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:IMeta.state)
  return state_;
}
inline ::std::string* IMeta::release_state() {
  clear_has_state();
  if (state_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = state_;
    state_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void IMeta::set_allocated_state(::std::string* state) {
  if (state_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete state_;
  }
  if (state) {
    set_has_state();
    state_ = state;
  } else {
    clear_has_state();
    state_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:IMeta.state)
}

// -------------------------------------------------------------------

// IndexFile

// repeated .PIndex patients = 1;
inline int IndexFile::patients_size() const {
  return patients_.size();
}
inline void IndexFile::clear_patients() {
  patients_.Clear();
}
inline const ::PIndex& IndexFile::patients(int index) const {
  // @@protoc_insertion_point(field_get:IndexFile.patients)
  return patients_.Get(index);
}
inline ::PIndex* IndexFile::mutable_patients(int index) {
  // @@protoc_insertion_point(field_mutable:IndexFile.patients)
  return patients_.Mutable(index);
}
inline ::PIndex* IndexFile::add_patients() {
  // @@protoc_insertion_point(field_add:IndexFile.patients)
  return patients_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::PIndex >&
IndexFile::patients() const {
  // @@protoc_insertion_point(field_list:IndexFile.patients)
  return patients_;
}
inline ::google::protobuf::RepeatedPtrField< ::PIndex >*
IndexFile::mutable_patients() {
  // @@protoc_insertion_point(field_mutable_list:IndexFile.patients)
  return &patients_;
}

// repeated .VIndex visits = 2;
inline int IndexFile::visits_size() const {
  return visits_.size();
}
inline void IndexFile::clear_visits() {
  visits_.Clear();
}
inline const ::VIndex& IndexFile::visits(int index) const {
  // @@protoc_insertion_point(field_get:IndexFile.visits)
  return visits_.Get(index);
}
inline ::VIndex* IndexFile::mutable_visits(int index) {
  // @@protoc_insertion_point(field_mutable:IndexFile.visits)
  return visits_.Mutable(index);
}
inline ::VIndex* IndexFile::add_visits() {
  // @@protoc_insertion_point(field_add:IndexFile.visits)
  return visits_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::VIndex >&
IndexFile::visits() const {
  // @@protoc_insertion_point(field_list:IndexFile.visits)
  return visits_;
}
inline ::google::protobuf::RepeatedPtrField< ::VIndex >*
IndexFile::mutable_visits() {
  // @@protoc_insertion_point(field_mutable_list:IndexFile.visits)
  return &visits_;
}

// repeated .IMeta metadata = 3;
inline int IndexFile::metadata_size() const {
  return metadata_.size();
}
inline void IndexFile::clear_metadata() {
  metadata_.Clear();
}
inline const ::IMeta& IndexFile::metadata(int index) const {
  // @@protoc_insertion_point(field_get:IndexFile.metadata)
  return metadata_.Get(index);
}
inline ::IMeta* IndexFile::mutable_metadata(int index) {
  // @@protoc_insertion_point(field_mutable:IndexFile.metadata)
  return metadata_.Mutable(index);
}
inline ::IMeta* IndexFile::add_metadata() {
  // @@protoc_insertion_point(field_add:IndexFile.metadata)
  return metadata_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::IMeta >&
IndexFile::metadata() const {
  // @@protoc_insertion_point(field_list:IndexFile.metadata)
  return metadata_;
}
inline ::google::protobuf::RepeatedPtrField< ::IMeta >*
IndexFile::mutable_metadata() {
  // @@protoc_insertion_point(field_mutable_list:IndexFile.metadata)
  return &metadata_;
}

// required string filename = 4;
inline bool IndexFile::has_filename() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void IndexFile::set_has_filename() {
  _has_bits_[0] |= 0x00000008u;
}
inline void IndexFile::clear_has_filename() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void IndexFile::clear_filename() {
  if (filename_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    filename_->clear();
  }
  clear_has_filename();
}
inline const ::std::string& IndexFile::filename() const {
  // @@protoc_insertion_point(field_get:IndexFile.filename)
  return *filename_;
}
inline void IndexFile::set_filename(const ::std::string& value) {
  set_has_filename();
  if (filename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    filename_ = new ::std::string;
  }
  filename_->assign(value);
  // @@protoc_insertion_point(field_set:IndexFile.filename)
}
inline void IndexFile::set_filename(const char* value) {
  set_has_filename();
  if (filename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    filename_ = new ::std::string;
  }
  filename_->assign(value);
  // @@protoc_insertion_point(field_set_char:IndexFile.filename)
}
inline void IndexFile::set_filename(const char* value, size_t size) {
  set_has_filename();
  if (filename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    filename_ = new ::std::string;
  }
  filename_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:IndexFile.filename)
}
inline ::std::string* IndexFile::mutable_filename() {
  set_has_filename();
  if (filename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    filename_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:IndexFile.filename)
  return filename_;
}
inline ::std::string* IndexFile::release_filename() {
  clear_has_filename();
  if (filename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = filename_;
    filename_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void IndexFile::set_allocated_filename(::std::string* filename) {
  if (filename_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete filename_;
  }
  if (filename) {
    set_has_filename();
    filename_ = filename;
  } else {
    clear_has_filename();
    filename_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:IndexFile.filename)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_pn5_2eproto__INCLUDED
