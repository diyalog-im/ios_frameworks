//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiFileLocation.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiFileLocation")
#ifdef RESTRICT_ImDiyalogCoreApiApiFileLocation
#define INCLUDE_ALL_ImDiyalogCoreApiApiFileLocation 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiFileLocation 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiFileLocation

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiFileLocation_) && (INCLUDE_ALL_ImDiyalogCoreApiApiFileLocation || defined(INCLUDE_ARApiFileLocation))
#define ARApiFileLocation_

#define RESTRICT_ImDiyalogRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../im/diyalog/runtime/bser/BserObject.h"

@class ARBserValues;
@class ARBserWriter;

@interface ARApiFileLocation : ARBserObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithLong:(jlong)fileId
                    withLong:(jlong)accessHash;

- (jlong)getAccessHash;

- (jlong)getFileId;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiFileLocation)

FOUNDATION_EXPORT void ARApiFileLocation_initWithLong_withLong_(ARApiFileLocation *self, jlong fileId, jlong accessHash);

FOUNDATION_EXPORT ARApiFileLocation *new_ARApiFileLocation_initWithLong_withLong_(jlong fileId, jlong accessHash) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiFileLocation *create_ARApiFileLocation_initWithLong_withLong_(jlong fileId, jlong accessHash);

FOUNDATION_EXPORT void ARApiFileLocation_init(ARApiFileLocation *self);

FOUNDATION_EXPORT ARApiFileLocation *new_ARApiFileLocation_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiFileLocation *create_ARApiFileLocation_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiFileLocation)

@compatibility_alias ImDiyalogCoreApiApiFileLocation ARApiFileLocation;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiFileLocation")
