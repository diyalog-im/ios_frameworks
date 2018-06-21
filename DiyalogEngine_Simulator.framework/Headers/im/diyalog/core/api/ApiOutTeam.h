//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiOutTeam.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiOutTeam")
#ifdef RESTRICT_ImDiyalogCoreApiApiOutTeam
#define INCLUDE_ALL_ImDiyalogCoreApiApiOutTeam 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiOutTeam 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiOutTeam

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiOutTeam_) && (INCLUDE_ALL_ImDiyalogCoreApiApiOutTeam || defined(INCLUDE_ARApiOutTeam))
#define ARApiOutTeam_

#define RESTRICT_ImDiyalogRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../im/diyalog/runtime/bser/BserObject.h"

@class ARBserValues;
@class ARBserWriter;

@interface ARApiOutTeam : ARBserObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)id_
                   withLong:(jlong)accessHash;

- (jlong)getAccessHash;

- (jint)getId;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiOutTeam)

FOUNDATION_EXPORT void ARApiOutTeam_initWithInt_withLong_(ARApiOutTeam *self, jint id_, jlong accessHash);

FOUNDATION_EXPORT ARApiOutTeam *new_ARApiOutTeam_initWithInt_withLong_(jint id_, jlong accessHash) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiOutTeam *create_ARApiOutTeam_initWithInt_withLong_(jint id_, jlong accessHash);

FOUNDATION_EXPORT void ARApiOutTeam_init(ARApiOutTeam *self);

FOUNDATION_EXPORT ARApiOutTeam *new_ARApiOutTeam_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiOutTeam *create_ARApiOutTeam_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiOutTeam)

@compatibility_alias ImDiyalogCoreApiApiOutTeam ARApiOutTeam;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiOutTeam")
