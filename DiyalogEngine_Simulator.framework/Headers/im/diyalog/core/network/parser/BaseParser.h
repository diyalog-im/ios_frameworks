//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/network/parser/BaseParser.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreNetworkParserBaseParser")
#ifdef RESTRICT_ImDiyalogCoreNetworkParserBaseParser
#define INCLUDE_ALL_ImDiyalogCoreNetworkParserBaseParser 0
#else
#define INCLUDE_ALL_ImDiyalogCoreNetworkParserBaseParser 1
#endif
#undef RESTRICT_ImDiyalogCoreNetworkParserBaseParser

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACBaseParser_) && (INCLUDE_ALL_ImDiyalogCoreNetworkParserBaseParser || defined(INCLUDE_ACBaseParser))
#define ACBaseParser_

@class IOSByteArray;

@interface ACBaseParser : NSObject

#pragma mark Public

- (instancetype)init;

- (id)readWithInt:(jint)type
    withByteArray:(IOSByteArray *)payload;

@end

J2OBJC_EMPTY_STATIC_INIT(ACBaseParser)

FOUNDATION_EXPORT void ACBaseParser_init(ACBaseParser *self);

J2OBJC_TYPE_LITERAL_HEADER(ACBaseParser)

@compatibility_alias ImDiyalogCoreNetworkParserBaseParser ACBaseParser;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreNetworkParserBaseParser")
