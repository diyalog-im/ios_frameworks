//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/parser/UpdatesParser.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiParserUpdatesParser")
#ifdef RESTRICT_ImDiyalogCoreApiParserUpdatesParser
#define INCLUDE_ALL_ImDiyalogCoreApiParserUpdatesParser 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiParserUpdatesParser 1
#endif
#undef RESTRICT_ImDiyalogCoreApiParserUpdatesParser

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARUpdatesParser_) && (INCLUDE_ALL_ImDiyalogCoreApiParserUpdatesParser || defined(INCLUDE_ARUpdatesParser))
#define ARUpdatesParser_

#define RESTRICT_ImDiyalogCoreNetworkParserBaseParser 1
#define INCLUDE_ACBaseParser 1
#include "../../../../../im/diyalog/core/network/parser/BaseParser.h"

@class ACUpdate;
@class IOSByteArray;

@interface ARUpdatesParser : ACBaseParser

#pragma mark Public

- (instancetype)init;

- (ACUpdate *)readWithInt:(jint)type
            withByteArray:(IOSByteArray *)payload;

@end

J2OBJC_EMPTY_STATIC_INIT(ARUpdatesParser)

FOUNDATION_EXPORT void ARUpdatesParser_init(ARUpdatesParser *self);

FOUNDATION_EXPORT ARUpdatesParser *new_ARUpdatesParser_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdatesParser *create_ARUpdatesParser_init();

J2OBJC_TYPE_LITERAL_HEADER(ARUpdatesParser)

@compatibility_alias ImDiyalogCoreApiParserUpdatesParser ARUpdatesParser;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiParserUpdatesParser")
