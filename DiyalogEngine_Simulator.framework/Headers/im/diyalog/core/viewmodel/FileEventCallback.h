//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/viewmodel/FileEventCallback.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreViewmodelFileEventCallback")
#ifdef RESTRICT_ImDiyalogCoreViewmodelFileEventCallback
#define INCLUDE_ALL_ImDiyalogCoreViewmodelFileEventCallback 0
#else
#define INCLUDE_ALL_ImDiyalogCoreViewmodelFileEventCallback 1
#endif
#undef RESTRICT_ImDiyalogCoreViewmodelFileEventCallback

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACFileEventCallback_) && (INCLUDE_ALL_ImDiyalogCoreViewmodelFileEventCallback || defined(INCLUDE_ACFileEventCallback))
#define ACFileEventCallback_

@protocol ACFileEventCallback < NSObject, JavaObject >

- (void)onDownloadedWithLong:(jlong)fileId;

@end

J2OBJC_EMPTY_STATIC_INIT(ACFileEventCallback)

J2OBJC_TYPE_LITERAL_HEADER(ACFileEventCallback)

#define ImDiyalogCoreViewmodelFileEventCallback ACFileEventCallback

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreViewmodelFileEventCallback")
