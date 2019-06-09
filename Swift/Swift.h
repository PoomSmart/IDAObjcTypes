#import "../Types.h"
#import "Types.h"
#import "../objc/Types.h"

bool swift_dynamicCast(opaque*, opaque*, type*, type*, size_t);
bool swift_isClassType(type*);
bool swift_isDeallocating(void *ptr);
bool swift_isEscapingClosureAtFileLocation(const struct HeapObject *object, const unsigned char *filename, int32_t filenameLength, int32_t line, int32_t col, unsigned type);
bool swift_isOptionalType(type*);
bool swift_isUniquelyReferenced_native(const struct HeapObject *);
bool swift_isUniquelyReferenced_nonNull_native(const struct HeapObject *);
bool swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject(uintptr_t bits);
bool swift_isUniquelyReferencedNonObjC_nonNull(const void *);
bool swift_isUniquelyReferencedNonObjC(const void *);

BoxPair swift_makeBoxUnique(OpaqueValue *buffer, Metadata *type, size_t alignMask);

const ProtocolWitnessTable *swift_getWitnessTable(const ProtocolConformanceDescriptor *conf, const Metadata *type, const void * const *instantiationArgs);
const WitnessTable *swift_getAssociatedConformanceWitness(WitnessTable *wtable, const Metadata *conformingType, const Metadata *assocType, const ProtocolRequirement *reqBase, const ProtocolRequirement *assocConformance);
const WitnessTable *swift_getOpaqueTypeConformance(const void * const *arguments, const OpaqueTypeDescriptor *descriptor, uintptr_t index);

error *swift_errorRetain(error *ptr);

float swift_intToFloat32(const size_t *data, IntegerLiteralFlags flags);

HeapObject *swift_initStackObject(HeapMetadata const *metadata, HeapObject *object);
HeapObject *swift_initStaticObject(HeapMetadata const *metadata, HeapObject *object);

id swift_dynamicCastMetatypeToObjectConditional(type *type);
id swift_dynamicCastMetatypeToObjectUnconditional(type *type);
id swift_dynamicCastObjCProtocolConditional(id object, size_t numProtocols, Protocol * const *protocols);
id swift_dynamicCastObjCProtocolUnconditional(id object, size_t numProtocols, Protocol * const *protocols);

int swift_getEnumCaseMultiPayload(opaque_t *obj, Metadata *enumTy);
int swift_getEnumTagSinglePayloadGeneric(opaque_t *obj, unsigned num_empty_cases, Metadata *payloadType, int (*getExtraInhabitantIndex)(opaque_t *obj, unsigned numPayloadXI, Metadata *payload));

Metadata *swift_allocateGenericClassMetadata(ClassDescriptor *type, const void * const *arguments, const void *template);
Metadata *swift_allocateGenericValueMetadata(ValueTypeDescriptor *type, const void * const *arguments, const void *template, size_t extraSize);
Metadata *swift_getDynamicType(opaque_t *obj, Metadata *self);
Metadata *swift_getExistentialMetatypeMetadata(Metadata *instanceTy);
Metadata *swift_getExistentialTypeMetadata(ProtocolClassConstraint classConstraint, const Metadata *superclassConstraint, size_t numProtocols, const ProtocolDescriptorRef *protocols);
Metadata *swift_getForeignTypeMetadata(Metadata *nonUnique);
Metadata *swift_getFunctionTypeMetadata(unsigned long flags, const Metadata **parameters, const uint32_t *parameterFlags, const Metadata *result);
Metadata *swift_getFunctionTypeMetadata0(unsigned long flags, const Metadata *resultMetadata);
Metadata *swift_getFunctionTypeMetadata1(unsigned long flags, const Metadata *arg0, const Metadata *resultMetadata);
Metadata *swift_getFunctionTypeMetadata2(unsigned long flags, const Metadata *arg0, const Metadata *arg1, const Metadata *resultMetadata);
Metadata *swift_getFunctionTypeMetadata3(unsigned long flags, const Metadata *arg0, const Metadata *arg1, const Metadata *arg2, const Metadata *resultMetadata);
Metadata *swift_getMetatypeMetadata(Metadata *instanceTy);
Metadata *swift_getObjCClassFromMetadata(objc_class *theClass);
Metadata *swift_getObjCClassFromObject(id object);
Metadata *swift_getObjCClassMetadata(objc_class *theClass);
Metadata *swift_getObjectType(id object);
Metadata *swift_relocateClassMetadata(TypeContextDescriptor *descriptor, const void *pattern);

