//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestMessageReceivedByInActiveUser.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestMessageReceivedByInActiveUser")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestMessageReceivedByInActiveUser
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestMessageReceivedByInActiveUser 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestMessageReceivedByInActiveUser 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestMessageReceivedByInActiveUser

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestMessageReceivedByInActiveUser_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestMessageReceivedByInActiveUser || defined(INCLUDE_ARRequestMessageReceivedByInActiveUser))
#define ARRequestMessageReceivedByInActiveUser_

#define RESTRICT_ImDiyalogCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/diyalog/core/network/parser/Request.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

@interface ARRequestMessageReceivedByInActiveUser : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)receiverId
                    withInt:(jint)senderId
                   withLong:(jlong)date;

+ (ARRequestMessageReceivedByInActiveUser *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jlong)getDate;

- (jint)getHeaderKey;

- (jint)getReceiverId;

- (jint)getSenderId;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestMessageReceivedByInActiveUser)

inline jint ARRequestMessageReceivedByInActiveUser_get_HEADER();
#define ARRequestMessageReceivedByInActiveUser_HEADER 58
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestMessageReceivedByInActiveUser, HEADER, jint)

FOUNDATION_EXPORT ARRequestMessageReceivedByInActiveUser *ARRequestMessageReceivedByInActiveUser_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestMessageReceivedByInActiveUser_initWithInt_withInt_withLong_(ARRequestMessageReceivedByInActiveUser *self, jint receiverId, jint senderId, jlong date);

FOUNDATION_EXPORT ARRequestMessageReceivedByInActiveUser *new_ARRequestMessageReceivedByInActiveUser_initWithInt_withInt_withLong_(jint receiverId, jint senderId, jlong date) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestMessageReceivedByInActiveUser *create_ARRequestMessageReceivedByInActiveUser_initWithInt_withInt_withLong_(jint receiverId, jint senderId, jlong date);

FOUNDATION_EXPORT void ARRequestMessageReceivedByInActiveUser_init(ARRequestMessageReceivedByInActiveUser *self);

FOUNDATION_EXPORT ARRequestMessageReceivedByInActiveUser *new_ARRequestMessageReceivedByInActiveUser_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestMessageReceivedByInActiveUser *create_ARRequestMessageReceivedByInActiveUser_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestMessageReceivedByInActiveUser)

@compatibility_alias ImDiyalogCoreApiRpcRequestMessageReceivedByInActiveUser ARRequestMessageReceivedByInActiveUser;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestMessageReceivedByInActiveUser")