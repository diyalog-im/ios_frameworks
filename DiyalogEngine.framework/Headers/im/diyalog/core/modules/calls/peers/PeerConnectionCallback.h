//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/calls/peers/PeerConnectionCallback.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesCallsPeersPeerConnectionCallback")
#ifdef RESTRICT_ImDiyalogCoreModulesCallsPeersPeerConnectionCallback
#define INCLUDE_ALL_ImDiyalogCoreModulesCallsPeersPeerConnectionCallback 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesCallsPeersPeerConnectionCallback 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesCallsPeersPeerConnectionCallback

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesCallsPeersPeerConnectionCallback_) && (INCLUDE_ALL_ImDiyalogCoreModulesCallsPeersPeerConnectionCallback || defined(INCLUDE_ImDiyalogCoreModulesCallsPeersPeerConnectionCallback))
#define ImDiyalogCoreModulesCallsPeersPeerConnectionCallback_

@protocol ARWebRTCMediaStream;

/*!
 @brief Peer Connection Callback
 */
@protocol ImDiyalogCoreModulesCallsPeersPeerConnectionCallback < NSObject, JavaObject >

/*!
 @brief Called when offer need to be sent to other peer
 @param sdp sdp of the offer
 */
- (void)onOfferWithLong:(jlong)sessionId
           withNSString:(NSString *)sdp;

/*!
 @brief Called when answer need to be sent to other peer
 @param sdp sdp of the answer
 */
- (void)onAnswerWithLong:(jlong)sessionId
            withNSString:(NSString *)sdp;

/*!
 @brief Called when new ICE candidate was found
 @param mdpIndex index in source SDP line
 @param id_       id of candidate
 @param sdp      sdp of candidate
 */
- (void)onCandidateWithInt:(jint)mdpIndex
              withNSString:(NSString *)id_
              withNSString:(NSString *)sdp;

/*!
 @brief Called when negotiation finished successfully
 */
- (void)onNegotiationSuccessfulWithLong:(jlong)sessionId;

/*!
 @brief Called when peer stream was added
 @param stream added stream
 */
- (void)onStreamAddedWithARWebRTCMediaStream:(id<ARWebRTCMediaStream>)stream;

/*!
 @brief Called when peer was removed
 @param stream removed stream
 */
- (void)onStreamRemovedWithARWebRTCMediaStream:(id<ARWebRTCMediaStream>)stream;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesCallsPeersPeerConnectionCallback)

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesCallsPeersPeerConnectionCallback)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesCallsPeersPeerConnectionCallback")
