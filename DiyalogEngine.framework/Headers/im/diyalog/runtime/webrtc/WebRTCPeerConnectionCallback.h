//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/webrtc/WebRTCPeerConnectionCallback.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeWebrtcWebRTCPeerConnectionCallback")
#ifdef RESTRICT_ImDiyalogRuntimeWebrtcWebRTCPeerConnectionCallback
#define INCLUDE_ALL_ImDiyalogRuntimeWebrtcWebRTCPeerConnectionCallback 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeWebrtcWebRTCPeerConnectionCallback 1
#endif
#undef RESTRICT_ImDiyalogRuntimeWebrtcWebRTCPeerConnectionCallback

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARWebRTCPeerConnectionCallback_) && (INCLUDE_ALL_ImDiyalogRuntimeWebrtcWebRTCPeerConnectionCallback || defined(INCLUDE_ARWebRTCPeerConnectionCallback))
#define ARWebRTCPeerConnectionCallback_

@protocol ARWebRTCMediaStream;

/*!
 @brief WebRTC Peer Connection Callback for handling peer connection events
 */
@protocol ARWebRTCPeerConnectionCallback < NSObject, JavaObject >

/*!
 @brief On Got ICE candidate
 @param label     index of candidate
 @param id_        id of candidate
 @param candidate candidate
 */
- (void)onCandidateWithLabel:(jint)label
                      withId:(NSString *)id_
               withCandidate:(NSString *)candidate;

/*!
 @brief On Remote Stream Added
 @param stream stream
 */
- (void)onStreamAdded:(id<ARWebRTCMediaStream>)stream;

/*!
 @brief On Remote Stream Removed
 @param stream removed stream. References can be different from that passed in onStreamAdded
 */
- (void)onStreamRemoved:(id<ARWebRTCMediaStream>)stream;

/*!
 @brief When renegotiation is needed
 */
- (void)onRenegotiationNeeded;

@end

J2OBJC_EMPTY_STATIC_INIT(ARWebRTCPeerConnectionCallback)

J2OBJC_TYPE_LITERAL_HEADER(ARWebRTCPeerConnectionCallback)

#define ImDiyalogRuntimeWebrtcWebRTCPeerConnectionCallback ARWebRTCPeerConnectionCallback

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeWebrtcWebRTCPeerConnectionCallback")