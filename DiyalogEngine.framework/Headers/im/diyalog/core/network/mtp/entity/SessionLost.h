//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/network/mtp/entity/SessionLost.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntitySessionLost")
#ifdef RESTRICT_ImDiyalogCoreNetworkMtpEntitySessionLost
#define INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntitySessionLost 0
#else
#define INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntitySessionLost 1
#endif
#undef RESTRICT_ImDiyalogCoreNetworkMtpEntitySessionLost

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACSessionLost_) && (INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntitySessionLost || defined(INCLUDE_ACSessionLost))
#define ACSessionLost_

#define RESTRICT_ImDiyalogCoreNetworkMtpEntityProtoStruct 1
#define INCLUDE_ACProtoStruct 1
#include "../../../../../../im/diyalog/core/network/mtp/entity/ProtoStruct.h"

@class ARDataInput;
@class ARDataOutput;

@interface ACSessionLost : ACProtoStruct

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARDataInput:(ARDataInput *)stream;

#pragma mark Protected

- (jbyte)getHeader;

- (void)readBodyWithARDataInput:(ARDataInput *)bs;

- (void)writeBodyWithARDataOutput:(ARDataOutput *)bs;

@end

J2OBJC_EMPTY_STATIC_INIT(ACSessionLost)

inline jint ACSessionLost_get_HEADER();
#define ACSessionLost_HEADER 16
J2OBJC_STATIC_FIELD_CONSTANT(ACSessionLost, HEADER, jint)

FOUNDATION_EXPORT void ACSessionLost_initWithARDataInput_(ACSessionLost *self, ARDataInput *stream);

FOUNDATION_EXPORT ACSessionLost *new_ACSessionLost_initWithARDataInput_(ARDataInput *stream) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACSessionLost *create_ACSessionLost_initWithARDataInput_(ARDataInput *stream);

FOUNDATION_EXPORT void ACSessionLost_init(ACSessionLost *self);

FOUNDATION_EXPORT ACSessionLost *new_ACSessionLost_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACSessionLost *create_ACSessionLost_init();

J2OBJC_TYPE_LITERAL_HEADER(ACSessionLost)

@compatibility_alias ImDiyalogCoreNetworkMtpEntitySessionLost ACSessionLost;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntitySessionLost")
