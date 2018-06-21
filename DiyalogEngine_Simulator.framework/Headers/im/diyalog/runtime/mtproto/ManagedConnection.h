//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/mtproto/ManagedConnection.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeMtprotoManagedConnection")
#ifdef RESTRICT_ImDiyalogRuntimeMtprotoManagedConnection
#define INCLUDE_ALL_ImDiyalogRuntimeMtprotoManagedConnection 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeMtprotoManagedConnection 1
#endif
#undef RESTRICT_ImDiyalogRuntimeMtprotoManagedConnection

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARManagedConnection_) && (INCLUDE_ALL_ImDiyalogRuntimeMtprotoManagedConnection || defined(INCLUDE_ARManagedConnection))
#define ARManagedConnection_

#define RESTRICT_ImDiyalogRuntimeMtprotoConnection 1
#define INCLUDE_ARConnection 1
#include "../../../../im/diyalog/runtime/mtproto/Connection.h"

@class ARConnectionEndpoint;
@class IOSByteArray;
@protocol ARAsyncConnectionFactory;
@protocol ARConnectionCallback;
@protocol ARManagedConnectionCreateCallback;

@interface ARManagedConnection : NSObject < ARConnection >

+ (jint)CONNECTION_TIMEOUT;

#pragma mark Public

- (instancetype)initWithInt:(jint)connectionId
                    withInt:(jint)mtprotoVersion
                    withInt:(jint)apiMajorVersion
                    withInt:(jint)apiMinorVersion
   withARConnectionEndpoint:(ARConnectionEndpoint *)endpoint
   withARConnectionCallback:(id<ARConnectionCallback>)callback
withARManagedConnectionCreateCallback:(id<ARManagedConnectionCreateCallback>)factoryCallback
withARAsyncConnectionFactory:(id<ARAsyncConnectionFactory>)connectionFactory;

- (void)checkConnection;

- (void)close;

- (jboolean)isClosed;

- (void)postWithData:(IOSByteArray *)data
          withOffset:(jint)offset
          withLength:(jint)len;

@end

J2OBJC_STATIC_INIT(ARManagedConnection)

inline jint ARManagedConnection_get_CONNECTION_TIMEOUT();
#define ARManagedConnection_CONNECTION_TIMEOUT 15000
J2OBJC_STATIC_FIELD_CONSTANT(ARManagedConnection, CONNECTION_TIMEOUT, jint)

FOUNDATION_EXPORT void ARManagedConnection_initWithInt_withInt_withInt_withInt_withARConnectionEndpoint_withARConnectionCallback_withARManagedConnectionCreateCallback_withARAsyncConnectionFactory_(ARManagedConnection *self, jint connectionId, jint mtprotoVersion, jint apiMajorVersion, jint apiMinorVersion, ARConnectionEndpoint *endpoint, id<ARConnectionCallback> callback, id<ARManagedConnectionCreateCallback> factoryCallback, id<ARAsyncConnectionFactory> connectionFactory);

FOUNDATION_EXPORT ARManagedConnection *new_ARManagedConnection_initWithInt_withInt_withInt_withInt_withARConnectionEndpoint_withARConnectionCallback_withARManagedConnectionCreateCallback_withARAsyncConnectionFactory_(jint connectionId, jint mtprotoVersion, jint apiMajorVersion, jint apiMinorVersion, ARConnectionEndpoint *endpoint, id<ARConnectionCallback> callback, id<ARManagedConnectionCreateCallback> factoryCallback, id<ARAsyncConnectionFactory> connectionFactory) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARManagedConnection *create_ARManagedConnection_initWithInt_withInt_withInt_withInt_withARConnectionEndpoint_withARConnectionCallback_withARManagedConnectionCreateCallback_withARAsyncConnectionFactory_(jint connectionId, jint mtprotoVersion, jint apiMajorVersion, jint apiMinorVersion, ARConnectionEndpoint *endpoint, id<ARConnectionCallback> callback, id<ARManagedConnectionCreateCallback> factoryCallback, id<ARAsyncConnectionFactory> connectionFactory);

J2OBJC_TYPE_LITERAL_HEADER(ARManagedConnection)

@compatibility_alias ImDiyalogRuntimeMtprotoManagedConnection ARManagedConnection;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeMtprotoManagedConnection")