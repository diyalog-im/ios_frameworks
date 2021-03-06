//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/network/mtp/entity/RequestDH.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityRequestDH")
#ifdef RESTRICT_ImDiyalogCoreNetworkMtpEntityRequestDH
#define INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityRequestDH 0
#else
#define INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityRequestDH 1
#endif
#undef RESTRICT_ImDiyalogCoreNetworkMtpEntityRequestDH

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACRequestDH_) && (INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityRequestDH || defined(INCLUDE_ACRequestDH))
#define ACRequestDH_

#define RESTRICT_ImDiyalogCoreNetworkMtpEntityProtoStruct 1
#define INCLUDE_ACProtoStruct 1
#include "../../../../../../im/diyalog/core/network/mtp/entity/ProtoStruct.h"

@class ARDataInput;
@class ARDataOutput;
@class IOSByteArray;

@interface ACRequestDH : ACProtoStruct

+ (jint)HEADER;

#pragma mark Public

- (instancetype)initWithARDataInput:(ARDataInput *)stream;

- (instancetype)initWithLong:(jlong)randomId
                    withLong:(jlong)keyId
               withByteArray:(IOSByteArray *)clientNonce
               withByteArray:(IOSByteArray *)clientKey;

#pragma mark Protected

- (jbyte)getHeader;

- (void)readBodyWithARDataInput:(ARDataInput *)bs;

- (void)writeBodyWithARDataOutput:(ARDataOutput *)bs;

@end

J2OBJC_EMPTY_STATIC_INIT(ACRequestDH)

inline jint ACRequestDH_get_HEADER();
#define ACRequestDH_HEADER 230
J2OBJC_STATIC_FIELD_CONSTANT(ACRequestDH, HEADER, jint)

FOUNDATION_EXPORT void ACRequestDH_initWithARDataInput_(ACRequestDH *self, ARDataInput *stream);

FOUNDATION_EXPORT ACRequestDH *new_ACRequestDH_initWithARDataInput_(ARDataInput *stream) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACRequestDH *create_ACRequestDH_initWithARDataInput_(ARDataInput *stream);

FOUNDATION_EXPORT void ACRequestDH_initWithLong_withLong_withByteArray_withByteArray_(ACRequestDH *self, jlong randomId, jlong keyId, IOSByteArray *clientNonce, IOSByteArray *clientKey);

FOUNDATION_EXPORT ACRequestDH *new_ACRequestDH_initWithLong_withLong_withByteArray_withByteArray_(jlong randomId, jlong keyId, IOSByteArray *clientNonce, IOSByteArray *clientKey) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACRequestDH *create_ACRequestDH_initWithLong_withLong_withByteArray_withByteArray_(jlong randomId, jlong keyId, IOSByteArray *clientNonce, IOSByteArray *clientKey);

J2OBJC_TYPE_LITERAL_HEADER(ACRequestDH)

@compatibility_alias ImDiyalogCoreNetworkMtpEntityRequestDH ACRequestDH;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityRequestDH")
