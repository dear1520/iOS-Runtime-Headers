/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKShareTargetBrowser : NSObject <CATTaskClientDelegate, CATTaskOperationNotificationDelegate> {
    CATRemoteTaskOperation * mBrowseForInstructorTargetsOperation;
    CATRemoteTaskOperation * mBrowseForStudentTargetsOperation;
    bool  mBrowsing;
    <CRKShareTargetBrowserDelegate> * mDelegate;
    NSObject<OS_dispatch_queue> * mDelegateQueue;
    CATTaskClient * mInstructorClient;
    NSSet * mInstructorTargets;
    bool  mIsValid;
    CATOperationQueue * mOperationQueue;
    CATTaskClient * mStudentClient;
    NSSet * mStudentTargets;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)acquireStudentActivityAssertion;
- (void)browseForInstructorTargetsOperationDidFinish:(id)arg1;
- (void)browseForStudentTargetsOperationDidFinish:(id)arg1;
- (void)client:(id)arg1 didInterruptWithError:(id)arg2;
- (void)clientDidConnect:(id)arg1;
- (void)clientDidDisconnect:(id)arg1;
- (void)connectToInstructor;
- (void)dealloc;
- (void)delegateDidFindTargets:(id)arg1;
- (void)delegateDidInterruptWithError:(id)arg1;
- (void)delegateDidRemoveTargets:(id)arg1;
- (void)fetchInstructorEndpointOperationDidFinish:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)instructorTargetsDidChange:(id)arg1;
- (void)invalidate;
- (id)makeShareTargetsWithDictionaries:(id)arg1 taskClient:(id)arg2;
- (void)resume;
- (void)resumeWithTransport:(id)arg1;
- (void)startBrowsingForInstructorTargetsIfNeeded;
- (void)startBrowsingForStudentTargetsIfNeeded;
- (void)stopBrowsingForInstructorTargets;
- (void)stopBrowsingForStudentTargets;
- (void)studentTargetsDidChange:(id)arg1;
- (void)suspend;
- (void)taskOperation:(id)arg1 didPostNotificationWithName:(id)arg2 userInfo:(id)arg3;

@end