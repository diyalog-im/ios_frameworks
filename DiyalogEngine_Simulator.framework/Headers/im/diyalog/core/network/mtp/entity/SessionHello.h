//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/network/mtp/entity/SessionHello.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntitySessionHello")
#ifdef RESTRICT_ImDiyalogCoreNetworkMtpEntitySessionHello
#define INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntitySessionHello 0
#else
#define INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntitySessionHello 1
#endif
#undef RESTRICT_ImDiyalogCoreNetworkMtpEntitySessionHello

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACSessionHello_) && (INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntitySessionHello || defined(INCLUDE_ACSessionHello))
#define ACSessionHello_

#define RESTRICT_ImDiyalogCoreNetworkMtpEntityProtoStruct 1
#define INCLUDE_ACProtoStruct 1
#include "../../../../../../im/diyalog/core/network/mtp/entity/ProtoStruct.h"

@class ARDataInput;
@class ARDataOutput;

@interface ACSessionHello : ACProtoStruct

+ (jbyte)HEADER;

#pragma mark Public

- (instancetype)init;

#pragma mark Protected

- (jbyte)getHeader;

- (void)readBodyWithARDataInput:(ARDataInput *)bs;

- (void)writeBodyWithARDataOutput:(ARDataOutput *)bs;

@end

J2OBJC_EMPTY_STATIC_INIT(ACSessionHello)

inline jbyte ACSessionHello_get_HEADER();
#define ACSessionHello_HEADER 15
J2OBJC_STATIC_FIELD_CONSTANT(ACSessionHello, HEADER, jbyte)

FOUNDATION_EXPORT void ACSessionHello_init(ACSessionHello *self);

FOUNDATION_EXPORT ACSessionHello *new_ACSessionHello_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACSessionHello *create_ACSessionHello_init();

J2OBJC_TYPE_LITERAL_HEADER(ACSessionHello)

@compatibility_alias ImDiyalogCoreNetworkMtpEntitySessionHello ACSessionHello;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntitySessionHello")