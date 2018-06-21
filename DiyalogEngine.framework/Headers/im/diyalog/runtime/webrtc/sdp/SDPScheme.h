//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/webrtc/sdp/SDPScheme.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeWebrtcSdpSDPScheme")
#ifdef RESTRICT_ImDiyalogRuntimeWebrtcSdpSDPScheme
#define INCLUDE_ALL_ImDiyalogRuntimeWebrtcSdpSDPScheme 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeWebrtcSdpSDPScheme 1
#endif
#undef RESTRICT_ImDiyalogRuntimeWebrtcSdpSDPScheme

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARSDPScheme_) && (INCLUDE_ALL_ImDiyalogRuntimeWebrtcSdpSDPScheme || defined(INCLUDE_ARSDPScheme))
#define ARSDPScheme_

@class ImDiyalogRuntimeWebrtcSdpEntitiesSDPSession;
@class JavaUtilArrayList;
@protocol JavaUtilList;

@interface ARSDPScheme : NSObject {
 @public
  ImDiyalogRuntimeWebrtcSdpEntitiesSDPSession *sessionLevel_;
  JavaUtilArrayList *mediaLevel_;
}

#pragma mark Public

- (instancetype)initWithImDiyalogRuntimeWebrtcSdpEntitiesSDPSession:(ImDiyalogRuntimeWebrtcSdpEntitiesSDPSession *)sessionLevel
                                                   withJavaUtilList:(id<JavaUtilList>)mediaLevel;

- (JavaUtilArrayList *)getMediaLevel;

- (ImDiyalogRuntimeWebrtcSdpEntitiesSDPSession *)getSessionLevel;

- (NSString *)toSDP;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARSDPScheme)

J2OBJC_FIELD_SETTER(ARSDPScheme, sessionLevel_, ImDiyalogRuntimeWebrtcSdpEntitiesSDPSession *)
J2OBJC_FIELD_SETTER(ARSDPScheme, mediaLevel_, JavaUtilArrayList *)

FOUNDATION_EXPORT void ARSDPScheme_initWithImDiyalogRuntimeWebrtcSdpEntitiesSDPSession_withJavaUtilList_(ARSDPScheme *self, ImDiyalogRuntimeWebrtcSdpEntitiesSDPSession *sessionLevel, id<JavaUtilList> mediaLevel);

FOUNDATION_EXPORT ARSDPScheme *new_ARSDPScheme_initWithImDiyalogRuntimeWebrtcSdpEntitiesSDPSession_withJavaUtilList_(ImDiyalogRuntimeWebrtcSdpEntitiesSDPSession *sessionLevel, id<JavaUtilList> mediaLevel) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARSDPScheme *create_ARSDPScheme_initWithImDiyalogRuntimeWebrtcSdpEntitiesSDPSession_withJavaUtilList_(ImDiyalogRuntimeWebrtcSdpEntitiesSDPSession *sessionLevel, id<JavaUtilList> mediaLevel);

J2OBJC_TYPE_LITERAL_HEADER(ARSDPScheme)

@compatibility_alias ImDiyalogRuntimeWebrtcSdpSDPScheme ARSDPScheme;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeWebrtcSdpSDPScheme")