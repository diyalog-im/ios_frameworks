//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestLoadStickerCollection.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestLoadStickerCollection")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestLoadStickerCollection
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestLoadStickerCollection 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestLoadStickerCollection 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestLoadStickerCollection

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestLoadStickerCollection_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestLoadStickerCollection || defined(INCLUDE_ARRequestLoadStickerCollection))
#define ARRequestLoadStickerCollection_

#define RESTRICT_ImDiyalogCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/diyalog/core/network/parser/Request.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

@interface ARRequestLoadStickerCollection : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)id_
                   withLong:(jlong)accessHash;

+ (ARRequestLoadStickerCollection *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jlong)getAccessHash;

- (jint)getHeaderKey;

- (jint)getId;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestLoadStickerCollection)

inline jint ARRequestLoadStickerCollection_get_HEADER();
#define ARRequestLoadStickerCollection_HEADER 246
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestLoadStickerCollection, HEADER, jint)

FOUNDATION_EXPORT ARRequestLoadStickerCollection *ARRequestLoadStickerCollection_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestLoadStickerCollection_initWithInt_withLong_(ARRequestLoadStickerCollection *self, jint id_, jlong accessHash);

FOUNDATION_EXPORT ARRequestLoadStickerCollection *new_ARRequestLoadStickerCollection_initWithInt_withLong_(jint id_, jlong accessHash) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestLoadStickerCollection *create_ARRequestLoadStickerCollection_initWithInt_withLong_(jint id_, jlong accessHash);

FOUNDATION_EXPORT void ARRequestLoadStickerCollection_init(ARRequestLoadStickerCollection *self);

FOUNDATION_EXPORT ARRequestLoadStickerCollection *new_ARRequestLoadStickerCollection_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestLoadStickerCollection *create_ARRequestLoadStickerCollection_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestLoadStickerCollection)

@compatibility_alias ImDiyalogCoreApiRpcRequestLoadStickerCollection ARRequestLoadStickerCollection;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestLoadStickerCollection")
