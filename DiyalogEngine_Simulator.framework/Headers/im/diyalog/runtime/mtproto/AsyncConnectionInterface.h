//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/mtproto/AsyncConnectionInterface.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeMtprotoAsyncConnectionInterface")
#ifdef RESTRICT_ImDiyalogRuntimeMtprotoAsyncConnectionInterface
#define INCLUDE_ALL_ImDiyalogRuntimeMtprotoAsyncConnectionInterface 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeMtprotoAsyncConnectionInterface 1
#endif
#undef RESTRICT_ImDiyalogRuntimeMtprotoAsyncConnectionInterface

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARAsyncConnectionInterface_) && (INCLUDE_ALL_ImDiyalogRuntimeMtprotoAsyncConnectionInterface || defined(INCLUDE_ARAsyncConnectionInterface))
#define ARAsyncConnectionInterface_

@class IOSByteArray;

@protocol ARAsyncConnectionInterface < NSObject, JavaObject >

- (void)onConnected;

- (void)onReceived:(IOSByteArray *)data;

- (void)onClosed;

@end

J2OBJC_EMPTY_STATIC_INIT(ARAsyncConnectionInterface)

J2OBJC_TYPE_LITERAL_HEADER(ARAsyncConnectionInterface)

#define ImDiyalogRuntimeMtprotoAsyncConnectionInterface ARAsyncConnectionInterface

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeMtprotoAsyncConnectionInterface")