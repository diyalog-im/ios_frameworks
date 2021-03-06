//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/webrtc/WebRTCPeerConnection.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeWebrtcWebRTCPeerConnection")
#ifdef RESTRICT_ImDiyalogRuntimeWebrtcWebRTCPeerConnection
#define INCLUDE_ALL_ImDiyalogRuntimeWebrtcWebRTCPeerConnection 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeWebrtcWebRTCPeerConnection 1
#endif
#undef RESTRICT_ImDiyalogRuntimeWebrtcWebRTCPeerConnection

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARWebRTCPeerConnection_) && (INCLUDE_ALL_ImDiyalogRuntimeWebrtcWebRTCPeerConnection || defined(INCLUDE_ARWebRTCPeerConnection))
#define ARWebRTCPeerConnection_

@class ARPromise;
@class ARWebRTCSessionDescription;
@protocol ARWebRTCMediaStream;
@protocol ARWebRTCPeerConnectionCallback;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

/*!
 @brief WebRTC peer connection
 */
@protocol ARWebRTCPeerConnection < NSObject, JavaObject >

/*!
 @brief Adding Callback for events from peer connection
 @param callback callback for adding
 */
- (void)addCallback:(id<ARWebRTCPeerConnectionCallback> __nonnull)callback;

/*!
 @brief Remove Callback for events from peer connection
 @param callback callback for adding
 */
- (void)removeCallback:(id<ARWebRTCPeerConnectionCallback> __nonnull)callback;

/*!
 @brief Adding Remote Candidate
 @param index index of candidate
 @param id_    id of candidate
 @param sdp   candidate SDP
 */
- (void)addCandidateWithIndex:(jint)index
                       withId:(NSString * __nonnull)id_
                      withSDP:(NSString * __nonnull)sdp;

/*!
 @brief Adding Own Stream
 @param stream added stream
 */
- (void)addOwnStream:(id<ARWebRTCMediaStream> __nonnull)stream;

/*!
 @brief Removing Own Stream
 @param stream removed stream
 */
- (void)removeOwnStream:(id<ARWebRTCMediaStream> __nonnull)stream;

/*!
 @brief Setting Local Description
 @param description_ description to set
 @return Promise of set description. MUST be same as argument.
 */
- (ARPromise * __nonnull)setLocalDescription:(ARWebRTCSessionDescription * __nonnull)description_;

/*!
 @brief Setting Remote Description
 @param description_ description to set
 @return Promise of set description. MUST be same as argument.
 */
- (ARPromise * __nonnull)setRemoteDescription:(ARWebRTCSessionDescription * __nonnull)description_;

/*!
 @brief Create Offer
 @return Promise of created offer
 */
- (ARPromise * __nonnull)creteOffer;

/*!
 @brief Create Answer
 @return Promise of created answer
 */
- (ARPromise * __nonnull)createAnswer;

/*!
 @brief Closing peer connection
 */
- (void)close;

@end

J2OBJC_EMPTY_STATIC_INIT(ARWebRTCPeerConnection)

J2OBJC_TYPE_LITERAL_HEADER(ARWebRTCPeerConnection)

#define ImDiyalogRuntimeWebrtcWebRTCPeerConnection ARWebRTCPeerConnection

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeWebrtcWebRTCPeerConnection")
