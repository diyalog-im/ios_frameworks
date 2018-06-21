//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/primitives/util/Pack.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesUtilPack")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesUtilPack
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesUtilPack 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesUtilPack 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesUtilPack

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeCryptoPrimitivesUtilPack_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesUtilPack || defined(INCLUDE_ImDiyalogRuntimeCryptoPrimitivesUtilPack))
#define ImDiyalogRuntimeCryptoPrimitivesUtilPack_

@class IOSByteArray;
@class IOSIntArray;
@class IOSLongArray;

/*!
 @brief Source: Bouncy Castle v1.54
 <p>
 */
@interface ImDiyalogRuntimeCryptoPrimitivesUtilPack : NSObject

#pragma mark Public

- (instancetype)init;

+ (jint)bigEndianToIntWithByteArray:(IOSByteArray *)bs
                            withInt:(jint)off;

+ (void)bigEndianToIntWithByteArray:(IOSByteArray *)bs
                            withInt:(jint)off
                       withIntArray:(IOSIntArray *)ns;

+ (void)bigEndianToIntWithByteArray:(IOSByteArray *)bs
                            withInt:(jint)off
                       withIntArray:(IOSIntArray *)ns
                            withInt:(jint)destOffset
                            withInt:(jint)count;

+ (jlong)bigEndianToLongWithByteArray:(IOSByteArray *)bs
                              withInt:(jint)off;

+ (void)bigEndianToLongWithByteArray:(IOSByteArray *)bs
                             withInt:(jint)off
                       withLongArray:(IOSLongArray *)ns;

+ (IOSByteArray *)intToBigEndianWithInt:(jint)n;

+ (void)intToBigEndianWithInt:(jint)n
                withByteArray:(IOSByteArray *)bs
                      withInt:(jint)off;

+ (IOSByteArray *)intToBigEndianWithIntArray:(IOSIntArray *)ns;

+ (void)intToBigEndianWithIntArray:(IOSIntArray *)ns
                     withByteArray:(IOSByteArray *)bs
                           withInt:(jint)off;

+ (IOSByteArray *)intToLittleEndianWithInt:(jint)n;

+ (void)intToLittleEndianWithInt:(jint)n
                   withByteArray:(IOSByteArray *)bs
                         withInt:(jint)off;

+ (IOSByteArray *)intToLittleEndianWithIntArray:(IOSIntArray *)ns;

+ (void)intToLittleEndianWithIntArray:(IOSIntArray *)ns
                        withByteArray:(IOSByteArray *)bs
                              withInt:(jint)off;

+ (jbyte)jsWrapWithByte:(jbyte)val;

+ (jint)jsWrapWithInt:(jint)val;

+ (jint)littleEndianToIntWithByteArray:(IOSByteArray *)bs
                               withInt:(jint)off;

+ (void)littleEndianToIntWithByteArray:(IOSByteArray *)bs
                               withInt:(jint)off
                          withIntArray:(IOSIntArray *)ns;

+ (void)littleEndianToIntWithByteArray:(IOSByteArray *)bs
                               withInt:(jint)bOff
                          withIntArray:(IOSIntArray *)ns
                               withInt:(jint)nOff
                               withInt:(jint)count;

+ (jlong)littleEndianToLongWithByteArray:(IOSByteArray *)bs
                                 withInt:(jint)off;

+ (void)littleEndianToLongWithByteArray:(IOSByteArray *)bs
                                withInt:(jint)off
                          withLongArray:(IOSLongArray *)ns;

+ (IOSByteArray *)longToBigEndianWithLong:(jlong)n;

+ (void)longToBigEndianWithLong:(jlong)n
                  withByteArray:(IOSByteArray *)bs
                        withInt:(jint)off;

+ (IOSByteArray *)longToBigEndianWithLongArray:(IOSLongArray *)ns;

+ (void)longToBigEndianWithLongArray:(IOSLongArray *)ns
                       withByteArray:(IOSByteArray *)bs
                             withInt:(jint)off;

+ (void)longToBigEndianWithLongArray:(IOSLongArray *)ns
                       withByteArray:(IOSByteArray *)bs
                             withInt:(jint)off
                             withInt:(jint)count;

+ (IOSByteArray *)longToLittleEndianWithLong:(jlong)n;

+ (void)longToLittleEndianWithLong:(jlong)n
                     withByteArray:(IOSByteArray *)bs
                           withInt:(jint)off;

+ (IOSByteArray *)longToLittleEndianWithLongArray:(IOSLongArray *)ns;

+ (void)longToLittleEndianWithLongArray:(IOSLongArray *)ns
                          withByteArray:(IOSByteArray *)bs
                                withInt:(jint)off;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogRuntimeCryptoPrimitivesUtilPack)

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesUtilPack_bigEndianToIntWithByteArray_withInt_withIntArray_withInt_withInt_(IOSByteArray *bs, jint off, IOSIntArray *ns, jint destOffset, jint count);

