//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/network/mtp/entity/ProtoStruct.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityProtoStruct")
#ifdef RESTRICT_ImDiyalogCoreNetworkMtpEntityProtoStruct
#define INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityProtoStruct 0
#else
#define INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityProtoStruct 1
#endif
#undef RESTRICT_ImDiyalogCoreNetworkMtpEntityProtoStruct

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACProtoStruct_) && (INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityProtoStruct || defined(INCLUDE_ACProtoStruct))
#define ACProtoStruct_

#define RESTRICT_ImDiyalogCoreNetworkMtpEntityProtoObject 1
#define INCLUDE_ACProtoObject 1
#include "../../../../../../im/diyalog/core/network/mtp/entity/ProtoObject.h"

@class ARDataInput;
@class ARDataOutput;

@interface ACProtoStruct : ACProtoObject

#pragma mark Public

- (ACProtoObject *)readObjectWithARDataInput:(ARDataInput *)bs;

- (void)writeObjectWithARDataOutput:(ARDataOutput *)bs;

#pragma mark Protected

- (instancetype)init;

- (instancetype)initWithARDataInput:(ARDataInput *)stream;

- (jbyte)getHeader;

- (void)readBodyWithARDataInput:(ARDataInput *)bs;

- (void)writeBodyWithARDataOutput:(ARDataOutput *)bs;

@end

J2OBJC_EMPTY_STATIC_INIT(ACProtoStruct)

FOUNDATION_EXPORT void ACProtoStruct_initWithARDataInput_(ACProtoStruct *self, ARDataInput *stream);

FOUNDATION_EXPORT void ACProtoStruct_init(ACProtoStruct *self);

J2OBJC_TYPE_LITERAL_HEADER(ACProtoStruct)

@compatibility_alias ImDiyalogCoreNetworkMtpEntityProtoStruct ACProtoStruct;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityProtoStruct")
