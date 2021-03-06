//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/WebRTC.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeWebRTC")
#ifdef RESTRICT_ImDiyalogRuntimeWebRTC
#define INCLUDE_ALL_ImDiyalogRuntimeWebRTC 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeWebRTC 1
#endif
#undef RESTRICT_ImDiyalogRuntimeWebRTC

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARWebRTC_) && (INCLUDE_ALL_ImDiyalogRuntimeWebRTC || defined(INCLUDE_ARWebRTC))
#define ARWebRTC_

@class ARPromise;
@class ARWebRTCSettings;
@class IOSObjectArray;

@interface ARWebRTC : NSObject

#pragma mark Public

- (instancetype)init;

+ (ARPromise *)createPeerConnectionWithARWebRTCIceServerArray:(IOSObjectArray *)iceServers
                                         withARWebRTCSettings:(ARWebRTCSettings *)webRTCSettings;

+ (ARPromise *)getUserAudio;

+ (jboolean)isSupportsPreConnections;

@end

J2OBJC_STATIC_INIT(ARWebRTC)

FOUNDATION_EXPORT ARPromise *ARWebRTC_createPeerConnectionWithARWebRTCIceServerArray_withARWebRTCSettings_(IOSObjectArray *iceServers, ARWebRTCSettings *webRTCSettings);

FOUNDATION_EXPORT ARPromise *ARWebRTC_getUserAudio();

FOUNDATION_EXPORT jboolean ARWebRTC_isSupportsPreConnections();

FOUNDATION_EXPORT void ARWebRTC_init(ARWebRTC *self);

FOUNDATION_EXPORT ARWebRTC *new_ARWebRTC_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARWebRTC *create_ARWebRTC_init();

J2OBJC_TYPE_LITERAL_HEADER(ARWebRTC)

@compatibility_alias ImDiyalogRuntimeWebRTC ARWebRTC;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeWebRTC")
