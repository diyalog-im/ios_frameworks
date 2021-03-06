//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/network/mtp/entity/rpc/RpcRequest.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityRpcRpcRequest")
#ifdef RESTRICT_ImDiyalogCoreNetworkMtpEntityRpcRpcRequest
#define INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityRpcRpcRequest 0
#else
#define INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityRpcRpcRequest 1
#endif
#undef RESTRICT_ImDiyalogCoreNetworkMtpEntityRpcRpcRequest

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACRpcRequest_) && (INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityRpcRpcRequest || defined(INCLUDE_ACRpcRequest))
#define ACRpcRequest_

#define RESTRICT_ImDiyalogCoreNetworkMtpEntityProtoStruct 1
#define INCLUDE_ACProtoStruct 1
#include "../../../../../../../im/diyalog/core/network/mtp/entity/ProtoStruct.h"

@class ARDataInput;
@class ARDataOutput;
@class IOSByteArray;

@interface ACRpcRequest : ACProtoStruct {
 @public
  jint requestType_;
  IOSByteArray *payload_;
}

+ (jbyte)HEADER;

#pragma mark Public

- (instancetype)initWithARDataInput:(ARDataInput *)stream;

- (instancetype)initWithInt:(jint)requestType
              withByteArray:(IOSByteArray *)payload;

- (IOSByteArray *)getPayload;

- (jint)getRequestType;

- (NSString *)description;

#pragma mark Protected

- (jbyte)getHeader;

- (void)readBodyWithARDataInput:(ARDataInput *)bs;

- (void)writeBodyWithARDataOutput:(ARDataOutput *)bs;

@end

J2OBJC_EMPTY_STATIC_INIT(ACRpcRequest)

J2OBJC_FIELD_SETTER(ACRpcRequest, payload_, IOSByteArray *)

inline jbyte ACRpcRequest_get_HEADER();
#define ACRpcRequest_HEADER 1
J2OBJC_STATIC_FIELD_CONSTANT(ACRpcRequest, HEADER, jbyte)

FOUNDATION_EXPORT void ACRpcRequest_initWithARDataInput_(ACRpcRequest *self, ARDataInput *stream);

FOUNDATION_EXPORT ACRpcRequest *new_ACRpcRequest_initWithARDataInput_(ARDataInput *stream) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACRpcRequest *create_ACRpcRequest_initWithARDataInput_(ARDataInput *stream);

FOUNDATION_EXPORT void ACRpcRequest_initWithInt_withByteArray_(ACRpcRequest *self, jint requestType, IOSByteArray *payload);

FOUNDATION_EXPORT ACRpcRequest *new_ACRpcRequest_initWithInt_withByteArray_(jint requestType, IOSByteArray *payload) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACRpcRequest *create_ACRpcRequest_initWithInt_withByteArray_(jint requestType, IOSByteArray *payload);

J2OBJC_TYPE_LITERAL_HEADER(ACRpcRequest)

@compatibility_alias ImDiyalogCoreNetworkMtpEntityRpcRpcRequest ACRpcRequest;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreNetworkMtpEntityRpcRpcRequest")
