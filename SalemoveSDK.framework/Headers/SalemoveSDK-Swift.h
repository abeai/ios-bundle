// Generated by Apple Swift version 4.2 (swiftlang-1000.11.37.1 clang-1000.11.45.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
@import WebRTC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="SalemoveSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC11SalemoveSDK5Audio")
@interface Audio : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_PROTOCOL("_TtP11SalemoveSDK15AudioStreamable_")
@protocol AudioStreamable
/// Play the incoming/outgoing audio stream
- (void)playAudio;
@end


@interface Audio (SWIFT_EXTENSION(SalemoveSDK)) <AudioStreamable>
- (void)playAudio;
@end




@protocol Interactable;

/// The protocol to configure internals
SWIFT_PROTOCOL("_TtP11SalemoveSDK12Configurable_")
@protocol Configurable
- (BOOL)configureWithSite:(NSString * _Nonnull)site error:(NSError * _Nullable * _Nullable)error;
- (BOOL)configureWithEnvironment:(NSString * _Nonnull)environment error:(NSError * _Nullable * _Nullable)error;
- (void)configureWithInteractor:(id <Interactable> _Nonnull)interactor;
- (BOOL)configureWithAppToken:(NSString * _Nonnull)appToken error:(NSError * _Nullable * _Nullable)error;
@end



enum LogLevel : NSInteger;

SWIFT_PROTOCOL("_TtP11SalemoveSDK17DebugConfigurable_")
@protocol DebugConfigurable
- (void)configureLogLevelWithLevel:(enum LogLevel)level;
@end

@class Operator;
@class EngagementRequest;
@class SalemoveError;

/// The protocol to work with engagement
SWIFT_PROTOCOL("_TtP11SalemoveSDK10Engageable_")
@protocol Engageable
- (void)requestOperators;
- (void)requestEngagementWith:(Operator * _Nonnull)selectedOperator completion:(void (^ _Nonnull)(EngagementRequest * _Nullable, SalemoveError * _Nullable))completion;
- (void)cancelWithEngagementRequest:(EngagementRequest * _Nonnull)engagementRequest completion:(void (^ _Nonnull)(BOOL, SalemoveError * _Nullable))completion;
- (void)endEngagementWithCompletion:(void (^ _Nonnull)(BOOL, SalemoveError * _Nullable))completion;
@end


/// Basic for interacting with the Engagement
SWIFT_PROTOCOL("_TtP11SalemoveSDK18EngagementHandling_")
@protocol EngagementHandling
/// Engagement request was accepted and interaction can be started
- (void)start;
/// Engagement request / active engagement was closed or declined
- (void)end;
@end


/// Engagement request sent to an Operator
SWIFT_CLASS("_TtC11SalemoveSDK17EngagementRequest")
@interface EngagementRequest : NSObject
/// The amount of time in seconds the Operator has to respond to this engagement request
@property (nonatomic, readonly) NSInteger timeout;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// Basic protocol for selecting an Operator
SWIFT_PROTOCOL("_TtP11SalemoveSDK13ErrorHandling_")
@protocol ErrorHandling
/// Error when working with the client library
/// \param reason the description of the failing reason
///
/// \param error the error object why would something fail
///
- (void)failWith:(SalemoveError * _Nonnull)error;
@end


/// Basic protocol for selecting an Operator
SWIFT_PROTOCOL("_TtP11SalemoveSDK16OperatorHandling_")
@protocol OperatorHandling
/// Getting the list of available operators for selection
/// \param operators the list of the operators which can be selected
///
- (void)handleOperatorsWithOperators:(NSArray<Operator *> * _Nonnull)operators;
@end

@class Message;

/// Basic protocol for handling chat incoming messages
SWIFT_PROTOCOL("_TtP11SalemoveSDK15MessageHandling_")
@protocol MessageHandling
/// Receiving a message from an Operator, or a Visitor in the case the message was successfully delivered
/// after sending it using <code>Salemove.send(message:)</code>.
/// \param message Instance of <code>Message</code>
///
- (void)receiveWithMessage:(Message * _Nonnull)message;
/// Handling the incoming messages updates that happen when
/// the client library fetches new information on ‘UIApplicationDidBecomeActive’
@property (nonatomic, readonly, copy) void (^ _Nonnull onMessagesUpdated)(NSArray<Message *> * _Nonnull);
@end

