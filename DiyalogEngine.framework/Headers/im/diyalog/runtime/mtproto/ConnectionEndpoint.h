//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/mtproto/ConnectionEndpoint.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeMtprotoConnectionEndpoint")
#ifdef RESTRICT_ImDiyalogRuntimeMtprotoConnectionEndpoint
#define INCLUDE_ALL_ImDiyalogRuntimeMtprotoConnectionEndpoint 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeMtprotoConnectionEndpoint 1
#endif
#undef RESTRICT_ImDiyalogRuntimeMtprotoConnectionEndpoint

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARConnectionEndpoint_) && (INCLUDE_ALL_ImDiyalogRuntimeMtprotoConnectionEndpoint || defined(INCLUDE_ARConnectionEndpoint))
#define ARConnectionEndpoint_

@class ARConnectionEndpoint_Type;

@interface ARConnectionEndpoint : NSObject

#pragma mark Public

- (instancetype)initWithHost:(NSString *)host
                    withPort:(jint)port
                    withType:(ARConnectionEndpoint_Type *)type;

- (NSString *)getHost;

- (jint)getPort;

- (ARConnectionEndpoint_Type *)getType;

@end

J2OBJC_EMPTY_STATIC_INIT(ARConnectionEndpoint)

FOUNDATION_EXPORT void ARConnectionEndpoint_initWithHost_withPort_withType_(ARConnectionEndpoint *self, NSString *host, jint port, ARConnectionEndpoint_Type *type);

FOUNDATION_EXPORT ARConnectionEndpoint *new_ARConnectionEndpoint_initWithHost_withPort_withType_(NSString *host, jint port, ARConnectionEndpoint_Type *type) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARConnectionEndpoint *create_ARConnectionEndpoint_initWithHost_withPort_withType_(NSString *host, jint port, ARConnectionEndpoint_Type *type);

J2OBJC_TYPE_LITERAL_HEADER(ARConnectionEndpoint)

@compatibility_alias ImDiyalogRuntimeMtprotoConnectionEndpoint ARConnectionEndpoint;

#endif

#if !defined (ARConnectionEndpoint_Type_) && (INCLUDE_ALL_ImDiyalogRuntimeMtprotoConnectionEndpoint || defined(INCLUDE_ARConnectionEndpoint_Type))
#define ARConnectionEndpoint_Type_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
@import j2objc;

typedef NS_ENUM(NSUInteger, ARConnectionEndpoint_Type_Enum) {
  ARConnectionEndpoint_Type_Enum_TCP = 0,
  ARConnectionEndpoint_Type_Enum_TCP_TLS = 1,
  ARConnectionEndpoint_Type_Enum_WS = 2,
  ARConnectionEndpoint_Type_Enum_WS_TLS = 3,
};

@interface ARConnectionEndpoint_Type : JavaLangEnum < NSCopying >

+ (ARConnectionEndpoint_Type *)TCP;

+ (ARConnectionEndpoint_Type *)TCP_TLS;

+ (ARConnectionEndpoint_Type *)WS;

+ (ARConnectionEndpoint_Type *)WS_TLS;

#pragma mark Package-Private

+ (IOSObjectArray *)values;

+ (ARConnectionEndpoint_Type *)valueOfWithNSString:(NSString *)name;

- (id)copyWithZone:(NSZone *)zone;
- (ARConnectionEndpoint_Type_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ARConnectionEndpoint_Type)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ARConnectionEndpoint_Type *ARConnectionEndpoint_Type_values_[];

inline ARConnectionEndpoint_Type *ARConnectionEndpoint_Type_get_TCP();
J2OBJC_ENUM_CONSTANT(ARConnectionEndpoint_Type, TCP)

inline ARConnectionEndpoint_Type *ARConnectionEndpoint_Type_get_TCP_TLS();
J2OBJC_ENUM_CONSTANT(ARConnectionEndpoint_Type, TCP_TLS)

inline ARConnectionEndpoint_Type *ARConnectionEndpoint_Type_get_WS();
J2OBJC_ENUM_CONSTANT(ARConnectionEndpoint_Type, WS)

inline ARConnectionEndpoint_Type *ARConnectionEndpoint_Type_get_WS_TLS();
J2OBJC_ENUM_CONSTANT(ARConnectionEndpoint_Type, WS_TLS)

FOUNDATION_EXPORT IOSObjectArray *ARConnectionEndpoint_Type_values();

FOUNDATION_EXPORT ARConnectionEndpoint_Type *ARConnectionEndpoint_Type_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ARConnectionEndpoint_Type *ARConnectionEndpoint_Type_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ARConnectionEndpoint_Type)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeMtprotoConnectionEndpoint")