//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/HTTP.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeHTTP")
#ifdef RESTRICT_ImDiyalogRuntimeHTTP
#define INCLUDE_ALL_ImDiyalogRuntimeHTTP 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeHTTP 1
#endif
#undef RESTRICT_ImDiyalogRuntimeHTTP

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARHTTP_) && (INCLUDE_ALL_ImDiyalogRuntimeHTTP || defined(INCLUDE_ARHTTP))
#define ARHTTP_

@class IOSByteArray;
@protocol ARFileDownloadCallback;
@protocol ARFileUploadCallback;

@interface ARHTTP : NSObject

#pragma mark Public

- (instancetype)init;

+ (void)getMethodWithNSString:(NSString *)url
                      withInt:(jint)startOffset
                      withInt:(jint)size
                      withInt:(jint)totalSize
   withARFileDownloadCallback:(id<ARFileDownloadCallback>)callback;

+ (void)putMethodWithNSString:(NSString *)url
                withByteArray:(IOSByteArray *)contents
     withARFileUploadCallback:(id<ARFileUploadCallback>)callback;

@end

J2OBJC_STATIC_INIT(ARHTTP)

FOUNDATION_EXPORT void ARHTTP_getMethodWithNSString_withInt_withInt_withInt_withARFileDownloadCallback_(NSString *url, jint startOffset, jint size, jint totalSize, id<ARFileDownloadCallback> callback);

FOUNDATION_EXPORT void ARHTTP_putMethodWithNSString_withByteArray_withARFileUploadCallback_(NSString *url, IOSByteArray *contents, id<ARFileUploadCallback> callback);

FOUNDATION_EXPORT void ARHTTP_init(ARHTTP *self);

FOUNDATION_EXPORT ARHTTP *new_ARHTTP_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARHTTP *create_ARHTTP_init();

J2OBJC_TYPE_LITERAL_HEADER(ARHTTP)

@compatibility_alias ImDiyalogRuntimeHTTP ARHTTP;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeHTTP")