@class MediaUpgradeOffer;
@protocol VideoStreamable;

/// Basic protocol for handling incoming media
SWIFT_PROTOCOL("_TtP11SalemoveSDK13MediaHandling_")
@protocol MediaHandling
/// Handling the incoming media upgrade offer
@property (nonatomic, readonly, copy) void (^ _Nonnull onMediaUpgradeOffer)(MediaUpgradeOffer * _Nonnull, SWIFT_NOESCAPE void (^ _Nonnull)(BOOL));
/// Handling the incoming screen share offer
@property (nonatomic, readonly, copy) void (^ _Nonnull onScreenSharingOffer)(SWIFT_NOESCAPE void (^ _Nonnull)(BOOL));
/// Handling the incoming video stream
@property (nonatomic, readonly, copy) void (^ _Nonnull onVideoStreamAdded)(id <VideoStreamable> _Nonnull);
/// Handling the incoming audio stream
@property (nonatomic, readonly, copy) void (^ _Nonnull onAudioStreamAdded)(id <AudioStreamable> _Nonnull);
/// Handling the incoming screen stream
@property (nonatomic, readonly, copy) void (^ _Nonnull onScreenStreamAdded)(id <VideoStreamable> _Nonnull);
@end


/// Basic protocol that requires implementation before passing over to the client library
SWIFT_PROTOCOL("_TtP11SalemoveSDK12Interactable_")
@protocol Interactable <EngagementHandling, ErrorHandling, MediaHandling, MessageHandling, OperatorHandling>
@end

/// The protocol to configure debug internals
typedef SWIFT_ENUM(NSInteger, LogLevel, closed) {
  LogLevelNone = 0,
  LogLevelError = 1,
  LogLevelDebug = 2,
};



/// MediaUpgradeOffer object sent by the client library
SWIFT_CLASS("_TtC11SalemoveSDK17MediaUpgradeOffer")
@interface MediaUpgradeOffer : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end




/// The protocol to handle different media request
SWIFT_PROTOCOL("_TtP11SalemoveSDK8Mediable_")
@protocol Mediable
- (void)requestMediaUpgradeWithOffer:(MediaUpgradeOffer * _Nonnull)offer completion:(void (^ _Nonnull)(BOOL, SalemoveError * _Nullable))completion;
@end


/// Chat message sent by an Operator or a Visitor
SWIFT_CLASS("_TtC11SalemoveSDK7Message")
@interface Message : NSObject
/// Chat message identifier
@property (nonatomic, readonly, copy) NSString * _Nonnull id;
/// Chat message content
@property (nonatomic, readonly, copy) NSString * _Nonnull content;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end



/// The protocol to send chat messages
SWIFT_PROTOCOL("_TtP11SalemoveSDK11Messageable_")
@protocol Messageable
- (void)sendWithMessage:(NSString * _Nonnull)message completion:(void (^ _Nonnull)(Message * _Nullable, SalemoveError * _Nullable))completion;
- (void)sendWithMessage:(NSString * _Nonnull)message queueID:(NSString * _Nonnull)queueID completion:(void (^ _Nonnull)(Message * _Nullable, SalemoveError * _Nullable))completion;
@end


SWIFT_CLASS("_TtC11SalemoveSDK8Operator")
@interface Operator : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


@class NSCoder;
@class UIEvent;

SWIFT_CLASS("_TtC11SalemoveSDK11OverlayView")
@interface OverlayView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (UIView * _Nullable)hitTest:(CGPoint)point withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
@end


/// Push object sent by the client library
SWIFT_CLASS("_TtC11SalemoveSDK4Push")
@interface Push : NSObject
/// UNNotificationResponse.actionIdentifier that is returned by the system
@property (nonatomic, readonly, copy) NSString * _Nonnull actionIdentifier;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC11SalemoveSDK5Queue")
@interface Queue : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull id;
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC11SalemoveSDK11QueueTicket")
@interface QueueTicket : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// The protocol to queue for an engagement
SWIFT_PROTOCOL("_TtP11SalemoveSDK9Queueable_")
@protocol Queueable
- (void)queueForEngagementWithQueueID:(NSString * _Nonnull)queueID completion:(void (^ _Nonnull)(QueueTicket * _Nullable, SalemoveError * _Nullable))completion;
- (void)cancelWithQueueTicket:(QueueTicket * _Nonnull)queueTicket completion:(void (^ _Nonnull)(BOOL, SalemoveError * _Nullable))completion;
- (void)listQueuesWithCompletion:(void (^ _Nonnull)(NSArray<Queue *> * _Nullable, SalemoveError * _Nullable))completion;
@end


/// Shared instance that can be accessed across all the application
SWIFT_CLASS("_TtC11SalemoveSDK8Salemove")
@interface Salemove : NSObject <Configurable, DebugConfigurable, Engageable, Mediable, Messageable, Queueable>
/// Use this to access the client library, avoid creating the instance manually
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) Salemove * _Nonnull sharedInstance;)
+ (Salemove * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
/// The current handler that the SDK is forwarding the UNNotificationResponse.actionIdentifier to
@property (nonatomic, copy) void (^ _Nullable pushHandler)(Push * _Nonnull);
/// The current selected environment
@property (nonatomic, readonly, copy) NSString * _Nonnull environment;
/// The current selected site
@property (nonatomic, readonly, copy) NSString * _Nonnull site;
/// The current provided app token
@property (nonatomic, readonly, copy) NSString * _Nonnull appToken;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end






@interface Salemove (SWIFT_EXTENSION(SalemoveSDK))
/// Request media upgrade with specific offer
/// \param offer The `MediaUpgradeOffer’ that is used for the request
///
/// \param completion The callback that returns the upgrade result
///
- (void)requestMediaUpgradeWithOffer:(MediaUpgradeOffer * _Nonnull)offer completion:(void (^ _Nonnull)(BOOL, SalemoveError * _Nullable))completion;
@end




@interface Salemove (SWIFT_EXTENSION(SalemoveSDK))
/// Send a chat message
/// \param message The content of the message that should be sent to the operator
///
/// \param completion The callback that will return the <code>Message</code>
///
- (void)sendWithMessage:(NSString * _Nonnull)message completion:(void (^ _Nonnull)(Message * _Nullable, SalemoveError * _Nullable))completion;
/// Send a chat message
/// \param message The content of the message that should be queued
///
/// \param queueID The id of the queue to which the message is sent
///
/// \param completion The callback that will return the <code>Message</code>
///
- (void)sendWithMessage:(NSString * _Nonnull)message queueID:(NSString * _Nonnull)queueID completion:(void (^ _Nonnull)(Message * _Nullable, SalemoveError * _Nullable))completion;
@end




@interface Salemove (SWIFT_EXTENSION(SalemoveSDK))
/// Configure log level
/// \param level One of the ‘LogLevel’ values that the logger should use
///
- (void)configureLogLevelWithLevel:(enum LogLevel)level;
@end


@interface Salemove (SWIFT_EXTENSION(SalemoveSDK))
/// Queue for an Engagement with a specific queue
/// \param queueID The id that will be used by the client library
///
/// \param completion The callback that will return the <code>QueueTicket</code>
///
- (void)queueForEngagementWithQueueID:(NSString * _Nonnull)queueID completion:(void (^ _Nonnull)(QueueTicket * _Nullable, SalemoveError * _Nullable))completion;
/// Cancel the Engagement queueing with specific ticket
/// \param queueTicket The <code>QueueTicket</code> that was used to enqueue
///
/// \param completion The callback that will return the dequeuing result
///
- (void)cancelWithQueueTicket:(QueueTicket * _Nonnull)queueTicket completion:(void (^ _Nonnull)(BOOL, SalemoveError * _Nullable))completion;
/// List all Queues of the configured site
/// \param completion The callback that will return the <code>Queue</code> list
///
- (void)listQueuesWithCompletion:(void (^ _Nonnull)(NSArray<Queue *> * _Nullable, SalemoveError * _Nullable))completion;
@end




@interface Salemove (SWIFT_EXTENSION(SalemoveSDK))
/// Change the site used by the client library
/// \param site The siteID that should be selected
///
- (BOOL)configureWithSite:(NSString * _Nonnull)site error:(NSError * _Nullable * _Nullable)error;
/// Change the environment used by the client library
/// \param environment The environment baseURL that should be selected
///
- (BOOL)configureWithEnvironment:(NSString * _Nonnull)environment error:(NSError * _Nullable * _Nullable)error;
/// Change the interactor used by the client library
/// \param interactor Interactable instance that the client library will communicate with
///
- (void)configureWithInteractor:(id <Interactable> _Nonnull)interactor;
/// Change the appToken used by the client library
/// \param appToken The token that is going to be used by the client library
///
- (BOOL)configureWithAppToken:(NSString * _Nonnull)appToken error:(NSError * _Nullable * _Nullable)error;
@end




@interface Salemove (SWIFT_EXTENSION(SalemoveSDK))
/// Request an Engagement with a selected Operator
/// \param selectedOperator The Operator that will be selected
///
/// \param completion The callback that will return the <code>EngagementRequest</code>
///
- (void)requestEngagementWith:(Operator * _Nonnull)selectedOperator completion:(void (^ _Nonnull)(EngagementRequest * _Nullable, SalemoveError * _Nullable))completion;
/// Cancel an ongoing EngagementRequest
/// \param engagementRequest The ongoing EngagementRequest to be canceled
///
/// \param completion The callback that will return the canceling result
///
- (void)cancelWithEngagementRequest:(EngagementRequest * _Nonnull)engagementRequest completion:(void (^ _Nonnull)(BOOL, SalemoveError * _Nullable))completion;
/// Request an Operator for an Engagement
- (void)requestOperators;
/// End an engagement
- (void)endEngagementWithCompletion:(void (^ _Nonnull)(BOOL, SalemoveError * _Nullable))completion;
@end





@class UIApplication;

/// The basic gateway class that interacts with the client library through the app delegate
SWIFT_CLASS("_TtC11SalemoveSDK19SalemoveAppDelegate")
@interface SalemoveAppDelegate : NSObject <UIApplicationDelegate>
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions;
- (void)application:(UIApplication * _Nonnull)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData * _Nonnull)deviceToken;
- (void)applicationDidBecomeActive:(UIApplication * _Nonnull)application;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11SalemoveSDK13SalemoveError")
@interface SalemoveError : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull reason;
@property (nonatomic, readonly) NSError * _Nullable error;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC11SalemoveSDK10StreamView")
@interface StreamView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class RTCEAGLVideoView;

@interface StreamView (SWIFT_EXTENSION(SalemoveSDK)) <RTCEAGLVideoViewDelegate>
- (void)videoView:(RTCEAGLVideoView * _Nonnull)videoView didChangeVideoSize:(CGSize)size;
@end






SWIFT_CLASS("_TtC11SalemoveSDK5Video")
@interface Video : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_PROTOCOL("_TtP11SalemoveSDK15VideoStreamable_")
@protocol VideoStreamable
/// Access the stream view
///
/// returns:
/// <code>StreamView</code> that contains the video stream
- (StreamView * _Nonnull)getStreamView SWIFT_WARN_UNUSED_RESULT;
/// Play the incoming/outgoing video stream
- (void)playVideo;
/// Pause the incoming/outgoing video stream
- (void)pause;
/// Resume the incoming/outgoing video stream
- (void)resume;
/// Stop the incoming/outgoing video stream
- (void)stop;
/// State of the video stream
///
/// returns:
/// bool indicating if the stream is paused or not
@property (nonatomic, readonly) BOOL isPaused;
/// Source of the video stream
///
/// returns:
/// bool indicating if the stream is local or remote
@property (nonatomic, readonly) BOOL isRemote;
@end


@interface Video (SWIFT_EXTENSION(SalemoveSDK)) <VideoStreamable>
- (StreamView * _Nonnull)getStreamView SWIFT_WARN_UNUSED_RESULT;
- (void)playVideo;
- (void)pause;
- (void)resume;
- (void)stop;
@property (nonatomic, readonly) BOOL isPaused;
@property (nonatomic, readonly) BOOL isRemote;
@end


#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
