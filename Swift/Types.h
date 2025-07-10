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

struct HeapObject {
    void *HeapMetadata_Kind;
};

struct MetadataResponse {
    struct Metadata *Value;
    size_t State;
};

#endif