//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/mtproto/Connection.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeMtprotoConnection")
#ifdef RESTRICT_ImDiyalogRuntimeMtprotoConnection
#define INCLUDE_ALL_ImDiyalogRuntimeMtprotoConnection 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeMtprotoConnection 1
#endif
#undef RESTRICT_ImDiyalogRuntimeMtprotoConnection

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARConnection_) && (INCLUDE_ALL_ImDiyalogRuntimeMtprotoConnection || defined(INCLUDE_ARConnection))
#define ARConnection_

@class IOSByteArray;

/*!
 @brief Created by ex3ndr on 06.02.15.
 */
@protocol ARConnection < NSObject, JavaObject >

- (void)postWithData:(IOSByteArray *)data
          withOffset:(jint)offset
          withLength:(jint)len;

- (jboolean)isClosed;

- (void)close;

- (void)checkConnection;

@end

J2OBJC_EMPTY_STATIC_INIT(ARConnection)

J2OBJC_TYPE_LITERAL_HEADER(ARConnection)

#define ImDiyalogRuntimeMtprotoConnection ARConnection

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeMtprotoConnection")
