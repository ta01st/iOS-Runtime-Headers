/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@interface GKSessionGlobals : NSObject {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    NSUInteger *_activePIDList;
    NSUInteger _activePIDListCount;
    NSUInteger _activePIDListSize;
    } _lock;
}

- (BOOL)hasActivePID:(NSUInteger)arg1;
- (id)init;
- (void)lock;
- (void)registerPID:(NSUInteger)arg1;
- (void)unlock;
- (void)unregisterPID:(NSUInteger)arg1;

@end