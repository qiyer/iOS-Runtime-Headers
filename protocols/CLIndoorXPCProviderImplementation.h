/* Generated by RuntimeBrowser.
 */

@protocol CLIndoorXPCProviderImplementation <NSObject>

@required

- (NSString *)endpointName;
- (Protocol *)remoteObjectProtocol;
- (BOOL)withinQueueCanReinitializeRemoteState;
- (void)withinQueueInvalidateState;
- (NSError *)withinQueuePermanentShutdownReason;
- (void)withinQueueReconnectInvalidatedConnectionFailed:(NSError *)arg1;
- (void)withinQueueReinitializeRemoteState;

@end
