#ifndef SWIFT_H_
#define SWIFT_H_

typedef struct HeapObject *HeapObject;
typedef struct OpaqueValue *OpaqueValue;
typedef struct Metadata *Metadata;
typedef struct HeapMetadata *HeapMetadata;
typedef struct WitnessTable *WitnessTable;
typedef struct ProtocolRequirement *ProtocolRequirement;
typedef struct ClassDescriptor *ClassDescriptor;
typedef struct MethodDescriptor *MethodDescriptor;
typedef struct TypeContextDescriptor *TypeContextDescriptor;
typedef struct ValueTypeDescriptor *ValueTypeDescriptor;
typedef struct OpaqueTypeDescriptor *OpaqueTypeDescriptor;
typedef struct ProtocolConformanceDescriptor *ProtocolConformanceDescriptor;
typedef struct TypeLayout *TypeLayout;
typedef struct ProtocolRecord *ProtocolRecord;
typedef struct ProtocolConformanceRecord *ProtocolConformanceRecord;
typedef struct ProtocolClassConstraint *ProtocolClassConstraint;
typedef struct MetadataDependency *MetadataDependency;
typedef struct MetadataResponse *MetadataResponse;
typedef struct MetadataRequest *MetadataRequest;
typedef struct ProtocolDescriptorRef *ProtocolDescriptorRef;
typedef struct BoxPair *BoxPair;
typedef struct ValueBuffer *ValueBuffer;

typedef struct opaque *opaque;
typedef struct type *type;
typedef struct error *error;

class ProtocolWitnessTable;
class IntegerLiteralFlags;
class TupleTypeFlags;
class EnumLayoutFlags;
class ClassLayoutFlags;
class StructLayoutFlags;

// Metadata kind constants (low bits of Metadata::Kind)
// RE: from Swift ABI / swift/ABI/MetadataKind.def
#define MetadataKind_Class        0x0
#define MetadataKind_Struct       0x200
#define MetadataKind_Enum         0x201
#define MetadataKind_Optional     0x202
#define MetadataKind_Tuple        0x301
#define MetadataKind_Function     0x302
#define MetadataKind_Existential  0x303
#define MetadataKind_Metatype     0x304
#define MetadataKind_ObjCWrapper  0x305

// RE: swift/ABI/Metadata.h — TypeMetadataHeader / TargetHeapMetadata
struct HeapMetadata {
    uintptr_t Kind;   // low bits encode MetadataKind; class metadata stores isa
};

// RE: swift/ABI/HeapObject.h — TargetHeapObject
// Every Swift heap-allocated object begins with this header.
struct HeapObject {
    struct HeapMetadata *metadata;
    // Strong reference count (inline; format is runtime-internal)
    uint32_t strongRefCount;
    // Unowned reference count
    uint32_t unownedRefCount;
};

// RE: swift/ABI/Metadata.h — TargetMetadata
// Base layout shared by all metadata kinds.
struct Metadata {
    // For class objects this is the isa pointer; for non-class kinds this is
    // a MetadataKind constant (see MetadataKind_* above).
    uintptr_t Kind;
};

// RE: swift/ABI/Metadata.h — TargetClassMetadata
// Full class metadata layout (simplified).
struct ClassMetadata {
    // TargetHeapMetadata (isa / Kind)
    uintptr_t Kind;
    // Superclass metadata pointer (NULL for root classes)
    struct ClassMetadata *superclass;
    // ObjC cache data (reserved / unused on pure Swift classes)
    void *cache[2];
    // Flags, instance size, instance alignment, etc. (packed into a uintptr_t
    // on non-ObjC classes; stored as separate fields on ObjC-rooted classes)
    uintptr_t rodataAndFlags;
    uint32_t classFlags;
    uint32_t instanceAddressPoint;
    uint32_t instanceSize;
    uint16_t instanceAlignMask;
    uint16_t reserved;
    uint32_t classSize;
    uint32_t classAddressPoint;
    void *description;  // TypeContextDescriptor *
    void *ivarDestroyer;
};

// RE: swift/ABI/Metadata.h — TargetStructMetadata
struct StructMetadata {
    uintptr_t Kind;
    void *description;  // StructDescriptor *
};

// RE: swift/ABI/Metadata.h — TargetEnumMetadata
struct EnumMetadata {
    uintptr_t Kind;
    void *description;  // EnumDescriptor *
};

// RE: swift/ABI/Metadata.h — TargetTupleTypeMetadata
struct TupleElement {
    struct Metadata *Type;
    size_t Offset;
};

struct TupleTypeMetadata {
    uintptr_t Kind;
    size_t NumElements;
    const char *Labels;
    struct TupleElement Elements[1];
};

// RE: swift/ABI/Metadata.h — TargetExistentialTypeMetadata
struct ExistentialTypeMetadata {
    uintptr_t Kind;
    uint32_t Flags;
    uint32_t NumProtocols;
    // Followed by protocol descriptor pointers
};

// RE: swift/Concurrency/Task.h — AsyncTask (simplified, Swift 5.5+)
struct AsyncTask {
    // Inherits HeapObject header
    struct HeapMetadata *metadata;
    uint32_t strongRefCount;
    uint32_t unownedRefCount;
    // Scheduler / job flags
    uint32_t Flags;
    // Function pointer to the async task function
    void *RunJob;
    // Task-private storage (size varies by platform)
    void *PrivateStorage[14];
};

// RE: swift/Concurrency/Actor.h — DefaultActor (simplified)
struct DefaultActor {
    // HeapObject header
    struct HeapObject HeapHeader;
    // Two words of private scheduler storage
    void *PrivateData[2];
};

struct MetadataResponse {
    struct Metadata *Value;
    size_t State;
};

// value_witness_table_t — RE: swift/ABI/ValueWitness.h (abbreviated)
typedef struct value_witness_table_t {
    void *initializeBufferWithCopyOfBuffer;
    void *destroy;
    void *initializeWithCopy;
    void *assignWithCopy;
    void *initializeWithTake;
    void *assignWithTake;
    void *getEnumTagSinglePayload;
    void *storeEnumTagSinglePayload;
    size_t size;
    size_t stride;
    uint32_t flags;
    uint32_t extraInhabitantCount;
} value_witness_table_t;

typedef struct opaque_t {
    void *data[3];
} opaque_t;

typedef struct OffsetPair {
    size_t first;
    size_t second;
} OffsetPair;

#endif