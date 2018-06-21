//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/network/mtp/entity/Drop.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityDrop")
#ifdef RESTRICT_ImDiyalogCoreNetworkMtpEntityDrop
#define INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityDrop 0
#else
#define INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityDrop 1
#endif
#undef RESTRICT_ImDiyalogCoreNetworkMtpEntityDrop

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACDrop_) && (INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityDrop || defined(INCLUDE_ACDrop))
#define ACDrop_

#define RESTRICT_ImDiyalogCoreNetworkMtpEntityProtoStruct 1
#define INCLUDE_ACProtoStruct 1
#include "../../../../../../im/diyalog/core/network/mtp/entity/ProtoStruct.h"

@class ARDataInput;
@class ARDataOutput;

@interface ACDrop : ACProtoStruct {
 @public
  jlong messageId_;
  NSString *message_;
}

+ (jbyte)HEADER;

#pragma mark Public

- (instancetype)initWithARDataInput:(ARDataInput *)stream;

- (instancetype)initWithLong:(jlong)messageId
                withNSString:(NSString *)message;

- (NSString *)getMessage;

- (jlong)getMessageId;

- (NSString *)description;

#pragma mark Protected

- (jbyte)getHeader;

- (void)readBodyWithARDataInput:(ARDataInput *)bs;

- (void)writeBodyWithARDataOutput:(ARDataOutput *)bs;

@end

J2OBJC_EMPTY_STATIC_INIT(ACDrop)

J2OBJC_FIELD_SETTER(ACDrop, message_, NSString *)

inline jbyte ACDrop_get_HEADER();
#define ACDrop_HEADER 13
J2OBJC_STATIC_FIELD_CONSTANT(ACDrop, HEADER, jbyte)

FOUNDATION_EXPORT void ACDrop_initWithARDataInput_(ACDrop *self, ARDataInput *stream);

FOUNDATION_EXPORT ACDrop *new_ACDrop_initWithARDataInput_(ARDataInput *stream) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACDrop *create_ACDrop_initWithARDataInput_(ARDataInput *stream);

FOUNDATION_EXPORT void ACDrop_initWithLong_withNSString_(ACDrop *self, jlong messageId, NSString *message);

FOUNDATION_EXPORT ACDrop *new_ACDrop_initWithLong_withNSString_(jlong messageId, NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACDrop *create_ACDrop_initWithLong_withNSString_(jlong messageId, NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(ACDrop)

@compatibility_alias ImDiyalogCoreNetworkMtpEntityDrop ACDrop;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityDrop")