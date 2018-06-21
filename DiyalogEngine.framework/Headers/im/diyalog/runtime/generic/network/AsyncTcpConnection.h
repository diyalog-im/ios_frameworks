//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-generic/src/main/java/im/diyalog/runtime/generic/network/AsyncTcpConnection.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericNetworkAsyncTcpConnection")
#ifdef RESTRICT_ImDiyalogRuntimeGenericNetworkAsyncTcpConnection
#define INCLUDE_ALL_ImDiyalogRuntimeGenericNetworkAsyncTcpConnection 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeGenericNetworkAsyncTcpConnection 1
#endif
#undef RESTRICT_ImDiyalogRuntimeGenericNetworkAsyncTcpConnection

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARAsyncTcpConnection_) && (INCLUDE_ALL_ImDiyalogRuntimeGenericNetworkAsyncTcpConnection || defined(INCLUDE_ARAsyncTcpConnection))
#define ARAsyncTcpConnection_

#define RESTRICT_ImDiyalogRuntimeMtprotoAsyncConnection 1
#define INCLUDE_ARAsyncConnection 1
#include "../../../../../im/diyalog/runtime/mtproto/AsyncConnection.h"

@class ARConnectionEndpoint;
@class IOSByteArray;
@protocol ARAsyncConnectionInterface;

@interface ARAsyncTcpConnection : ARAsyncConnection

#pragma mark Public

- (instancetype)initWithInt:(jint)id_
   withARConnectionEndpoint:(ARConnectionEndpoint *)endpoint
withARAsyncConnectionInterface:(id<ARAsyncConnectionInterface>)connection;

- (void)doClose;

- (void)doConnect;

- (void)doSend:(IOSByteArray *)data;

@end

J2OBJC_EMPTY_STATIC_INIT(ARAsyncTcpConnection)

FOUNDATION_EXPORT void ARAsyncTcpConnection_initWithInt_withARConnectionEndpoint_withARAsyncConnectionInterface_(ARAsyncTcpConnection *self, jint id_, ARConnectionEndpoint *endpoint, id<ARAsyncConnectionInterface> connection);

FOUNDATION_EXPORT ARAsyncTcpConnection *new_ARAsyncTcpConnection_initWithInt_withARConnectionEndpoint_withARAsyncConnectionInterface_(jint id_, ARConnectionEndpoint *endpoint, id<ARAsyncConnectionInterface> connection) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARAsyncTcpConnection *create_ARAsyncTcpConnection_initWithInt_withARConnectionEndpoint_withARAsyncConnectionInterface_(jint id_, ARConnectionEndpoint *endpoint, id<ARAsyncConnectionInterface> connection);

J2OBJC_TYPE_LITERAL_HEADER(ARAsyncTcpConnection)

@compatibility_alias ImDiyalogRuntimeGenericNetworkAsyncTcpConnection ARAsyncTcpConnection;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericNetworkAsyncTcpConnection")
