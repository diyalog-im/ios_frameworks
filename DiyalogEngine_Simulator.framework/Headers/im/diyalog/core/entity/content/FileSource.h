//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/entity/content/FileSource.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreEntityContentFileSource")
#ifdef RESTRICT_ImDiyalogCoreEntityContentFileSource
#define INCLUDE_ALL_ImDiyalogCoreEntityContentFileSource 0
#else
#define INCLUDE_ALL_ImDiyalogCoreEntityContentFileSource 1
#endif
#undef RESTRICT_ImDiyalogCoreEntityContentFileSource

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACFileSource_) && (INCLUDE_ALL_ImDiyalogCoreEntityContentFileSource || defined(INCLUDE_ACFileSource))
#define ACFileSource_

@interface ACFileSource : NSObject

#pragma mark Public

- (instancetype)init;

- (NSString *)getFileName;

- (jint)getSize;

@end

J2OBJC_EMPTY_STATIC_INIT(ACFileSource)

FOUNDATION_EXPORT void ACFileSource_init(ACFileSource *self);

J2OBJC_TYPE_LITERAL_HEADER(ACFileSource)

@compatibility_alias ImDiyalogCoreEntityContentFileSource ACFileSource;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreEntityContentFileSource")
