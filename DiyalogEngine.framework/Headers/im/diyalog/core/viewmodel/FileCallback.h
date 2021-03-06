//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/viewmodel/FileCallback.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreViewmodelFileCallback")
#ifdef RESTRICT_ImDiyalogCoreViewmodelFileCallback
#define INCLUDE_ALL_ImDiyalogCoreViewmodelFileCallback 0
#else
#define INCLUDE_ALL_ImDiyalogCoreViewmodelFileCallback 1
#endif
#undef RESTRICT_ImDiyalogCoreViewmodelFileCallback

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACFileCallback_) && (INCLUDE_ALL_ImDiyalogCoreViewmodelFileCallback || defined(INCLUDE_ACFileCallback))
#define ACFileCallback_

@protocol ARFileSystemReference;

/*!
 @brief File download callback.
 All methods are called in background thread.
 */
@protocol ACFileCallback < NSObject, JavaObject >

/*!
 @brief On File not downloaded
 */
- (void)onNotDownloaded;

/*!
 @brief On download progress
 @param progress progress in [0..1]
 */
- (void)onDownloading:(jfloat)progress;

/*!
 @brief On file downloaded
 @param reference downloaded FileSystemReference
 */
- (void)onDownloaded:(id<ARFileSystemReference>)reference;

@end

J2OBJC_EMPTY_STATIC_INIT(ACFileCallback)

J2OBJC_TYPE_LITERAL_HEADER(ACFileCallback)

#define ImDiyalogCoreViewmodelFileCallback ACFileCallback

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreViewmodelFileCallback")
