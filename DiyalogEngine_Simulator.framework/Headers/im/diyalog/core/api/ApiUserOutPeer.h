//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiUserOutPeer.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiUserOutPeer")
#ifdef RESTRICT_ImDiyalogCoreApiApiUserOutPeer
#define INCLUDE_ALL_ImDiyalogCoreApiApiUserOutPeer 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiUserOutPeer 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiUserOutPeer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiUserOutPeer_) && (INCLUDE_ALL_ImDiyalogCoreApiApiUserOutPeer || defined(INCLUDE_ARApiUserOutPeer))
#define ARApiUserOutPeer_

#define RESTRICT_ImDiyalogRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../im/diyalog/runtime/bser/BserObject.h"

@class ARBserValues;
@class ARBserWriter;

@interface ARApiUserOutPeer : ARBserObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)uid
                   withLong:(jlong)accessHash;

- (jlong)getAccessHash;

- (jint)getUid;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiUserOutPeer)

FOUNDATION_EXPORT void ARApiUserOutPeer_initWithInt_withLong_(ARApiUserOutPeer *self, jint uid, jlong accessHash);

FOUNDATION_EXPORT ARApiUserOutPeer *new_ARApiUserOutPeer_initWithInt_withLong_(jint uid, jlong accessHash) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiUserOutPeer *create_ARApiUserOutPeer_initWithInt_withLong_(jint uid, jlong accessHash);

FOUNDATION_EXPORT void ARApiUserOutPeer_init(ARApiUserOutPeer *self);

FOUNDATION_EXPORT ARApiUserOutPeer *new_ARApiUserOutPeer_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiUserOutPeer *create_ARApiUserOutPeer_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiUserOutPeer)

@compatibility_alias ImDiyalogCoreApiApiUserOutPeer ARApiUserOutPeer;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiUserOutPeer")