MetadataDependency swift_initClassMetadata2(Metadata *self, ClassLayoutFlags flags, size_t numFields, TypeLayout * const *fieldTypes, size_t *fieldOffsets);
MetadataDependency swift_updateClassMetadata2(Metadata *self, ClassLayoutFlags flags, size_t numFields, TypeLayout * const *fieldTypes, size_t *fieldOffsets);

MetadataResponse swift_checkMetadataState(MetadataRequest request, const Metadata *type);
MetadataResponse swift_getAssociatedTypeWitness(MetadataRequest request, WitnessTable *wtable, const Metadata *conformingType, ProtocolRequirement *reqBase, ProtocolRequirement *assocType);
MetadataResponse swift_getGenericMetadata(MetadataRequest request, const void * const *arguments, TypeContextDescriptor *type);
MetadataResponse swift_getOpaqueTypeMetadata(MetadataRequest request, const void * const *arguments, const OpaqueTypeDescriptor *descriptor, uintptr_t index);
MetadataResponse swift_getSingletonMetadata(MetadataRequest request, TypeContextDescriptor *type);
MetadataResponse swift_getTupleTypeMetadata(MetadataRequest request, TupleTypeFlags flags, Metadata * const *elts, const char *labels, value_witness_table_t *proposed);
MetadataResponse swift_getTupleTypeMetadata2(MetadataRequest request, Metadata *elt0, Metadata *elt1, const char *labels, value_witness_table_t *proposed);
MetadataResponse swift_getTupleTypeMetadata3(MetadataRequest request, Metadata *elt0, Metadata *elt1, Metadata *elt2, const char *labels, value_witness_table_t *proposed);

objc_class *swift_dynamicCastObjCClassMetatype(objc_class*, objc_class*);
objc_class *swift_dynamicCastObjCClassMetatypeUnconditional(objc_class*, objc_class*);

OffsetPair swift_getTupleTypeLayout3(TypeLayout *layout, const TypeLayout *elt0, const TypeLayout *elt1, const TypeLayout *elt2);

RefCounted *swift_allocObject(Metadata *type, size_t size, size_t alignMask);

size_t swift_getTupleTypeLayout2(TypeLayout *layout, const TypeLayout *elt0, const TypeLayout *elt1);

type *swift_dynamicCastMetatype(type*, type*);
type *swift_dynamicCastMetatypeUnconditional(type*, type*);
type* swift_dynamicCastTypeToObjCProtocolConditional(type* object, size_t numProtocols, Protocol * const *protocols);
type* swift_dynamicCastTypeToObjCProtocolUnconditional(type* object, size_t numProtocols, Protocol * const *protocols);

void __tsan_external_write(void *addr, void *caller_pc, void *tag);
void _Block_release(void *block);

void *_Block_copy(void *block);
void *swift_bridgeObjectRetain(void *ptr);
void *swift_copyPOD(void *dest, void *src, Metadata *self);
void *swift_dynamicCastClass(void*, void*);
void *swift_dynamicCastClassUnconditional(void*, void*);
void *swift_dynamicCastObjCClass(void*, void*);
void *swift_dynamicCastObjCClassUnconditional(void*, void*);
void *swift_dynamicCastUnknownClass(void*, void*);
void *swift_dynamicCastUnknownClassUnconditional(void*, void*);
void *swift_lookUpClassMethod(Metadata *metadata, ClassDescriptor *description, MethodDescriptor *method);
void *swift_nonatomic_bridgeObjectRetain(void *ptr);
void *swift_nonatomic_retain_n(void *ptr, int32_t n);
void *swift_nonatomic_retain(void *ptr);
void *swift_nonatomic_unknownObjectRetain_n(void *ptr, int32_t n);
void *swift_nonatomic_unknownObjectRetain(void *ptr);
void *swift_release_n(void *ptr, int32_t n);
void *swift_retain_n(void *ptr, int32_t n);
void *swift_retain(void *ptr);
void *swift_slowAlloc(size_t size, size_t alignMask);
void *swift_tryRetain(void *ptr);
void *swift_unknownObjectRetain_n(void *ptr, int32_t n);
void *swift_unknownObjectRetain(void *ptr);

void swift_arrayAssignWithCopyBackToFront(opaque*, opaque*, size_t, type*);
void swift_arrayAssignWithCopyFrontToBack(opaque*, opaque*, size_t, type*);
void swift_arrayAssignWithCopyNoAlias(opaque*, opaque*, size_t, type*);
void swift_arrayAssignWithTake(opaque*, opaque*, size_t, type*);
void swift_arrayDestroy(opaque*, size_t, type*);
void swift_arrayInitWithCopy(opaque*, opaque*, size_t, type*);
void swift_arrayInitWithTakeBackToFront(opaque*, opaque*, size_t, type*);
void swift_arrayInitWithTakeFrontToBack(opaque*, opaque*, size_t, type*);
void swift_arrayInitWithTakeNoAlias(opaque*, opaque*, size_t, type*);
void swift_beginAccess(void *pointer, ValueBuffer *scratch, size_t flags);
void swift_bridgeObjectRelease_n(void *ptr, int32_t n);
void swift_bridgeObjectRetain_n(void *ptr, int32_t n);
void swift_bridgeRelease(void *ptr);
void swift_deallocClassInstance(HeapObject *obj, size_t size, size_t alignMask);
void swift_deallocObject(HeapObject *obj, size_t size, size_t alignMask);
void swift_deallocPartialClassInstance(HeapObject *obj, HeapMetadata *type, size_t size, size_t alignMask);
void swift_deallocUninitializedObject(HeapObject *obj, size_t size, size_t alignMask);
void swift_deletedMethodError();
void swift_endAccess(ValueBuffer *scratch);
void swift_errorInMain(error *ptr);
void swift_errorRelease(void *ptr);
void swift_getTupleTypeLayout(TypeLayout *result, uint32_t offsets, TupleTypeFlags flags, const TypeLayout * const *elts);
void swift_initClassMetadata(Metadata *self, ClassLayoutFlags flags, size_t numFields, TypeLayout * const *fieldTypes, size_t *fieldOffsets);
void swift_initEnumMetadataMultiPayload(Metadata *enumType, size_t numPayloads, TypeLayout * const *payloadTypes);
void swift_initEnumMetadataSingleCase(Metadata *enumType, EnumLayoutFlags flags, TypeLayout *payload);
void swift_initEnumMetadataSinglePayload(Metadata *enumType, EnumLayoutFlags flags, TypeLayout *payload, unsigned num_empty_cases);
void swift_initStructMetadata(Metadata *structType, StructLayoutFlags flags, size_t numFields, TypeLayout * const *fieldTypes, uint32_t *fieldOffsets);
void swift_nonatomic_bridgeObjectRelease_n(void *ptr, int32_t n);
void swift_nonatomic_bridgeObjectRetain_n(void *ptr, int32_t n);
void swift_nonatomic_bridgeRelease(void *ptr);
void swift_nonatomic_release_n(void *ptr, int32_t n);
void swift_nonatomic_release(void *ptr);
void swift_nonatomic_unknownObjectRelease_n(void *ptr, int32_t n);
void swift_nonatomic_unknownObjectRelease(void *ptr);
void swift_objc_swift3ImplicitObjCEntrypoint(id self, SEL selector);
void swift_once(swift_once_t *predicate, void (*function_code)(RefCounted*), void *context);
void swift_registerProtocolConformances(const ProtocolConformanceRecord *begin, const ProtocolConformanceRecord *end);
void swift_registerProtocols(const ProtocolRecord *begin, const ProtocolRecord *end);
void swift_release(void *ptr);
void swift_setDeallocating(void *ptr);
void swift_slowDealloc(void *ptr, size_t size, size_t alignMask);
void swift_storeEnumTagMultiPayload(opaque_t *obj, Metadata *enumTy, int case_index);
void swift_storeEnumTagSinglePayloadGeneric(opaque_t *obj, unsigned case_index, unsigned num_empty_cases, Metadata *payloadType, void (*storeExtraInhabitant)(opaque_t *obj, unsigned case_index, unsigned numPayloadXI, Metadata *payload));
void swift_unexpectedError(error *ptr);
void swift_unknownObjectRelease_n(void *ptr, int32_t n);
void swift_unknownObjectRelease(void *ptr);
void swift_updateClassMetadata(Metadata *self, ClassLayoutFlags flags, size_t numFields, TypeLayout * const *fieldTypes, size_t *fieldOffsets);
void swift_verifyEndOfLifetime(HeapObject *object);
void swift_willThrow(error *ptr);

witness_table* swift_conformsToProtocol(type*, protocol*);