FOUNDATION_EXPORT jint ImDiyalogRuntimeCryptoPrimitivesUtilPack_bigEndianToIntWithByteArray_withInt_(IOSByteArray *bs, jint off);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesUtilPack_bigEndianToIntWithByteArray_withInt_withIntArray_(IOSByteArray *bs, jint off, IOSIntArray *ns);

FOUNDATION_EXPORT IOSByteArray *ImDiyalogRuntimeCryptoPrimitivesUtilPack_intToBigEndianWithInt_(jint n);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesUtilPack_intToBigEndianWithInt_withByteArray_withInt_(jint n, IOSByteArray *bs, jint off);

FOUNDATION_EXPORT IOSByteArray *ImDiyalogRuntimeCryptoPrimitivesUtilPack_intToBigEndianWithIntArray_(IOSIntArray *ns);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesUtilPack_intToBigEndianWithIntArray_withByteArray_withInt_(IOSIntArray *ns, IOSByteArray *bs, jint off);

FOUNDATION_EXPORT jlong ImDiyalogRuntimeCryptoPrimitivesUtilPack_bigEndianToLongWithByteArray_withInt_(IOSByteArray *bs, jint off);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesUtilPack_bigEndianToLongWithByteArray_withInt_withLongArray_(IOSByteArray *bs, jint off, IOSLongArray *ns);

FOUNDATION_EXPORT IOSByteArray *ImDiyalogRuntimeCryptoPrimitivesUtilPack_longToBigEndianWithLong_(jlong n);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesUtilPack_longToBigEndianWithLongArray_withByteArray_withInt_withInt_(IOSLongArray *ns, IOSByteArray *bs, jint off, jint count);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesUtilPack_longToBigEndianWithLong_withByteArray_withInt_(jlong n, IOSByteArray *bs, jint off);

FOUNDATION_EXPORT IOSByteArray *ImDiyalogRuntimeCryptoPrimitivesUtilPack_longToBigEndianWithLongArray_(IOSLongArray *ns);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesUtilPack_longToBigEndianWithLongArray_withByteArray_withInt_(IOSLongArray *ns, IOSByteArray *bs, jint off);

FOUNDATION_EXPORT jint ImDiyalogRuntimeCryptoPrimitivesUtilPack_littleEndianToIntWithByteArray_withInt_(IOSByteArray *bs, jint off);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesUtilPack_littleEndianToIntWithByteArray_withInt_withIntArray_(IOSByteArray *bs, jint off, IOSIntArray *ns);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesUtilPack_littleEndianToIntWithByteArray_withInt_withIntArray_withInt_withInt_(IOSByteArray *bs, jint bOff, IOSIntArray *ns, jint nOff, jint count);

FOUNDATION_EXPORT IOSByteArray *ImDiyalogRuntimeCryptoPrimitivesUtilPack_intToLittleEndianWithInt_(jint n);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesUtilPack_intToLittleEndianWithInt_withByteArray_withInt_(jint n, IOSByteArray *bs, jint off);

FOUNDATION_EXPORT IOSByteArray *ImDiyalogRuntimeCryptoPrimitivesUtilPack_intToLittleEndianWithIntArray_(IOSIntArray *ns);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesUtilPack_intToLittleEndianWithIntArray_withByteArray_withInt_(IOSIntArray *ns, IOSByteArray *bs, jint off);

FOUNDATION_EXPORT jlong ImDiyalogRuntimeCryptoPrimitivesUtilPack_littleEndianToLongWithByteArray_withInt_(IOSByteArray *bs, jint off);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesUtilPack_littleEndianToLongWithByteArray_withInt_withLongArray_(IOSByteArray *bs, jint off, IOSLongArray *ns);

FOUNDATION_EXPORT IOSByteArray *ImDiyalogRuntimeCryptoPrimitivesUtilPack_longToLittleEndianWithLong_(jlong n);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesUtilPack_longToLittleEndianWithLong_withByteArray_withInt_(jlong n, IOSByteArray *bs, jint off);

FOUNDATION_EXPORT IOSByteArray *ImDiyalogRuntimeCryptoPrimitivesUtilPack_longToLittleEndianWithLongArray_(IOSLongArray *ns);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesUtilPack_longToLittleEndianWithLongArray_withByteArray_withInt_(IOSLongArray *ns, IOSByteArray *bs, jint off);

FOUNDATION_EXPORT jint ImDiyalogRuntimeCryptoPrimitivesUtilPack_jsWrapWithInt_(jint val);

FOUNDATION_EXPORT jbyte ImDiyalogRuntimeCryptoPrimitivesUtilPack_jsWrapWithByte_(jbyte val);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesUtilPack_init(ImDiyalogRuntimeCryptoPrimitivesUtilPack *self);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeCryptoPrimitivesUtilPack)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesUtilPack")
