//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/webrtc/sdp/SDP.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeWebrtcSdpSDP")
#ifdef RESTRICT_ImDiyalogRuntimeWebrtcSdpSDP
#define INCLUDE_ALL_ImDiyalogRuntimeWebrtcSdpSDP 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeWebrtcSdpSDP 1
#endif
#undef RESTRICT_ImDiyalogRuntimeWebrtcSdpSDP

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARSDP_) && (INCLUDE_ALL_ImDiyalogRuntimeWebrtcSdpSDP || defined(INCLUDE_ARSDP))
#define ARSDP_

@class ARSDPScheme;

@interface ARSDP : NSObject

#pragma mark Public

- (instancetype)init;

+ (ARSDPScheme *)parseWithNSString:(NSString *)sdp;

@end

J2OBJC_EMPTY_STATIC_INIT(ARSDP)

FOUNDATION_EXPORT ARSDPScheme *ARSDP_parseWithNSString_(NSString *sdp);

FOUNDATION_EXPORT void ARSDP_init(ARSDP *self);

J2OBJC_TYPE_LITERAL_HEADER(ARSDP)

@compatibility_alias ImDiyalogRuntimeWebrtcSdpSDP ARSDP;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeWebrtcSdpSDP")